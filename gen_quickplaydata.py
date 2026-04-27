#!/usr/bin/env python3
"""
gen_quickplaydata.py  —  regenerate src/data/QuickPlayData.cpp from QuickPlayRaids.json.

Run from the project root:
    python3 gen_quickplaydata.py
"""
import json
import sys
from pathlib import Path

ROOT    = Path(__file__).parent
SRC     = ROOT / 'QuickPlayRaids.json'
OUT_CPP = ROOT / 'src' / 'data' / 'QuickPlayData.cpp'

# ── Helpers ────────────────────────────────────────────────────────────────────

def cpp_str(s) -> str:
    if s is None:
        s = ''
    s = str(s)
    s = s.replace('\\', '\\\\')
    s = s.replace('"',  '\\"')
    s = s.replace('\r', '')
    s = s.replace('\n', '\\n')
    s = s.replace('\t', '\\t')
    return f'"{s}"'

def field(d: dict, key: str) -> str:
    v = d.get(key)
    return str(v) if v is not None else ''

def vec_str(lst, pad: str) -> list[str]:
    """Render a list of strings as a C++ initializer-list block."""
    if not lst:
        return [f'{pad}{{}}']
    lines = [f'{pad}{{']
    for item in lst:
        lines.append(f'{pad}    {cpp_str(item)},')
    lines.append(f'{pad}}}')
    return lines

# ── Code generation ────────────────────────────────────────────────────────────

BANNER = '═' * 72

def gen_mechanic(m: dict, pad: str) -> list[str]:
    p = pad
    return [
        f'{p}{{',
        f'{p}    {cpp_str(field(m, "name"))},',
        f'{p}    {cpp_str(field(m, "category"))},',
        f'{p}    {cpp_str(field(m, "description"))},',
        f'{p}    {cpp_str(field(m, "handling"))},',
        f'{p}    {cpp_str(field(m, "effect_on_fail"))}',
        f'{p}}},',
    ]

def gen_encounter(enc: dict) -> list[str]:
    p2  = '        '    #  8 — encounter block
    p3  = '            '  # 12 — encounter fields
    p4  = '                '  # 16 — mechanic block
    p5  = '                    '  # 20 — mechanic fields (inside gen_mechanic)

    ts  = enc.get('training_script') or {}
    pre_pull   = ts.get('pre_pull')   or []
    phase_walk = ts.get('phase_walkthrough') or []
    recovery   = ts.get('recovery_plans') or []

    lines = [
        f'{p2}// {BANNER}',
        f'{p2}// {enc.get("name", "")}',
        f'{p2}// {BANNER}',
        f'{p2}{{',
        f'{p3}{cpp_str(field(enc, "name"))},',
        f'{p3}{cpp_str(field(enc, "wing"))},',
        f'{p3}{cpp_str(field(enc.get("overview", {}), "summary"))},',
        f'{p3}{cpp_str(field(enc.get("overview", {}), "goal"))},',
    ]

    # mechanics vector
    mechs = enc.get('mechanics') or []
    lines.append(f'{p3}{{')
    for m in mechs:
        lines.extend(gen_mechanic(m, p4))
    lines.append(f'{p3}}},')

    # common_mistakes
    lines.extend(vec_str(enc.get('common_mistakes') or [], p3))
    lines[-1] += ','

    # callouts
    lines.extend(vec_str(enc.get('callouts') or [], p3))
    lines[-1] += ','

    # timeline
    lines.extend(vec_str(enc.get('timeline_notes') or [], p3))
    lines[-1] += ','

    # pre_pull
    lines.extend(vec_str(pre_pull, p3))
    lines[-1] += ','

    # phase_walk
    lines.extend(vec_str(phase_walk, p3))
    lines[-1] += ','

    # recovery (last field — no trailing comma on the closing brace)
    lines.extend(vec_str(recovery, p3))

    lines.append(f'{p2}}},')
    return lines

# ── Main ───────────────────────────────────────────────────────────────────────

def main() -> None:
    try:
        data = json.loads(SRC.read_text(encoding='utf-8'))
    except json.JSONDecodeError as e:
        print(f'ERROR: {SRC.name}: {e}')
        sys.exit(1)

    if not isinstance(data, list):
        print('ERROR: QuickPlayRaids.json must be a JSON array at the top level.')
        sys.exit(1)

    out: list[str] = [
        '#include "QuickPlayData.h"',
        '',
        'std::vector<QPEncounter> g_QuickPlay;',
        '',
        'void InitQuickPlayData()',
        '{',
        '    g_QuickPlay =',
        '    {',
    ]

    for enc in data:
        name = enc.get('name', '?')
        mech_count = len(enc.get('mechanics') or [])
        print(f'  {name}  ({mech_count} mechanics)')
        out.extend(gen_encounter(enc))

    out += ['    };', '}', '']

    OUT_CPP.write_text('\n'.join(out), encoding='utf-8')
    print(f'\nWrote {OUT_CPP.relative_to(ROOT)}  ({len(data)} encounters)')

if __name__ == '__main__':
    main()
