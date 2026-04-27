#include "QuickPlayData.h"

std::vector<QPEncounter> g_QuickPlay;

void InitQuickPlayData()
{
    g_QuickPlay =
    {
        // ════════════════════════════════════════════════════════════════════════
        // Boneskinner
        // ════════════════════════════════════════════════════════════════════════
        {
            "Boneskinner",
            "Icebrood Saga",
            "A high-pressure single-boss encounter built around the Grasp mechanic — a near-instant-kill AoE that spawns under every player simultaneously. The squad must stack tightly and move as a unit when the boss raises its arm. Six torches ring the arena; the boss extinguishes them over time, increasing incoming damage. The boss periodically gains a defiance bar and summons Veteran Wisps that extinguish remaining torches and must be cleared quickly.",
            "Defeat Boneskinner by surviving Grasp through tight stacking and coordinated movement, breaking the defiance bar quickly during Wisp phases, and managing increasing damage pressure as torches go out.",
            {
                {
                    "Grasp",
                    "Near-Instant-Kill AoE / Stack Mechanic",
                    "Orange circles spawn under every player simultaneously, rapidly converting into black pools that deal near-instant-kill damage. The boss telegraphs this by raising its right arm. The squad must move left together as a tight unit to step out of all pools at once.",
                    "Watch the boss animation, not the ground indicators. When the arm raises, move left as one tight group. Minimize movement the rest of the time to preserve safe ground.",
                    "Players who do not move in sync leave pools behind them and step into each other's pools, rapidly downing the group."
                },
                {
                    "Cascade",
                    "Cone / Stun",
                    "Boneskinner performs a long cone attack that stuns affected players for a significant duration.",
                    "Dodge or sidestep the cone indicator. If stunned, dodge immediately after the stun expires — this moves you out of the Grasp pool that likely spawned during the stun. Stability from supports prevents the stun entirely.",
                    "Stunned players cannot move during the next Grasp, causing them to stand in pools and go down."
                },
                {
                    "Jump",
                    "AoE / Reposition",
                    "Boneskinner jumps around the arena, pulling the squad toward the center. A dark red circle expands from the center and deals heavy damage when it fills.",
                    "Dodge the expanding circle or use evade/invulnerability skills. After the jump resolves, restack immediately — a Grasp typically follows.",
                    "Players caught in the expanding circle take heavy damage. The jump also displaces the stack before the next Grasp."
                },
                {
                    "Defiance Bar and Veteran Wisps",
                    "Breakbar / Add Clear",
                    "The boss stands upright and gains a defiance bar while summoning Veteran Aberrant Wisps. Wisps extinguish torches — each torch lost increases damage pressure on the squad. The Special Action Skill provides additional CC for breaking the bar.",
                    "Use all available CC and the Special Action Skill to break the bar immediately. Use large AoE pulls (Temporal Curtain, Spectral Grasp) to cluster Wisps for cleave. Do not use reflects — they do not help against Wisp attacks.",
                    "The bar is broken slowly, allowing Wisps to extinguish more torches and ramp up incoming damage for the rest of the fight."
                },
            },
            {
                "Players spreading away from the stack during Grasp, filling the arena with pools and eliminating safe ground.",
                "Watching the ground circles instead of the boss arm — the arm animation is the real telegraph.",
                "Getting stunned by Cascade and standing in Grasp pools unable to move.",
                "Not breaking the defiance bar quickly, letting Wisps extinguish torches and ramp up damage.",
                "Using reflects on Wisps — they are ineffective and waste skill cooldowns.",
            },
            {
                "Arm up — move left together, now!",
                "Stack tight — stay on the group!",
                "Cascade — dodge the cone!",
                "Jump — dodge the circle, then restack!",
                "Bar up — CC now, Special Action!",
                "Pull Wisps in — cleave them!",
            },
            {
                "From the start, always move left together when the boss arm raises — this is the entire fight.",
                "Between Grasps, minimize movement to preserve safe ground.",
                "Cascade before Grasp is the most dangerous combination — stability and stunbreaks are essential.",
                "Wisp phases interrupt the rhythm — break the bar fast and cleave Wisps, then return to Grasp management.",
                "Damage pressure increases as torches go out — the fight becomes more healing-intensive over time.",
            },
            {
                "This fight is all about stacking tight and moving left together when the boss raises its right arm.",
                "Watch the boss, not the ground. When the arm goes up, everyone moves left as one unit.",
                "Do not wander from the stack — scattered players spread pools everywhere and wipe the group.",
                "When the defiance bar appears, use all CC and the Special Action Skill immediately.",
                "Do NOT use reflects on Wisps — they do not work.",
            },
            {
                "Main phase: Stack tight. Watch the boss arm. When it raises — move left together. Dodge Cascade cones. Dodge the expanding circle after Jump, then restack immediately.",
                "Wisp phase: Boss stands up, bar appears. Dump all CC and the Special Action Skill. Pull Wisps together and cleave them. Do not use reflects.",
            },
            {
                "If the stack scatters during Grasp, call a new stack position clearly and have everyone converge immediately.",
                "If several players go down during Grasp, only attempt revives between Grasps — reviving during Grasp puts the reviver in pools.",
                "Heal Alacrity Scourge can Transfuse downed players back to the stack — use it.",
                "If torches are mostly out, increase healing output and tighten boon coverage to compensate.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Whisper of Jormag
        // ════════════════════════════════════════════════════════════════════════
        {
            "Whisper of Jormag",
            "Icebrood Saga",
            "A four-phase encounter against the Whisper of Jormag that alternates between open combat and individual doppelganger rooms. The fight features spread AoEs, stack mechanics, Chains of Frost tethers, and rolling orbs. Players must clearly distinguish between spread and stack telegraphs and manage chains without walking through them.",
            "Survive two doppelganger phases and defeat the Whisper of Jormag by correctly handling spread, stack, chain, and orb mechanics.",
            {
                {
                    "Opening Stalagmites",
                    "Positional / Landing Damage",
                    "At phase start the boss launches all players into the air. Stalagmites spawn where players were standing. Landing on a dense cluster of stalagmites deals damage and can down players.",
                    "When launched, use gliding to drift a short distance from where you stood. Do not land on the stalagmite cluster.",
                    "Players land on top of stalagmites and take heavy damage."
                },
                {
                    "Spread (Demonic Fever / Orange Circles)",
                    "Spread AoE",
                    "Orange circles appear on several random players and expand. Two or more overlapping circles instantly down the players inside them.",
                    "Pick a spot and move immediately when you see your circle. Do not chase others — hold your position once separated.",
                    "Players who stay clustered overlap circles, causing instant downs."
                },
                {
                    "Stack (Green Circle)",
                    "Stack / Damage Share",
                    "A green circle appears on the closest player to the boss. The circle is a damage-sharing mechanic — if only one player absorbs it the damage is fatal, but multiple players inside reduce individual damage to survivable levels.",
                    "When a green circle appears, everyone stacks immediately on the player who has it. The whole squad should move to that player — do not expect the circle player to come to you.",
                    "The targeted player takes the full detonation alone and is likely downed."
                },
                {
                    "Chains of Frost",
                    "Tether / Ground Hazard",
                    "Three random players receive the Chains of Frost debuff and a visible tether to the boss. After about two seconds, the chains materialize as lines on the ground dealing heavy continuous damage to anyone standing in them — including downed players. Walking perpendicular through a chain kills squadmates.",
                    "If you have chains, move them away from the squad and hold still. If you need to adjust, walk directly away — never sideways through a chain. Chains also damage downed players, so move chains away from anyone who goes down.",
                    "Players or squadmates walk through the materialized chains and take lethal continuous damage."
                },
                {
                    "Phase 4 Knockback",
                    "Knockback",
                    "When players return from the second doppelganger rooms the boss immediately casts an arena-wide knockback.",
                    "Precast Stability, Distortion, or other knockback-immunity skills before returning to the arena. Groups that coordinate this take no displacement.",
                    "Players are knocked far apart before orbs spawn, making orb management harder."
                },
                {
                    "Rolling Orbs",
                    "Collision Hazard",
                    "The boss spawns orbs that roll outward toward the arena edge. Players hit by an orb detonate it, dealing heavy damage to everyone nearby. Multiple orb detonations on the stack is a common wipe cause.",
                    "Option 1 (recommended): A Necromancer with Summon Flesh Wurm or a Mechanist's Golem placed at the arena center detonates all orbs at spawn, containing explosions to the center away from the group. Option 2: Squad spreads away from the boss and sidesteps or dodges orbs as they pass. Restack after orbs finish rolling.",
                    "Multiple players detonate orbs on the stack, causing chain damage and likely wiping the group."
                },
            },
            {
                "Standing in spread circles with nearby players, causing instant downs from overlap.",
                "Soloing the green stack circle and dying to the full detonation.",
                "Walking sideways through Chains of Frost, killing chained players or nearby squadmates.",
                "Not precasting stability before returning from the second doppelganger phase and getting scattered by the knockback.",
                "Multiple players detonating rolling orbs on the stack in phase 5.",
            },
            {
                "Orange — spread out now!",
                "Green — stack on the circle player!",
                "Chains — move yours out, hold still!",
                "Never walk through someone else's chain!",
                "Precast stability — doppelganger rooms ending!",
                "Orbs rolling — sidestep, stay spread!",
            },
            {
                "Phase 1: Glide away from stalagmites on start. Learn spread vs stack — orange means apart, green means together.",
                "75%: Everyone enters doppelganger rooms. Kill your clone. If you fail, come back and ask the squad for help.",
                "Phase 3: Chains of Frost — move chains out, hold still, never walk sideways through them.",
                "25%: Second doppelganger rooms. Precast stability before returning. Rolling orbs begin — decide handling strategy before the fight.",
                "Final burn: All mechanics active. Prioritize mechanic execution over DPS.",
            },
            {
                "Orange circles mean spread apart immediately. Green circle means everyone stacks on that player.",
                "Chains of Frost: if you have the tether, move it away from the group and hold still — never walk sideways through it.",
                "At 25%, precast stability or movement skills before coming out of the doppelganger rooms — there is an immediate knockback.",
                "Decide on orb strategy now: Flesh Wurm at center, or spread and sidestep.",
            },
            {
                "Phase 1 (100-75%): Glide away on the stalagmite launch. Spread on orange, stack on green. Burn to 75%.",
                "Doppelganger rooms: Kill your clone. If you struggle, come back and get squad help.",
                "Phase 3 (75-25%): Chains appear — move yours out, hold still. Continue spread and stack mechanics.",
                "Phase 4 prep (25%): Precast stability. Return from rooms into knockback. Then manage orbs per agreed strategy.",
                "Finish: All mechanics layered. Execute cleanly and burn.",
            },
            {
                "If chains damage multiple players, call chain positions clearly and have holders move away from downed squadmates.",
                "If orbs wipe the group, switch to a different orb strategy on the next pull.",
                "If someone returns from doppelganger rooms with their clone, have the squad focus the clone first before resuming boss damage.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Aetherblade Hideout
        // ════════════════════════════════════════════════════════════════════════
        {
            "Aetherblade Hideout",
            "End of Dragons",
            "A single-arena encounter against Captain Mai Trin followed by Echo of Scarlet Briar at 10% Mai Trin health. The fight features split phases where adds must be managed while the boss is untargetable, a lightning field mechanic that requires the marked player to move away from the group, and dangerous deathray phases during Scarlet's portion.",
            "Burn Mai Trin to 10%, manage add split phases at 50% and 33%, then fight Echo of Scarlet Briar through split phases at 80% and 40% until defeated.",
            {
                {
                    "Defiance Bar (Mai Trin and Scarlet)",
                    "Breakbar / Damage Boost",
                    "Both Mai Trin and Scarlet periodically gain defiance bars unconnected to specific timers. Breaking the bar interrupts their current attack and grants the group a significant damage boost.",
                    "Break defiance bars immediately when they appear. Prioritize bar breaks — the damage boost accelerates phase completion.",
                    "The boss completes its current attack without interruption and the damage boost is lost."
                },
                {
                    "50% Split – Minor Phantoms",
                    "Add Management / Split Phase",
                    "Mai Trin becomes untargetable. Small phantoms spawn with rectangular AoE attacks and slow-moving orbs. Kill them to make Mai Trin targetable.",
                    "Cleave phantoms while avoiding their rectangular AoEs and orbs. They have low health — prioritize killing them fast.",
                    "Phantoms left alive deal sustained pressure while Mai Trin waits to re-engage."
                },
                {
                    "33% Split – NE Phantom (Green Circle)",
                    "Stack Mechanic / Add Kill",
                    "The NE phantom has a large health pool and targets one player with a green stacking circle that deals high damage. At least 4 players must be inside the circle when it detonates. Killing the phantom cancels the mechanic.",
                    "Assign the majority of the group to burn the NE phantom while the remainder handles the SW phantom bar. Stack 4 players minimum in the green circle whenever it detonates.",
                    "Fewer than 4 players in the circle — the targeted player takes lethal damage."
                },
                {
                    "33% Split – SW Phantom (Defiance Bar)",
                    "Breakbar / Tether",
                    "The SW phantom cannot be killed by damage — it has an enormous defiance bar. It tethers to all players and spawns area attacks. The squad must split: use CC to break the SW bar while DPS kills the NE phantom.",
                    "Recommended order: Use CC on the SW phantom first to start depleting its bar, then DPS the NE phantom, then return CC resources to the SW phantom to finish its bar. Minor Scarlet Phantasms also spawn — cleave them while moving.",
                    "SW bar is not broken — tether mechanic continues to spawn area attacks, threatening a wipe."
                },
                {
                    "Lightning Column (Scarlet Phase)",
                    "Player Marker / Ground AoE",
                    "A blue light column follows a random player, indicated by a blue screen border. After several seconds a large lightning field spawns under that player dealing massive damage to everyone nearby.",
                    "If you see a blue border on your screen or a light column on a player, move away from the group immediately. Hold that position until the field spawns.",
                    "The field spawns on the stack, dealing massive damage and likely wiping the squad."
                },
                {
                    "Slam (Scarlet)",
                    "Knockdown / Wave",
                    "Scarlet slams her fists into an orange ground target, emitting a knockdown wave. Available from 90% of Scarlet's health.",
                    "Jump over the wave, dodge it, use an invulnerability skill, or stand outside the slam zone.",
                    "Players caught in the wave are knocked down."
                },
                {
                    "Deathray Phase",
                    "Instant-Kill / Safe Zone",
                    "At 60% and 20% Scarlet's health, she disappears and a miniature Scarlet appears at the arena edge. Three rotating circles appear as safe zones. The deathray rotates and instantly kills anyone it touches; anyone outside a safe circle is downed.",
                    "As soon as the deathray phase begins, move into one of the three rotating safe circles and stay inside it as it rotates. The safe spot is parallel to the deathray on the side with more space. At the 60% version, an untargetable Mai Trin also appears casting a wide cone — use invulnerability or out-heal it.",
                    "Players stand outside a safe circle or in the deathray and are instantly killed or downed."
                },
            },
            {
                "Not stacking 4 players in the green circle during the 33% split, causing the targeted player to die.",
                "Ignoring the SW phantom defiance bar and letting it tether uncontested.",
                "The lightning column player not moving away from the group and wiping the squad with the field.",
                "Standing in the deathray or outside safe circles during Scarlet's 60% and 20% phases.",
                "Not breaking defiance bars on Mai Trin and Scarlet, missing the damage boost.",
            },
            {
                "Break the bar — damage boost!",
                "50% — kill the phantoms!",
                "33% — CC the SW phantom first!",
                "Stack in the green circle — need four people!",
                "Blue border on you — move away from the group!",
                "Deathray — get in the rotating circles now!",
            },
            {
                "Mai Trin phase: Break defiance bars for damage boosts. At 50%, cleave minor phantoms. At 33%, CC SW first, DPS NE, stack green circle.",
                "Scarlet spawns at 10% Mai Trin. Break her bar immediately for another damage boost.",
                "Scarlet at 80% and 40%: Same split mechanic as Mai Trin 33%. Lightning column player must move out.",
                "Scarlet at 60% and 20%: Deathray — get into the rotating safe circles immediately.",
            },
            {
                "Break every defiance bar as soon as it appears — they give a damage boost and interrupt attacks.",
                "At 50% Mai Trin, kill the minor phantoms to make her targetable again.",
                "At 33% Mai Trin, CC the SW phantom first, burst the NE phantom, stack in the green circle.",
                "In Scarlet's phase, if you see a blue border on your screen, move away from the group immediately.",
                "Deathray at 60% and 20% Scarlet — move into one of the three rotating circles, stay inside it.",
            },
            {
                "Mai Trin (100-10%): Break bars. 50% — kill minor phantoms. 33% — CC SW bar, kill NE phantom, stack green circle.",
                "Scarlet spawns at 10%. Break her bar. 90%+ — dodge slam waves. 80% split — same adds as before, plus lightning column player moves out.",
                "60% deathray: Get in rotating circles immediately. 40% split: repeat add handling. 20% deathray: circles again.",
            },
            {
                "If the SW bar is not broken at the 33% split, use every CC skill available and accept longer add phase pressure.",
                "If the green circle detonates with fewer than 4 players, heal the targeted player through the spike and re-evaluate stacking assignments.",
                "If a player is caught in the deathray, they cannot be revived mid-phase — finish the deathray rotation and revive after.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Xunlai Jade Junkyard
        // ════════════════════════════════════════════════════════════════════════
        {
            "Xunlai Jade Junkyard",
            "End of Dragons",
            "A three-arena encounter against Ankka across progressively smaller platforms. Ankka uses Death's Reach hand mechanics, rotating Hallucination attacks, a deadly central Pull, and Necrotic Ritual add phases in arenas 2 and 3. Heavy condition application requires dedicated cleanse. Her defiance bar should be broken whenever possible as it interrupts her current attack and skips it from her rotation.",
            "Chase Ankka through three arenas, breaking her defiance bar, surviving her pull mechanic, managing Hallucinations, and clearing adds during Necrotic Ritual phases.",
            {
                {
                    "Defiance Bar",
                    "Breakbar / Interrupt",
                    "Ankka's defiance bar appears throughout the fight. Breaking it interrupts her current ability and causes her to skip that attack in her rotation, providing a significant advantage.",
                    "Break the bar every time it appears. If it appears while she is about to use the Pull, breaking it prevents the Pull entirely.",
                    "Ankka completes her current attack and continues her rotation normally."
                },
                {
                    "Grasping Horror (Small Hands)",
                    "Ground AoE / Condition",
                    "Small AoEs spawn in a triangle pattern where pairs of hands reach from the ground, dealing low damage and applying Weakness, Vulnerability, and Poison. Additional circles spawn for players beyond the initial three if the group spreads.",
                    "Stack on the boss to minimize the number of circles that spawn — the initial three-triangle spawn occurs regardless, but additional circles are player-position dependent. Avoid standing in the fields.",
                    "Standing in hand fields takes chip damage and accumulates conditions."
                },
                {
                    "Death's Hand (Timed Hands)",
                    "Spread AoE / High Damage",
                    "Three medium-sized AoEs load over time on players. Each AoE spawns a single hand dealing significant damage and applying 6 stacks of Vulnerability and 6 stacks of Bleed.",
                    "If you have a loading circle, move away from the group. Ideally, players with circles should all converge in one spot away from the boss to stack the detonations efficiently.",
                    "AoEs stack on the group causing heavy damage and deep condition stacks."
                },
                {
                    "Pull Attack",
                    "Instant-Kill Pull / AoE",
                    "Ankka raises her hand and summons a large AoE in the center of the arena. She teleports to it and pulls everyone inside, dealing heavy damage and applying conditions. Getting pulled in almost always means going down and dying. In phases 2 and 3, four AoEs appear instead of one — Ankka teleports between them, changing pull direction each time. The next location is indicated by a green light column.",
                    "Avoid at all cost. Do not stand in or near the center pull AoE. In phases 2 and 3, watch the green light column to know which direction Ankka will pull from next and stay out of all four AoEs. Breaking Ankka's defiance bar while she channels the Pull cancels it entirely.",
                    "Pulled players take lethal damage and are almost certainly downed and killed."
                },
                {
                    "Krait Hallucination",
                    "Moving AoE / Pull",
                    "Three Krait hallucinations (two in the smaller third arena) spawn on one side of the arena and slowly move to the other. Each is surrounded by a damaging AoE that inflicts conditions and constantly pulls players toward it.",
                    "Run away from the Krait's direction of movement when they are nearby. Stability resists the pull. Immobilize on the Krait locks them in place.",
                    "Players pulled into Krait AoEs take heavy damage and condition stacks."
                },
                {
                    "Lich Hallucination",
                    "Fixate / Kite",
                    "A Lich hallucination spawns at one of the cardinal directions of the arena and fixates on a single player with a blue tether (visible only to the tethered player). The Lich pulls the tethered player toward it; the surrounding AoE deals heavy damage and applies conditions.",
                    "If you have a blue tether, kite the Lich away from the group. Keep moving — do not let it pull you into its AoE. The Lich despawns after a short duration.",
                    "The tethered player is pulled into the Lich AoE and takes lethal damage."
                },
                {
                    "Necrotic Ritual",
                    "Add Phase / Interrupt",
                    "Ankka becomes invulnerable and immediately uses Necrotic Ritual, spawning three Reanimated Spites (crossed-sword icons) and many Reanimated Malice spider adds. Kill or break the breakbars of all three Spites. Each surviving Spite grants Ankka 25% increased damage and 25% damage reduction, plus 50% healing reduction on all players.",
                    "Split up and focus on killing or breaking the breakbars of the three Reanimated Spites. Spiders can be ignored — they despawn if left alone. After all Spites are handled, restack on Ankka and resume DPS.",
                    "Surviving Spites stack Power of the Void on Ankka, making her extremely dangerous and nearly unkillable until the buff is removed by breaking her bar."
                },
                {
                    "Reanimated Hatred (Phase 3 Only)",
                    "Fixate / Wraith",
                    "Spawns in phase 3 during Necrotic Ritual among the spider adds. Takes a wraith form, fixates on one player (icon visible only to that player), and spams heavy damage abilities.",
                    "If you have the fixate icon, call it out. The group should cleave it immediately or break its breakbar to despawn it.",
                    "Reanimated Hatred continuously attacks the fixated player and may kill them before the squad handles it."
                },
            },
            {
                "Standing in or near the central Pull AoE and getting instantly downed.",
                "Not splitting for Death's Hand timed circles, causing heavy group damage.",
                "Leaving Reanimated Spites alive during Necrotic Ritual, stacking Power of the Void on Ankka.",
                "Running toward Krait Hallucinations instead of away from the pull direction.",
                "Not kiting the Lich Hallucination when tethered, pulling it through the squad.",
            },
            {
                "Break the bar — interrupt her!",
                "Pull AoE up — stay out of center!",
                "Death's Hand circles — move away, stack them together!",
                "Krait — run away from the pull!",
                "Lich tether on you — kite it away!",
                "Necrotic Ritual — split to the Spites, kill all three!",
            },
            {
                "Phase 1: Break the bar every time it appears. Learn the rotation — hands, timed circles, hallucinations, pull.",
                "At 75%, follow Ankka to the second arena. Avoid transition Death's Reach AoEs — they apply conditions.",
                "Necrotic Ritual in phase 2: all three Spites must be handled — do not leave any alive.",
                "At 40%, third arena is smaller. Necrotic Ritual now also includes Reanimated Hatred — call the fixate immediately.",
                "Break bars aggressively to skip the Pull — getting pulled in is nearly always a death.",
            },
            {
                "Break Ankka's bar every time it appears — it interrupts her current attack including the Pull.",
                "The Pull AoE in the center is instant death — never stand in or near it.",
                "Death's Hand circles (loading timed AoEs) — move away from the group and ideally stack your circles together.",
                "Krait pulls you toward them — run away or use Stability.",
                "Lich tethers one player with a blue line only they can see — that player must kite away from the group.",
                "Necrotic Ritual: all three Spite adds must be killed or broken. Assign targets before the pull.",
            },
            {
                "Phase 1 (100-75%): Break bars. Avoid center pull. Move out for Death's Hand circles. Manage Hallucinations. Burn to 75%.",
                "Phase 2 (75-40%): Same plus Necrotic Ritual. Split to all three Spites. Restack on Ankka after.",
                "Phase 3 (40-0%): Smaller arena. Necrotic Ritual also spawns Reanimated Hatred — call the fixate and cleave or break it.",
            },
            {
                "If a player is pulled into the center AoE and goes down, revive after Ankka moves away from the pull zone.",
                "If Spites are left alive during Necrotic Ritual, break Ankka's bar immediately after she returns to remove the Power of the Void buff.",
                "If Reanimated Hatred is ignored and kills the fixated player, cleave it off the next downed player immediately.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Kaineng Overlook
        // ════════════════════════════════════════════════════════════════════════
        {
            "Kaineng Overlook",
            "End of Dragons",
            "A multi-phase encounter against Minister Li with two split phases featuring mini-bosses on a lower platform. Minister Li introduces positional mechanics (Cleave, Dash, Numbers) that grow more complex in each return phase. The first split has The Enforcer, Mindblade, and Ritualist; the second has The Mech Rider and Sniper linked by a shared health equalization mechanic.",
            "Defeat Minister Li through three main phases interspersed with two split phases, managing mini-boss positioning, equalization prevention, and the Sniper's breakbar to avoid lethal attacks.",
            {
                {
                    "Cleave",
                    "Knockback / Positional",
                    "Li launches players backward in an almost 180-degree arc in front of him. Repeats throughout all Li phases and is used in tandem with Spread in phases 2 and 3.",
                    "Stay behind Li. Dodge when the cone indicator disappears. In phase 2, use Cleave timing: dodge the launch first, then wait for Spread detonation, then return behind Li.",
                    "Players are launched and, in phase 2+, may be launched directly into a Spread AoE."
                },
                {
                    "Numbers",
                    "Spread / Wave",
                    "Three players are marked with Roman numerals I, II, and III. Li sends waves toward each marked player in ascending order that explode on contact with players. Unmarked players hit by waves receive Vulnerability.",
                    "Marked players stay on one side of Li. Unmarked players immediately stack on the opposite side, out of the wave path. This gives an extended free DPS window on Li while waves are in flight.",
                    "Unmarked players stand in wave paths and take damage plus Vulnerability stacks."
                },
                {
                    "Spread (Phase 2+)",
                    "Spread AoE / Timing",
                    "AoEs spawn on the 5 closest players that expand and explode after 5 seconds. Two overlapping circles down a player. Used in tandem with Cleave — Cleave fires 1-2 seconds before Spread detonation.",
                    "Sequence: Cleave launches you — dodge it, remain spread, wait 5 seconds for Spread to detonate, then restack behind Li. Alternatively use a block or shield to absorb the Cleave instead of dodging.",
                    "Players stand in each other's Spread circles and are instantly downed."
                },
                {
                    "Lethal Inspiration (Enforcer + Mindblade)",
                    "Boss Proximity Buff",
                    "When the Enforcer and Mindblade are near each other, both gain Lethal Inspiration — they steal life and convert conditions to boons every 10 seconds. A visible tether indicates the effect is active.",
                    "Keep the Enforcer tanked away from the Mindblade at all times. Focus the Mindblade while the Enforcer is held at a distance. Only engage the Enforcer after the Mindblade is dead.",
                    "Both bosses become extremely durable — they heal from attacks and resist conditions."
                },
                {
                    "Ritualist Ghost Crowd Control",
                    "Crowd Control / Platform",
                    "After the Enforcer's second dash sequence, the Ritualist teleports to the platform center and summons ghosts covering the platform with CC. She alternates between four launching ghosts or two pulling ghosts — each variant has distinct safe zones.",
                    "Learn which ghost pattern is active (4 launching or 2 pulling) and position in the correct safe zone. Prioritize Mindblade kill before this triggers if possible.",
                    "Players caught by ghosts are launched or pulled, breaking positioning and interrupting DPS."
                },
                {
                    "Vitality Equalizer (Mech Rider + Sniper)",
                    "Shared Health / Wipe Threat",
                    "Mech Rider and Sniper are linked by Vitality Equalizer. Each 1% health difference generates one Equalization Matrix stack. Above 20 stacks, both bosses equalize to their average health and apply Destructive Aura — a 2000 DPS AoE around each boss for 20 seconds. A second equalization within 20 seconds stacks to 4000 DPS.",
                    "Either split the group (e.g. 7-3 or 5-5) to damage both simultaneously, or swap targets frequently to equalize health manually. Constantly monitor both health bars.",
                    "Equalization triggers, resetting boss health and applying lethal damage aura."
                },
                {
                    "Snipe (Sniper Breakbar)",
                    "Breakbar / Instant-Down",
                    "The Sniper targets one player with a faint green line. Unless the Sniper's breakbar is broken before the Snipe fires, all players in range are instantly downed. Soft CC automatically breaks the Sniper's bar (vulnerability, chill, immobilize) — hard CC, knockdowns, pulls, and fears do not work.",
                    "Assign one or two players with strong soft CC to take a zip line to the Sniper's perch and break its bar. Do not assign players with summoned spirits, banners, or minions — those are removed on leaving the main platform. Alternatively, some groups use enough passive soft CC from ranged abilities to break the bar without dedicated rooftop players.",
                    "Snipe fires and instantly downs all players in range of the target."
                },
                {
                    "Green Stacking Circle (Phase 3)",
                    "Stack Mechanic",
                    "Added in phase 3 alongside Cleave+Spread. A green circle appears on one player requiring at least three players inside when it closes. Non-Spread players naturally stand behind Li within the green AoE.",
                    "Non-Spread players (not holding an AoE circle) naturally stand behind Li and are inside the green circle. Spread players hold their positions. The mechanic typically resolves itself if positioning discipline is maintained.",
                    "Fewer than three players in the green circle — targeted player takes full unshared damage."
                },
            },
            {
                "Standing in front of Minister Li and getting launched by Cleave.",
                "Not separating Enforcer from Mindblade in split 1, triggering Lethal Inspiration.",
                "Restacking behind Li immediately after Cleave instead of waiting for Spread to detonate.",
                "Letting Mech Rider and Sniper health diverge by more than 20%, triggering Equalization.",
                "Assigning summon-dependent players to the Sniper roof, losing their summons.",
                "Not breaking the Sniper's soft CC breakbar, allowing Snipe to down the group.",
            },
            {
                "Always behind Li — face him away!",
                "Numbers — marked players front, unmarked move to back!",
                "Mindblade first — keep Enforcer far away!",
                "Tether on bosses — separate them now!",
                "Cleave dodge, hold for Spread detonation, then restack!",
                "Watch health bars — keep them within 20%!",
                "Sniper charging — soft CC, break the bar!",
            },
            {
                "Phase 1: Learn Cleave positioning (behind Li) and Numbers (split marked/unmarked to opposite sides).",
                "Split 1 at 66%: Kill Mindblade first, keep Enforcer separated. Ritualist Lightning Storm will strip boons — healers prepare.",
                "Phase 2 at 66-33%: Cleave+Spread sequence. Dodge Cleave first, wait for Spread detonation, then restack.",
                "Split 2 at 33%: Watch both health bars constantly. Assign Sniper roof CC players (no summons).",
                "Phase 3: Cleave+Spread+Green. Stay behind Li if not spreading.",
            },
            {
                "Always stay behind Minister Li — his Cleave hits a 180-degree arc in front.",
                "Numbers: if you have a numeral, stay on Li's front side. If unmarked, move to the opposite (back) side immediately.",
                "Split 1: Kill the Mindblade first. Keep the Enforcer far from the Mindblade — if they are close you will see a tether and they become much harder to kill.",
                "Phase 2 Spread: dodge the Cleave launch, stay spread for 5 seconds, wait for your circle to detonate, then restack.",
                "Split 2: Both bosses must stay within 20% health of each other — monitor health bars and swap targets if one drops faster.",
                "Assign Sniper roof players now — do not assign anyone with banners, spirits, or minions.",
            },
            {
                "Phase 1 (100-66%): Behind Li at all times. Numbers — split marked/unmarked to opposite sides.",
                "Split 1 (66%): Kill Mindblade (keep Enforcer separated). Then Enforcer. Ritualist Lightning Storm will strip boons. Manage Ritualist ghosts in safe zones.",
                "Phase 2 (66-33%): Cleave+Spread combo. Dodge Cleave, hold for Spread detonation, then return.",
                "Split 2 (33%): Monitor health bars. Mech Rider needs a tank. Sniper bar breaks by soft CC — assigned players take zip line.",
                "Phase 3 (33-0%): Cleave+Spread+Green. Non-Spread players stack behind Li naturally. More Numbers = more free DPS.",
            },
            {
                "If Lethal Inspiration activates (Enforcer+Mindblade tether), immediately separate them — pull Enforcer away.",
                "If Equalization triggers in split 2, use all defensive cooldowns and equalize health immediately after the aura ends.",
                "If Snipe fires and downs players, revive quickly — the Sniper perch assignment needs to be reinforced next attempt.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Old Lion's Court
        // ════════════════════════════════════════════════════════════════════════
        {
            "Old Lion's Court",
            "End of Dragons",
            "A three-Watchknight encounter against Prototype Vermilion (red, melee), Prototype Arsenite (green, melee), and Prototype Indigo (blue, ranged). Bosses are fought sequentially — one active and vulnerable at a time — in a fixed repeating order (Vermilion → Arsenite → Indigo). Inactive bosses are shielded and assist with Danger Zone attacks. Three puzzle phases require breaking the correct boss's defiance bar to create a safe zone.",
            "Defeat all three Watchknights by targeting the correct unshielded boss in sequence, surviving Danger Zones, managing Fixation, and breaking the correct defiance bar during puzzle phases.",
            {
                {
                    "Danger Zone",
                    "Instant-Kill AoE / Safe Zone",
                    "The active boss gains a defiance bar and channels an attack that creates a large red Danger Zone covering much of the arena. Standing in the red zone when it detonates causes instant defeat. A white safe zone remains in a specific area. Breaking the defiance bar inverts the safe/danger zones and applies Malfunctioning Ley-Woven Shielding (Expose on the next shield drop).",
                    "Move into the white safe zone immediately. Optionally break the defiance bar to invert the zones (this can be advantageous if the squad is already in the original safe position — but sometimes it is better NOT to break and stay in the current safe zone). During puzzle phases, all three Danger Zones fire simultaneously.",
                    "Standing in red when it detonates — instant defeat."
                },
                {
                    "Fixation",
                    "Aggro / Condition Copy",
                    "After a Danger Zone detonates or a boss lands, the boss Fixates on the closest player, following them and copying conditions applied to itself. Vermilion and Arsenite melee-follow the fixated player; Indigo fixates from a fixed ranged position. If the fixated player goes downstate, Fixation transfers to the next closest player.",
                    "Supports should deliberately be the closest player to Vermilion and Arsenite to grab Fixation. Lead the boss to the arena edge so Boiling Aether puddles drop away from center. Fixated players must prioritize survivability — if they go down, Fixation transfers.",
                    "Fixation is uncontrolled — bosses wander toward DPS players and puddles land in the middle of the arena."
                },
                {
                    "Boiling Aether",
                    "Persistent Ground AoE",
                    "Puddles that expand slowly dealing light damage, then heavy ticking damage when fully expanded. Spawned by specific boss attacks: Vermilion's Gravity Hammer (under the boss), Arsenite's Noxious Vapor Blade disc (under the player it connects with), and Indigo's Tri-Bolt tether teleport (at the player's location before teleport).",
                    "Fixation holders move Vermilion to the edge for Gravity Hammer. Players baiting Arsenite's disc stand at the edge. Indigo's tethered player runs to the edge before the teleport triggers. Always place puddles at the arena perimeter.",
                    "Puddles accumulate in the arena center, eliminating the DPS position and forcing the group into dangerous ground."
                },
                {
                    "Dual Horizon (Vermilion)",
                    "Directional / Positional",
                    "A red ring appears around Vermilion with white arrows pointing inward or outward indicating the safe direction. Players on the wrong side spawn damaging Gravitational Waves. The pattern reverses each cycle.",
                    "Read the white arrows — they indicate where to stand relative to the ring. Each player has their own indicator based on their position; do not copy others blindly. The pattern reverses each time, so the correct side alternates.",
                    "Each out-of-position player spawns a damaging Gravitational Wave hitting the group."
                },
                {
                    "Pernicious Vortex (Arsenite)",
                    "Proximity AoE / Expose",
                    "Cascading AoEs intensify toward Arsenite. A red pool forms directly under Arsenite. Standing in the pool applies Expose and heavy damage; nearby proximity is also dangerous.",
                    "Move away from directly under Arsenite when the cascade begins. The ticking damage from cascading AoEs can be evaded.",
                    "Standing in or very near the red pool applies Expose and deals heavy damage."
                },
                {
                    "Crackling Wind (Indigo)",
                    "Ranged Ring / Expose",
                    "A bright red ring appears at long range around Indigo with cascading AoEs inside it. Standing far from Indigo applies Expose; the cascade ticking damage increases with distance.",
                    "Stay close to Indigo at all times. Indigo does not move due to Fixation, so the group should stack near Indigo's position.",
                    "Players far from Indigo take increasing damage and have Expose applied."
                },
                {
                    "Puzzle Phases – Break Correct Bar",
                    "Breakbar / Puzzle",
                    "At 80%, 40%, and 10%, all three Danger Zones activate simultaneously. Players must stand in the white safe zone while also breaking a specific boss's defiance bar. Breaking the wrong bar creates no safe zone and wipes the squad.",
                    "Puzzle 1 (80%): Break Arsenite's bar, safe zone around Vermilion. Puzzle 2 (40%): Break Vermilion's bar, safe zone behind Indigo. Puzzle 3 (10%): Break Indigo's bar, safe zone next to Vermilion. Memorize the sequence: Arsenite → Vermilion → Indigo.",
                    "Wrong bar broken — no safe zone created — squad wipes in the red Danger Zone."
                },
                {
                    "Power Transfer (Phase 3)",
                    "Boss Proximity Debuff",
                    "In phase 3 when two bosses are active, if they come too close together a blue tether forms between them and the shielded boss gains access to its full attack arsenal (Power Transfer). A brown tether warns of close proximity before the blue tether activates.",
                    "In phase 3, always maintain separation between the two active bosses. Fixation holders must actively lead bosses to opposite sides of the arena. Prioritize survival over perfect positioning if separation becomes difficult.",
                    "Shielded boss uses its full attack rotation, dramatically increasing incoming damage."
                },
            },
            {
                "Breaking the wrong defiance bar during a puzzle phase, causing an instant squad wipe.",
                "Copying a nearby player's position for Dual Horizon instead of reading your own white arrows.",
                "Allowing Boiling Aether puddles to accumulate in the arena center, cutting off the DPS position.",
                "Not controlling Fixation, causing bosses to wander and drop puddles in the worst locations.",
                "Allowing two active bosses to drift together in phase 3, triggering Power Transfer.",
            },
            {
                "Danger Zone — move to white!",
                "Puzzle — break Arsenite's bar at 80%!",
                "Puzzle — break Vermilion's bar at 40%!",
                "Puzzle — break Indigo's bar at 10%!",
                "Dual Horizon — read your own arrows!",
                "Puddles to the edge — move the boss!",
                "Brown tether — separate the bosses now!",
            },
            {
                "Phase 1: Learn Danger Zone safe spots. Control Fixation. Place Boiling Aether at the edge.",
                "Puzzle 1 (80%): All Danger Zones fire — break Arsenite's bar, safe zone at Vermilion.",
                "Phase 2: Inactive bosses add Danger Zone overlap. Two sets of red zones can appear.",
                "Puzzle 2 (40%): Break Vermilion's bar, safe zone behind Indigo.",
                "Phase 3: Two bosses active. Keep them separated — brown then blue tether means Power Transfer.",
                "Puzzle 3 (10%): Break Indigo's bar, safe zone next to Vermilion.",
                "Phase 4: All three active, no shielding — burn to zero.",
            },
            {
                "Bosses fight one at a time in order: Vermilion first, then Arsenite, then Indigo — repeat.",
                "Only the current active boss takes damage — others are shielded.",
                "Danger Zones: move to white immediately. Do not stand in red when it detonates.",
                "Puzzle phases: break the correct bar. Puzzle 1 — Arsenite's bar. Puzzle 2 — Vermilion's bar. Puzzle 3 — Indigo's bar.",
                "Boiling Aether puddles go to the arena edge — always. Fixation holders lead bosses to the edge.",
                "Dual Horizon on Vermilion: read your own white arrows — do not copy the person next to you.",
                "Phase 3 — two bosses active. Keep them separated. Brown tether = warning, blue tether = Power Transfer.",
            },
            {
                "Phase 1 (100-80%): Vermilion, then Arsenite, then Indigo. One active at a time. Dodge Danger Zones.",
                "Puzzle 1 (80%): All three Danger Zones fire — break Arsenite's bar, safe zone at Vermilion.",
                "Phase 2 (80-40%): Same order, but inactive bosses add extra Danger Zone helpers.",
                "Puzzle 2 (40%): Break Vermilion's bar, safe zone behind Indigo.",
                "Phase 3 (40-10%): Two active bosses. Keep separated. Vulnerable target only.",
                "Puzzle 3 (10%): Break Indigo's bar, safe zone next to Vermilion.",
                "Phase 4 (10-0%): All three active, no shielding — full burn.",
            },
            {
                "If a wrong bar is broken during a puzzle phase, the squad will wipe — accept it and reinforce bar assignments on the next pull.",
                "If Power Transfer activates in phase 3, use all defensive cooldowns and immediately separate the bosses.",
                "If Boiling Aether puddles fill the center, find the cleanest remaining ground and tighten boss positioning to stop adding more puddles.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Cosmic Observatory
        // ════════════════════════════════════════════════════════════════════════
        {
            "Cosmic Observatory",
            "Secrets of the Obscure",
            "A fast-paced encounter against Dagda, a jotun wizard with high health and quick-startup attacks. Dagda uses a scripted attack rotation with mechanics that expand as health depletes. The critical fight-defining mechanics are Shooting Stars (body-blocking), Soul Feast (Special Action Skill), and Planet Crash (defiance bar that must always be broken).",
            "Defeat Dagda by body-blocking Shooting Stars, destroying Soul Feast with the Purifying Light special action, breaking Planet Crash's defiance bar, and clearing add splits quickly.",
            {
                {
                    "Shooting Stars",
                    "Body-Block / Group Mechanic",
                    "Dagda selects a random target. Red text appears: 'Beware the Shooting Stars. Hide behind your allies!' At least 5 squad members must position between Dagda and the target to body-block the attack. If fewer than 5 block, the target takes 90% max HP damage and the squad gains Infirm (50% max HP damage).",
                    "If you are the target, move away from the group to allow blockers to line up cleanly. All other players position between Dagda and the target. At minimum 5 players must be in the blocking line.",
                    "Target takes near-lethal damage; squad gains Infirm; significantly increases difficulty of subsequent mechanics."
                },
                {
                    "Spinning Nebula",
                    "Projectile AoE / Dodge",
                    "Dagda spins with his greatsword and fires destructible or reflectable orbs dealing high damage. He may teleport away before spinning, in which case orbs aim only at the center.",
                    "Back away from Dagda or dodge immediately when the spin begins. Projectile reflect or destruction abilities can neutralize the orbs.",
                    "Players take heavy damage from multiple orb hits, potentially causing downs without strong healing."
                },
                {
                    "Demonic Fever (Spread)",
                    "Spread AoE / Instant Down",
                    "Large expanding AoEs appear centered on 7 random players. Two or more overlapping circles instantly down players inside them.",
                    "Pick a spot and move immediately. Hold position once separated. Ranged and support players move further out; melee stay closer to avoid being forced to the arena edge where movement is limited.",
                    "Players cluster — circles overlap and instant-down multiple players."
                },
                {
                    "Demonic Blast (Pizza Cones)",
                    "Safe Zone / Debuff",
                    "Eight cone-shaped AoEs radiate from Dagda with a long delay before detonating. Detonation applies 3 stacks of a debuff that becomes dangerous at 10 stacks (players treat nearby squadmates as enemies).",
                    "Stand between two adjacent cones. Dodge toward a safe zone if caught in a cone.",
                    "Players stand in cones and accumulate the debuff. At 10 stacks they attack allies."
                },
                {
                    "Soul Feast (Special Action Skill)",
                    "Special Action Key / Destroy Entity",
                    "A targetable Soul Feast entity spawns with 2 white orbs nearby. It applies a debuff and Infirm and fixates on a random player with the text 'You are targeted by Soul Feast. Run!' A player must pick up a white orb to gain the Purifying Light special action skill, then target the Soul Feast entity and activate the skill to destroy it.",
                    "When Soul Feast spawns, a nearby player picks up one of the two white orbs and gains the Purifying Light special action. Target the Soul Feast entity with TAB and activate the skill. Ensure clear line of sight — the boss can body-block the ability. Lingering models after destruction are harmless.",
                    "Soul Feast continues applying Infirm debuff. If not destroyed, it persists and debilitates the group."
                },
                {
                    "Planet Crash (Defiance Bar)",
                    "Breakbar / Wipe Prevention",
                    "Below 50% health, Dagda periodically gains a defiance bar and summons a massive celestial body. The group has a 10-second window to break the bar. Failure causes the celestial body to crash, dealing 90% max HP unavoidable damage to all players. Success causes Dagda to become Exposed, significantly speeding up the fight.",
                    "This bar must always be broken. Save major CC skills for Planet Crash. Dump all CC the instant the bar appears. The Exposed buff from a successful break dramatically accelerates the final phases.",
                    "All players take 90% max HP damage — combined with any Infirm stacks this is lethal."
                },
                {
                    "Rain of Comets",
                    "Half-Arena AoE",
                    "A meteor shower covers half the arena with pulsing damage. The visual comet effects themselves do not deal damage — only the ground AoE zones do.",
                    "Walk into the safe half immediately when Rain of Comets appears. Can be followed by Demonic Fever — continue managing spread while in the safe half.",
                    "Players standing in the dangerous half take repeated pulsing damage."
                },
            },
            {
                "Standing still attacking during Shooting Stars instead of moving to body-block.",
                "Not breaking the Planet Crash defiance bar — it deals 90% max HP to all players.",
                "Being slow to exit the lethal red pool during intermission phases.",
                "Spreading circles near the arena edge and being forced into movement that overlaps other players.",
                "Blocking the Purifying Light cast with Dagda's body — ensure line of sight to the Soul Feast entity.",
            },
            {
                "Shooting Stars — blockers between Dagda and the target, need 5!",
                "Spinning Nebula — back away!",
                "Spread circles — pick a spot and hold it!",
                "Intermission — avoid the cones, kill the adds!",
                "Soul Feast — pick up the orb, tab-target, use Purifying Light!",
                "Planet Crash bar — all CC now, always break it!",
            },
            {
                "100-75%: Body-block Shooting Stars constantly. Dodge Spinning Nebula.",
                "Intermissions: Stand between Demonic Blast cones. Kill Kryptis adds quickly. Exit the red pool area fast.",
                "75-50%: Soul Feast begins. Assign someone to pick up white orbs and use Purifying Light.",
                "50%+: Planet Crash bar appears — save CC always. Break it every time.",
                "Final burn: All mechanics layered. Prioritize Planet Crash bar above everything.",
            },
            {
                "When you see 'Beware the Shooting Stars' — if you are the target, move away. Everyone else body-block between Dagda and the target. Need 5 blockers minimum.",
                "Spinning Nebula — back away or dodge immediately.",
                "Spread circles — pick a spot and move, do not overlap.",
                "Intermissions — find a gap between the pizza cones. Kill the Kryptis adds fast. Get out of the red pool.",
                "Soul Feast: pick up the white orb, tab-target the Soul Feast entity, use the Purifying Light special action to destroy it.",
                "Planet Crash bar below 50% — always break it. Save CC.",
            },
            {
                "Phase 1 (100-75%): Shooting Stars body-block every time. Dodge Spinning Nebula. Spread on circles.",
                "Intermission 1 (75%): Avoid Demonic Blast cones. Kill 2 adds. Get away from lethal red pool.",
                "Phase 2 (75-50%): Soul Feast begins — destroy it with Purifying Light.",
                "Intermission 2 (50%): Same as before but 4 adds to kill.",
                "Phase 3 (50-25%): Planet Crash bar — all CC. Rain of Comets — walk to safe side.",
                "Intermission 3 (25%): 6 adds to kill.",
                "Phase 4 (25-0%): Everything active. Break Planet Crash always. Burn Dagda.",
            },
            {
                "If Planet Crash fires (bar missed), use every defensive cooldown and emergency heal — it deals 90% HP to all.",
                "If Shooting Stars fails and Infirm is applied, tighten body-blocking discipline and top off players immediately.",
                "If adds are slow to die in intermission, move the group to the lethal pool's edge and cleave from maximum safe range.",
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Temple of Febe
        // ════════════════════════════════════════════════════════════════════════
        {
            "Temple of Febe",
            "Secrets of the Obscure",
            "An encounter against Cerus featuring six repeating sin-themed mechanics. Failing mechanics grants Cerus Empowered stacks that directly scale the damage of the final phase. Two split phases at 80% and 50% require defeating exactly two Embodiments from the empowered set. A defiance bar at 80%, 50%, and 10% must be broken to avoid a lethal Petrify cast that also heals Cerus.",
            "Defeat Cerus by managing all six mechanics cleanly, defeating exactly two Embodiments from the empowered set in each split phase, and breaking the defiance bar at every threshold.",
            {
                {
                    "Crushing Regret (Greens)",
                    "Stack Mechanic",
                    "A large green circle appears on a random player. Five players must be inside the circle at detonation. Failure deals squad-wide damage, applies Expose, and gives Cerus 5 Empowered stacks. Empowered version spawns three smaller circles each requiring 3 players.",
                    "Stack tightly near Cerus at all times. When the green circle appears, all non-spread players move onto it. Avoid forced-movement skills while greens are active.",
                    "Squad-wide damage, Expose, 5 Empowered stacks on Cerus."
                },
                {
                    "Wail of Despair (Reds)",
                    "Spread AoE / Ground Denial",
                    "A red orb spawns above every player and drops after 5 seconds, creating a persistent pool lasting 60 seconds. Players who remain in pools take sustained damage. Empowered version doubles the pool radius.",
                    "When reds appear, backstep away from Cerus and spread slightly so pools do not overlap. Never drop reds on the boss itself — this blocks wall navigation. Pools last 60 seconds and clutch the arena if poorly placed.",
                    "Reds dropped on or near the boss create persistent pools that block navigation for Envious Gaze and crowd the arena."
                },
                {
                    "Envious Gaze (Wall)",
                    "Rotating Wall / Boon Corruption",
                    "Cerus turns to face a random player. An arrow telegraph points in the wall's direction. A massive wall spawns and rotates counterclockwise, corrupting 3 boons per tick and dealing moderate damage to players it hits. The boss's hitbox center is safe — the wall does not extend into it.",
                    "When the wall spawns, move to the clockwise side of the arrow indicator and rotate around Cerus in the same direction as the rotation (counterclockwise wall means move counterclockwise to stay just ahead of it). If caught on the wrong side, dodge through the boss's center hitbox. Empowered: a second arrow spawns half a rotation away — move past the counterclockwise side of the player arrow, then past the slower wall's starting point.",
                    "Players caught by the wall lose boons continuously and take sustained damage. Empowered version adds a second wall."
                },
                {
                    "Malicious Intent (Malice Shadow)",
                    "Soft CC / Add",
                    "A demonic tether attaches to a random player with a 5-second timer. When the timer expires, a Malicious Shadow spawns at the player's location and walks toward Cerus. If it reaches the boss, Cerus gains 5 Empowered stacks and heals. Soft CC (Immobilize, Cripple, Chill — not hard CC, knockdowns, pulls, or fear) stops the shadow. Empowered version targets three players for 15 potential stacks.",
                    "If you have the tether, dodge backward to spawn the shadow away from Cerus. Organized groups use soft CC (Immobilize) on the shadow near the boss so it can be cleaved simultaneously with boss damage. Use ONLY soft CC — hard CC, knockdowns, pulls, and fears do not work and waste cooldowns.",
                    "Shadow reaches Cerus — 5 Empowered stacks and boss heals. Empowered: 15 stacks."
                },
                {
                    "Insatiable Hunger (Gluttony Orbs)",
                    "Collection / Rotation",
                    "Demonic orbs spawn at the arena edge. Small orbs can be destroyed or reflected (which heals Cerus — do not reflect). Three large orbs only disappear when a player walks through them; each grants Cerus 1 Empowered stack and applies 30 seconds of Torment (350 damage/second per stack) to the collecting player. All three large orbs must be collected. Empowered version spawns five large orbs lasting 3 minutes of Torment.",
                    "Rotate around the boss and walk through all three large orbs to collect them. Place reflect or absorb abilities on Cerus as small orbs approach — this prevents small orbs from healing Cerus. Distribute large orb collection so no single player takes more than 2-3 (especially important in the Empowered 5-orb version).",
                    "Large orbs reach Cerus — each applies 1 Empowered stack."
                },
                {
                    "Cry of Rage (Rage AoE)",
                    "Large AoE / Dodge",
                    "A large expanding AoE appears at Cerus's feet and detonates after about 5 seconds, dealing massive damage and applying Expose. Empowered version is undodgeable — the AoE becomes large enough that it cannot be outrun with a single dodge.",
                    "Dodge as the AoE indicator fills, not at the start. High-ping players should move slightly earlier. Empowered: the AoE is undodgeable — the group must preemptively move outside the range entirely, or use invulnerability sources.",
                    "Hit by the explosion — high damage and Expose applied."
                },
                {
                    "Petrify (Defiance Bar)",
                    "Breakbar / Wipe Prevention",
                    "At 80%, 50%, and 10% health, Cerus channels Petrify. If the full cast completes, the squad is frozen for 8 seconds, takes high damage, and Cerus heals 20% of his maximum health (affected by Poison). Breaking the bar interrupts the cast and transitions the phase. Cerus also passively applies Petrify stacks via his tether throughout the fight, reducing movement, damage, and skill speed — breaking the bar removes 2 stacks immediately.",
                    "Save major CC skills for each bar. Dump all CC the instant the bar appears. Coordinate CC to break it as fast as possible — the 20% heal on failure can extend the fight significantly.",
                    "Squad frozen for 8 seconds; high damage; Cerus heals 20% health. Healing can be partially mitigated by Poison."
                },
                {
                    "Split Phase – Embodiments",
                    "Add Phase / Kill Selection",
                    "After breaking the Petrify bar at 80% and 50%, Cerus splits into six Embodiments (one per sin mechanic). An Eastern set (randomly empowered each pull: Rage, Regret, or Envy) and Western set (Malice, Gluttony, Despair). Kill exactly two Embodiments from the empowered set and leave all others alive. Killing non-empowered Embodiments causes all three empowered Embodiments to be active in the next boss phase.",
                    "Community standard: target Regret and Gluttony (lowest fail impact). Kill the rightmost Embodiment of the empowered set first, then the leftmost, and leave the center alive. Each Embodiment uses its own mechanic without voice line warnings — watch the arena constantly during splits. Drop Wail of Despair (red) pools away from other Embodiments.",
                    "Wrong Embodiments killed — all three empowered Embodiments active next phase, stacking multiple Empowered mechanics simultaneously."
                },
                {
                    "Enraged Smash (Final Phase)",
                    "Phase Mechanic / Damage Scaling",
                    "Triggered by breaking the 10% defiance bar. Cerus smashes the ground every 3 seconds, generating platform-wide demonic energy expulsions. Damage scales directly with accumulated Empowered stacks — below 30 stacks is manageable with standard healing; above 30 stacks requires dedicated emergency healing.",
                    "Block, dodge, or use invulnerability for each smash. Cycle defensive cooldowns. Burn Cerus as fast as possible — the fight ends when he dies.",
                    "Players fail to block, dodge, or use invulnerability — take repeated heavy hits that scale with Empowered stacks."
                },
            },
            {
                "Dropping red pools on or near the boss, blocking wall rotation paths.",
                "Using hard CC on Malicious Intent shadows instead of soft CC — shadows are immune to hard CC.",
                "Killing non-empowered Embodiments during split phases, causing three active empowered mechanics next phase.",
                "Not breaking the Petrify defiance bar at 80%, 50%, or 10%, allowing Cerus to heal 20%.",
                "Accumulated Empowered stacks above 30 making Enraged Smash unmanageable in the final phase.",
            },
            {
                "Greens — stack on the circle, need 5!",
                "Reds — backstep away from Cerus, spread out!",
                "Wall rotating — move counterclockwise!",
                "Shadow spawning — soft CC only, Immobilize it!",
                "Orbs — rotate and collect the three large ones!",
                "Rage AoE — dodge as it fills!",
                "Bar at 80/50/10% — all CC now, break it!",
                "Split phase — kill right then left empowered, leave center alive!",
            },
            {
                "Phase 1 (100-80%): Learn all six mechanics. Stack greens, backstep reds away from boss, rotate for wall, soft-CC shadows, collect orbs, dodge Rage.",
                "80% bar: Break it. Split phase — kill exactly two empowered Embodiments.",
                "Phase 2 (80-50%): Modified mechanic order. Empowered versions may appear from failed mechanics.",
                "50% bar: Break it. Second split phase — kill exactly two empowered Embodiments.",
                "Phase 3 (50-10%): All mechanics plus Empowered versions from split failures.",
                "10% bar: Break it — triggers Enraged Smash. Burn Cerus. Scale of final phase determined by total Empowered stacks accumulated.",
            },
            {
                "Six mechanics repeat throughout the fight. Each failure gives Cerus Empowered stacks that make the final phase harder.",
                "Greens (Regret): stack on the circle — need 5 players inside.",
                "Reds (Despair): backstep away from Cerus, spread, never drop red pools on the boss.",
                "Wall (Envy): rotate counterclockwise around Cerus to stay ahead of the wall.",
                "Shadows (Malice): soft CC only — Immobilize, Cripple, Chill. No knockbacks, no pulls, no fears.",
                "Orbs (Gluttony): walk through the three large orbs to collect them. Do not reflect small orbs.",
                "Rage: dodge as the AoE fills, not at the start.",
                "Defiance bars at 80%, 50%, 10%: always break them — failing heals Cerus 20%.",
                "Split phases: kill exactly two empowered Embodiments. Do not accidentally kill non-empowered ones.",
            },
            {
                "Phase 1 (100-80%): All six mechanics in rotation. Handle each cleanly.",
                "80% bar: Break it → split. Kill right empowered first, left second, leave center alive.",
                "Phase 2 (80-50%): Modified order. Empowered versions possible. Continue clean mechanic execution.",
                "50% bar: Break it → split. Same Embodiment kill priority.",
                "Phase 3 (50-10%): All mechanics. Avoid letting Empowered stacks climb above 30.",
                "10% bar: Break it → Enraged Smash. Cycle blocks, dodges, invulns. Burn Cerus to zero.",
            },
            {
                "If the Petrify bar is missed, Cerus heals 20% — apply Poison before a potential failure to reduce the heal. Accept the setback and continue.",
                "If wrong Embodiments are killed in a split phase, three empowered Embodiment mechanics will be active next phase — use all defensive resources and prioritize mechanic execution over DPS.",
                "If Empowered stacks are above 30 going into Enraged Smash, maximize defensive cooldown cycling and emergency healing.",
            }
        },
    };
}
