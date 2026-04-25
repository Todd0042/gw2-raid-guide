#!/usr/bin/env python3
"""
gen_wingdata.py  —  regenerate src/data/WingData.cpp from Wing*Training.json.

Run from the project root:
    python3 gen_wingdata.py

Any number of major_mechanics or minor_mechanics entries per boss is supported.
Add or remove entries in the JSON files and re-run; no C++ struct changes needed.
Template entries (names containing '[') are silently skipped.
"""
import json
import re
import sys
from pathlib import Path

ROOT    = Path(__file__).parent
OUT_CPP = ROOT / 'src' / 'data' / 'WingData.cpp'

# ── Helpers ────────────────────────────────────────────────────────────────────

def cpp_str(s: str) -> str:
    """Escape a Python string for use inside a C++ double-quoted string literal."""
    s = s.replace('\\', '\\\\')
    s = s.replace('"',  '\\"')
    s = s.replace('\r', '')
    s = s.replace('\n', '\\n')
    s = s.replace('\t', '\\t')
    return f'"{s}"'

def tab_label(full_name: str) -> str:
    """'Wing 1 – Spirit Vale'  →  'Spirit Vale'"""
    m = re.match(r'Wing\s+\d+\s*[–\-—]\s*(.+)', full_name)
    return m.group(1).strip() if m else full_name

def is_template(name: str) -> bool:
    return '[' in name or ']' in name

# ── Code generation ────────────────────────────────────────────────────────────

BANNER = '═' * 72

def field(d: dict, key: str) -> str:
    """Return dict value as string; treat missing or null as empty string."""
    v = d.get(key)
    return str(v) if v is not None else ''

def gen_major(mech: dict, pad: str) -> list[str]:
    p = pad
    return [
        f'{p}{{',
        f'{p}    {cpp_str(field(mech, "name"))},',
        f'{p}    {cpp_str(field(mech, "when"))},',
        f'{p}    {cpp_str(field(mech, "watch_for"))},',
        f'{p}    {cpp_str(field(mech, "what_to_do"))},',
        f'{p}    {cpp_str(field(mech, "failure"))},',
        f'{p}    {cpp_str(field(mech, "common_mistakes"))}',
        f'{p}}},',
    ]

def gen_minor(mech: dict, pad: str) -> str:
    name    = cpp_str(field(mech, 'name'))
    summary = cpp_str(field(mech, 'summary'))
    return f'{pad}{{ {name}, {summary} }},'

def gen_boss(boss_name: str, boss_data: dict, pad: str) -> list[str]:
    p   = pad            # 16-space indent for the boss block
    p5  = p + '    '     # 20 — name + vector openers
    p6  = p5 + '    '    # 24 — mechanic blocks
    p7  = p6 + '    '    # 28 — mechanic fields (used inside gen_major)

    major = [m for m in boss_data.get('major_mechanics', [])
             if m.get('name', '').strip() and not is_template(m.get('name', ''))]
    minor = [m for m in boss_data.get('minor_mechanics', [])
             if m.get('name', '').strip() and not is_template(m.get('name', ''))]

    lines = [f'{p}{{', f'{p5}{cpp_str(boss_name)},']

    # major mechanics vector
    lines.append(f'{p5}{{')
    for m in major:
        lines.extend(gen_major(m, p6))
    lines.append(f'{p5}}},')

    # minor mechanics vector
    lines.append(f'{p5}{{')
    for m in minor:
        lines.append(gen_minor(m, p6))
    lines.append(f'{p5}}}')

    lines.append(f'{p}}},')
    return lines

def gen_wing(wing_name: str, bosses: dict) -> list[str]:
    tab  = tab_label(wing_name)
    p2   = '        '   #  8 — wing block
    p3   = '            '  # 12 — wing fields
    p4   = '                '  # 16 — boss blocks

    lines = [
        f'{p2}// {BANNER}',
        f'{p2}// {wing_name}',
        f'{p2}// {BANNER}',
        f'{p2}{{',
        f'{p3}{cpp_str(tab)},',
        f'{p3}{cpp_str(wing_name)},',
        f'{p3}{{',
    ]

    for boss_name, boss_data in bosses.items():
        if is_template(boss_name):
            continue
        lines.extend(gen_boss(boss_name, boss_data, p4))

    lines += [f'{p3}}}', f'{p2}}},']
    return lines

# ── Main ───────────────────────────────────────────────────────────────────────

def main() -> None:
    wings: list[tuple[str, dict]] = []

    for i in range(1, 10):
        path = ROOT / f'Wing{i}Training.json'
        if not path.exists():
            continue
        try:
            data = json.loads(path.read_text(encoding='utf-8'))
        except json.JSONDecodeError as e:
            print(f'ERROR: {path.name}: {e}')
            sys.exit(1)

        for wing_name, bosses in data.items():
            if is_template(wing_name):
                print(f'  skipping {path.name} (template placeholder)')
                continue
            boss_count = sum(1 for b in bosses if not is_template(b))
            wings.append((wing_name, bosses))
            print(f'  {path.name}: {wing_name}  ({boss_count} bosses)')

    if not wings:
        print('ERROR: no wing data found — check that Wing*Training.json files exist.')
        sys.exit(1)

    # Build the file
    out: list[str] = [
        '#include "WingData.h"',
        '',
        'std::vector<Wing> g_Wings;',
        '',
        'void InitWingData()',
        '{',
        '    g_Wings =',
        '    {',
    ]

    for wing_name, bosses in wings:
        out.extend(gen_wing(wing_name, bosses))

    out += ['    };', '}', '']

    OUT_CPP.write_text('\n'.join(out), encoding='utf-8')
    print(f'\nWrote {OUT_CPP.relative_to(ROOT)}  ({len(wings)} wings)')

if __name__ == '__main__':
    main()
