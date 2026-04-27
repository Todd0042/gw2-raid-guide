#include "QuickPlayData.h"

std::vector<QPEncounter> g_IcebroodStrikes;

void InitIcebroodStrikeData()
{
    g_IcebroodStrikes =
    {
        // ════════════════════════════════════════════════════════════════════════
        // Shiverpeaks Pass
        // ════════════════════════════════════════════════════════════════════════
        {
            "Shiverpeaks Pass",
            "Icebrood Saga",
            "An introductory strike mission against the Icebrood Construct featuring basic movement mechanics across two phases. The first half teaches dodging, jumping, and sidestepping; the second half introduces standing on platforms to avoid ice projectiles.",
            "Defeat the Icebrood Construct by dodging shockwaves, avoiding the whirlwind, and adapting to platform mechanics in the second phase.",
            {
                {
                    "Slam",
                    "Shockwave / Knockdown",
                    "The boss slams the ground, releasing a shockwave that knocks down players. In phase 2, the shockwave applies a debuff instead and destroys ice platforms.",
                    "Jump over the shockwave, dodge, or use a block. Crowd control immunity skills also work.",
                    "Players are knocked down and may be hit by follow-up attacks while prone."
                },
                {
                    "Boulder Rush",
                    "AoE / Proximity",
                    "Boulders spin around the boss, dealing light damage to players who are too far from the Construct.",
                    "Stack close to the Icebrood Construct whenever boulders appear.",
                    "Players at distance take repeated hits from spinning boulders."
                },
                {
                    "Whirlwind",
                    "Knockback / Arena Control",
                    "The boss sweeps its arm across half the arena, knocking back players and creating a brief forced spin. In phase 2 it occasionally knocks players down instead.",
                    "Continue attacking during the spin and regroup after. Stability or CC immunity prevents the knockback.",
                    "Players are knocked back to the arena edge and must regroup, losing DPS uptime."
                },
                {
                    "Ice Shatter",
                    "Platform Mechanic / Projectiles",
                    "Replaces Boulder Rush in phase 2. Ice platforms appear around the boss that shoot projectiles at players not standing on them.",
                    "Move onto an ice platform when they appear. Note that Slam destroys platforms, so be ready to reposition.",
                    "Players standing on the boss or on the ground take repeated ice projectile hits."
                },
            },
            {
                "Not jumping over the Slam shockwave and getting knocked down repeatedly.",
                "Standing at mid-range during Boulder Rush and taking unnecessary chip damage.",
                "Not moving onto ice platforms in phase 2 and getting peppered by projectiles.",
                "Chasing the boss around the arena during Whirlwind instead of regrouping in place.",
            },
            {
                "Shockwave — jump!",
                "Stack in tight — boulders!",
                "Whirlwind — regroup after!",
                "Phase 2 — get on the platforms!",
                "Platforms are gone — move to new one!",
            },
            {
                "Phase 1 is a straightforward DPS check while learning to jump shockwaves and stack during Boulder Rush.",
                "The 50% transition is brief — the boss becomes invulnerable momentarily, then resumes with modified mechanics.",
                "Phase 2 introduces platform positioning. Ice Shatter and Slam interact, so players must be ready to replatform after each shockwave.",
            },
            {
                "This is the easiest strike mission — use it to practice jumping over shockwaves.",
                "When the boss raises its arm and a red ring appears, jump over the wave.",
                "Stack close to the boss during boulder spin to avoid damage.",
                "In phase 2, move onto the ice platforms to avoid projectiles.",
            },
            {
                "Phase 1: Attack the boss. Jump over every Slam shockwave. Stack in tight during Boulder Rush. Regroup fast after Whirlwind.",
                "Phase 2 (50%): Platforms replace boulders. Stand on platforms. Slam now destroys platforms, so be ready to move to a new one after each shockwave.",
            },
            {
                "If players are knocked to the edge by Whirlwind, regroup on the boss immediately.",
                "If several players go down, stabilize with heals and revive during a safe window between mechanics.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Voice of the Fallen and Claw of the Fallen
        // ════════════════════════════════════════════════════════════════════════
        {
            "Voice of the Fallen and Claw of the Fallen",
            "Icebrood Saga",
            "A dual-boss encounter against two Kodan — Voice of the Fallen (ranged bow) and Claw of the Fallen (melee hammer). Both bosses must be brought to low health simultaneously; killing one early causes the survivor to use more dangerous attacks. The arena features lit and unlit zones that must be avoided.",
            "Burn both bosses down evenly to sub-20%, trigger the shared defiance bar phase, break it, then finish both.",
            {
                {
                    "Immobilization Shots",
                    "Ranged / Condition",
                    "Voice of the Fallen fires a scatter of ranged arrows that apply Immobilize on hit.",
                    "Use projectile reflect or block skills (e.g., Feedback, Druid Staff 5 Sublime Conversion) to negate the volley.",
                    "Immobilized players cannot dodge or reposition during subsequent mechanics."
                },
                {
                    "Hammer Slam Combo",
                    "Melee / Stun",
                    "Claw of the Fallen chains melee attacks culminating in a hammer slam that stuns players.",
                    "Keep a stunbreak ready. Shared stability from supports prevents the stun entirely.",
                    "Stunned players cannot act and may take follow-up damage before recovering."
                },
                {
                    "Arena Danger Zones",
                    "Ground Hazard",
                    "Yellow and red lit zones appear dynamically across the arena. Standing in them deals heavy damage.",
                    "Constantly watch the floor. Move to unlit ground whenever a zone appears under you.",
                    "Standing in zones causes sustained heavy damage and likely downs."
                },
                {
                    "Shared Defiance Bar",
                    "Breakbar / Control",
                    "When both bosses drop below 20%, they teleport to the arena center, gain a shared defiance bar, and begin channeling a large combined attack.",
                    "Save crowd control skills for this moment. Dump all CC the instant the bar appears.",
                    "The combo attack fires and deals massive squad-wide damage, likely causing a wipe."
                },
                {
                    "Quarter-Arena Slams (Solo Survivor)",
                    "Arena-wide AoE / Rotation",
                    "If one Kodan dies far ahead of the other, the survivor jumps to center and repeatedly slams quarter-sections of the arena.",
                    "Rotate clockwise around the boss, staying just ahead of each slam. Keep moving continuously.",
                    "Players caught in the slammed quarter take heavy damage and likely go down."
                },
            },
            {
                "Killing one boss far ahead of the other, triggering the dangerous solo survivor phase.",
                "Standing in red or yellow arena zones and taking avoidable damage.",
                "Failing to reflect Immobilization Shots and getting locked in place during other mechanics.",
                "Not saving CC skills for the shared defiance bar at sub-20%.",
                "Losing track of both boss health bars and not equalizing before the bar phase.",
            },
            {
                "Check health — keep damage even on both bosses!",
                "Reflect up — Voice is shooting arrows!",
                "Stunbreak — Claw just slammed!",
                "Get off the yellow zone!",
                "Both under 20% — CC now, break the bar!",
                "Survivor phase — rotate clockwise!",
            },
            {
                "Keep DPS even on both bosses from the start. Check health percentages frequently.",
                "Reflect Immobilization Shots from Voice as a priority — Immobilize at the wrong moment causes chain deaths.",
                "Around 20% on both bosses, be prepared to stop DPS temporarily to synchronize health levels.",
                "The shared defiance bar is the fight's climax — hold CC for it.",
            },
            {
                "Assign one subgroup to each boss to make even damage easier to manage.",
                "Remind everyone: do not kill one boss before the other reaches 20%.",
                "Assign at least one player with a reflect skill to cover Voice's arrows.",
                "Everyone save a CC skill for the shared defiance bar at sub-20%.",
                "Call out arena zones — do not stand in lit yellow or red floor sections.",
            },
            {
                "Phase 1: Both bosses active. Keep damage even. Reflect Voice's arrows. Break Claw's stun with stunbreaks. Stay out of arena zones.",
                "Sub-20%: Both teleport to center. Shared defiance bar appears. Dump all CC immediately to cancel the combo attack.",
                "Finish both bosses. If one dies early, the survivor uses quarter-arena slams — rotate clockwise.",
            },
            {
                "If one boss dies early, switch the full squad to the survivor and rotate clockwise to avoid quarter slams.",
                "If the defiance bar is missed, use every defensive cooldown to survive the combo, then finish the fight.",
                "If Immobilize lands on key players during a dangerous moment, cleanse immediately and reposition.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Fraenir of Jormag
        // ════════════════════════════════════════════════════════════════════════
        {
            "Fraenir of Jormag",
            "Icebrood Saga",
            "A two-stage encounter against the Fraenir of Jormag and an Icebrood Construct. The Fraenir phase focuses on avoiding freezing AoEs and repositioning to escape ice shards. The Construct phase introduces a defiance bar that experienced groups deliberately leave unbroken, plus multiple knockdown mechanics.",
            "Burn Fraenir to 75%, defeat the Icebrood Construct, then finish Fraenir from 25% to zero.",
            {
                {
                    "Torrent of Ice",
                    "Freeze / AoE",
                    "Fraenir leaps and sends ice across the arena. Orange circles mark the impact zones. Players caught in the AoEs are frozen inside an ice shard, losing all skill access until they use the Struggle to Escape action.",
                    "Move to the arena center at fight start to avoid the opening cast. NEVER dodge during Torrent of Ice — being in the evade animation when it hits causes permanent stuck state. If frozen, use the Struggle to Escape action skill immediately.",
                    "Players are frozen and cannot act until they break free. If they were dodging when hit, they become stuck indefinitely."
                },
                {
                    "Frozen Missile",
                    "Targeted Projectile",
                    "Fraenir targets a specific player with a red arrow and a circular timer. After the timer fills, a missile fires dealing light damage to players in its path.",
                    "If you have the red arrow, move away from the group. Dodge or block the missile when it fires.",
                    "The missile hits the stack, dealing damage to multiple players in its path."
                },
                {
                    "Icequake",
                    "Knockdown / Shockwave",
                    "Fraenir jumps and slams the ground, releasing a knockdown shockwave. Ice shards on the field explode when the shockwave reaches them.",
                    "Jump over the shockwave or dodge it. Stability also prevents the knockdown. Stay near the arena center rather than chasing Fraenir during the hopping phase.",
                    "Players are knocked down by the shockwave and may be hit by exploding ice shards."
                },
                {
                    "Ice Flail and Seismic Crush",
                    "Knockdown / Shockwave",
                    "The Icebrood Construct uses arm swings (Ice Flail) and ground slams (Seismic Crush) that knock down players and occasionally shower them with ice shards.",
                    "Sidestep the Ice Flail telegraph. Jump over the Seismic Crush shockwave or dodge it.",
                    "Players are knocked down, interrupting DPS and making them vulnerable to follow-up hits."
                },
                {
                    "Frigid Fusillade",
                    "Timed Bombs / AoE",
                    "Orange circles appear under players, indicating timed bomb AoEs that detonate after a delay.",
                    "Dodge when the circle appears, or use a block or projectile reflect to negate the hit. Moving out of the circle also works.",
                    "Players standing in the circle when it detonates take heavy damage."
                },
                {
                    "Construct Defiance Bar",
                    "Breakbar — Do Not Break",
                    "The Icebrood Construct periodically gains a defiance bar. Breaking it increases incoming damage but causes faster invulnerability transitions, which most groups want to avoid.",
                    "Do NOT use crowd control on the Construct — including the special action skill. Most experienced groups ignore the defiance bar entirely to maximize DPS window duration.",
                    "Breaking the bar causes the Construct to phase into invulnerability faster, extending the fight."
                },
            },
            {
                "Dodging during Torrent of Ice and becoming permanently stuck — never dodge when the orange circles appear.",
                "Using CC on the Icebrood Construct, breaking the defiance bar and causing faster phase cycling.",
                "Standing at the arena edge during the fight start and getting frozen by the opening Torrent of Ice.",
                "Chasing Fraenir across the arena during Icequake instead of staying near center.",
                "Not having Struggle to Escape ready when frozen.",
            },
            {
                "Run to center — Torrent of Ice incoming, do not dodge!",
                "Red arrow on you — step out of the group!",
                "Icequake — jump!",
                "Do NOT CC the Construct — leave the bar alone!",
                "Fraenir back at 25% — Torrent coming immediately, stay center!",
            },
            {
                "Start at arena center to dodge the opening Torrent of Ice.",
                "Burn Fraenir to 75% — Construct appears. Focus Construct while managing knockdowns.",
                "Leave the Construct defiance bar alone — breaking it slows the fight.",
                "Construct dies — Fraenir returns at 25% and immediately opens with Torrent + Icequake. Be ready.",
            },
            {
                "Everyone start the fight by running to the arena center — do not stand at the edge when Torrent of Ice opens.",
                "Do NOT dodge when you see the orange Torrent of Ice circles. Dodging while it hits freezes you permanently.",
                "If you get the red arrow, move away from the group and dodge or block the missile.",
                "Do NOT use CC on the Icebrood Construct. Leave its defiance bar alone.",
                "Jump over ground shockwaves from Icequake and Seismic Crush.",
            },
            {
                "Phase 1 – Fraenir: Run to center. Avoid Torrent AoEs without dodging. Move out if you have the red arrow. Jump over Icequake shockwaves. Burn to 75%.",
                "Phase 2 – Construct: Kill it. Sidestep Ice Flail, jump Seismic Crush, dodge Frigid Fusillade circles. Never touch the defiance bar.",
                "Phase 3 – Fraenir returns at 25%: Immediate Torrent + Icequake. Stay center, don't dodge Torrent. Burn fast.",
            },
            {
                "If players are frozen, use Struggle to Escape immediately and rejoin the group.",
                "If the group breaks the Construct bar accidentally, accept the faster phase cycling and burn harder.",
                "If Fraenir's phase 3 opener downs several players, stabilize with heals and revive once mechanics end.",
            }
        },
    };
}
