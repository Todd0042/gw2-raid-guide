#include "WingData.h"

std::vector<Wing> g_Wings;

void InitWingData()
{
    g_Wings =
    {
        // ════════════════════════════════════════════════════════════════════════
        // Wing 1 – Spirit Vale
        // ════════════════════════════════════════════════════════════════════════
        {
            "Spirit Vale",
            "Wing 1 – Spirit Vale",
            {
                {
                    "Vale Guardian",
                    {
                        {
                            "Color Split (Blue/Green/Red)",
                            "Occurs every 33% of the bosses health.",
                            "Boss divides into three colored fragments and the arena glows with matching colors.",
                            "Assign players to either split into groups to kill the fragments or to pull them together and kill them all together. Condition damage (2 or more) go to red, everyone else goes to Blue or Green.",
                            "If any fragment survives too long, the boss reconstitutes and deals massive raid damage.",
                            "Players running to the wrong color; groups failing to break defiance bars quickly which is required after depleting each fragments health bar."
                        },
                        {
                            "Disturbed Magic (Green Circles)",
                            "Happens at regular intervals throughout the fight.",
                            "Large green AoE circles appear on the ground with a pulsing glow.",
                            "Stand inside the green circle to prevent a raid-wide explosion.",
                            "If the circle is not filled, the raid takes lethal damage. This can be healed through if the healers are paying attention and saving large heals for this mechanic.",
                            "Players standing too far away from the group to either receive heals or get in the circle with the group."
                        },
                        {
                            "Unstable Magic Spike (Blue Teleports)",
                            "Every 10 seconds.",
                            "Small blue AoE circles appear on the ground under players - 5 until 33% then 10. Screen borders of all players standing on a Blue Circle will glow Yellow. Audio cues sound like crackly buzzing.",
                            "Move off of the Blue Circle so that you do not get teleported.",
                            "Staying on the blue circle results in getting teleported to a random location in the arena.",
                            "Players not paying attention to the many queues that the mechanic is about to affect them."
                        },
                    },
                    {
                        { "Red Seeker Orbs", "Slow-moving orbs pressure positioning and require avoidance. Ensure that players know not to use skills that will pull these to the group." },
                        { "Simon Says", "The arena floor will light up in a rotating pattern beginning in Phase 2. Players need to avoid the lit up areas by rotating the group clockwise around the arena ahead of the lit up portions." },
                    }
                },
                {
                    "Gorseval",
                    {
                        {
                            "Charged Souls",
                            "Occurs during each break phase when Gorseval becomes invulnerable.",
                            "Gorseval will hunker down and get a bubble shaped shield around him. in the NW, NE, SW, SE sides of the arena 1 spirit will spawn (for each of the 4 locations).",
                            "Slow or immobilize all ghosts while destroying them. It is common practice for 1 or 2 players to take on the back ghosts and keep them slowed while the rest of the group destroys the others then the groups reunite and destroy the remaining two.",
                            "If any of the spirits reach the center, Gorseval will begin his World Eater attack and must be destroyed before he conpletes the cast of the ability or the entire group dies instantly.",
                            "Inadequate DPS, Players not going to the correct area, Spirits not being slowed."
                        },
                        {
                            "World Eater",
                            "Triggers after each spirit phase if the group fails to destroy all spirits and allow one to reach Gorseval. Will also occour at the end of the fight after the last CC phase.",
                            "Gorseval channels a massive explosion with a distinct animation and audio cue.",
                            "Glide or run to the safe platform before the explosion goes off.",
                            "Instant raid wipe if players do not destroy the boss before the cast is complete.",
                            "Breaking the final CC bar too early whilst also having inadequate DPS. Either one or the other will save the group, but a lack of self control and a lack of ability combined lead to certain demise."
                        },
                    },
                    {
                        { "Spectral Walls", "This mechanic is largelly ignored now days and considered a group DPS check rather than a mechanic to perform properly. Have 13k+ DPS average or more for the group and you should be fine." },
                    }
                },
                {
                    "Sabetha",
                    {
                        {
                            "Cannon Duty",
                            "Occurs on a fixed rotation every 30 seconds.",
                            "Sabetha calls out a cannon and a player receives a bomb SAK giving them a green circle under their feet.",
                            "Launch to the platform using the launch pad aligned with the platform by someone going onto the launch pad and whoever gets the 'green bomb' throwing it at the launch pad., kill the cannon, and glide back to the arena being careful not to glide into a flame wall.",
                            "If cannons are not destroyed, they bombard the arena and eventually the arena can be destroyed, wiping the group.",
                            "Players missing launch timing; forgetting rotation order; missing the bomb throw."
                        },
                        {
                            "Player Bombs",
                            "Randomly targets players throughout the fight.",
                            "A bomb icon appears above the two nearest player's heads with a countdown.",
                            "Move away from the group until the bomb explodes.",
                            "Bombs that explode in the group cause massive damage to group members.",
                            "Players either ignoring the bombs or panicking and running through the stack."
                        },
                        {
                            "Heavy Bomb",
                            "Randomly starting at 75% health.",
                            "A large bomb spawns on the platform with a timer above it.",
                            "Run up to the bomb and push F to kick it off the platform.",
                            "Bombs that are allowed to explode on the platform will cause damage to the playform.",
                            "Players ignoring the bombs."
                        },
                        {
                            "Firestorm (Flame Wall)",
                            "Every 45 seconds. This aligns with every 3rd cannon phase.",
                            "Sabetha will target a player at random, lock in place, and yell burn. A red line indicator depicts the spawn location of the flame wall.",
                            "avoid the flame wall by rotating counter clockwise around the arena.",
                            "Instant death for any hit by the flame wall.",
                            "Not.. Paying.. Attention. This mechanic has a large and loud tell with plenty time to react."
                        },
                    },
                    {
                        { "Flak Shots", "Ranged attacks target the player furthest from Sabetha and leave a damage field on the ground." },
                        { "Karde’s Flame Turrets", "Turrets spawn and must be destroyed quickly to reduce pressure." },
                        { "Knucklle's knock back.", "When Knuckle's joins the fight the group needs to watch for when he gets a CC bar and break it immediately. Failing to do so causes a large knockback effect on all players." },
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 2 – Salvation Pass
        // ════════════════════════════════════════════════════════════════════════
        {
            "Salvation Pass",
            "Wing 2 – Salvation Pass",
            {
                {
                    "Slothasor  (Ohhh Slothy.. Why must you kill me?)",
                    {
                        {
                            "Poison Mushrooms",
                            "Already in the arena at the beginning of the fight and respawning after a delay.",
                            "Green mushroom on the ground and rising poison stacks on players.",
                            "Eat mushrooms in the correct rotation to cleanse poison and keep the group alive - Approximate locations of the order is NE, N, W, S.",
                            "Poison stacks overwhelm the group, causing rapid deaths.",
                            "Not eating the green mushroom so that you can go eat the red mushrooms, the group killing the player that ate the green mushroom before they could clear a path through the red mushrooms."
                        },
                        {
                            "Tantrum",
                            "Occurs at fixed intervals throughout the fight.",
                            "Slothasor rears up and begins stomping repeatedly.",
                            "Use stability or dodge the stomps while maintaining healing on the group. you can also simply walk off the purple circles if you're not the type that is inclined to panic.",
                            "Unmitigated stomps deal heavy damage and are very likely to down any player hit by the effect.",
                            "Players not stacking for heals or not avoiding the circles."
                        },
                        {
                            "Narcolepsy",
                            "Every 20% of Slothasor's health and again at 10%.",
                            "Slothasor falls asleep because he doesn't see our piddly damage as a threat.",
                            "Healers must be ready to provide the group with stability or aegis, or alternatively the players need to be ready with a stun break when the CC bar is broken, everyone needs to break the CC bar.",
                            "Death to poison by being feared into it.",
                            "Players not stacking for stability / aegis or being prepared with a stun break."
                        },
                        {
                            "Volatile Poison (SAK)",
                            "Every 25 seconds.",
                            "A random player in the group is given a SAK and gets a poison skull above their head.",
                            "If you get the SAK run in the direction that the group came from (clockwise along the path) and drop the poison cloud a fair distance behind the group close to the wall then return to the group for healing.",
                            "Death to the entire group as the dropped poison cloud expands encompassing the arena.",
                            "Not paying attention to if you receive the SAK."
                        },
                        {
                            "Spore Release (Shakes)",
                            "Starting at 50% health.",
                            "Slothasor will shake sending spores out at the group.",
                            "Use evade skills, projectile disrupting skills, or dodge the spores as they come toward you.",
                            "Multiple stacks of damaging conditions that must be cleansed to prevent certain demise.",
                            "Not avoiding the spores, not paying attention to the fight."
                        },
                    },
                    {
                        { "Fixate", "A random player is targeted and must kite Slothasor safely around the arena." },
                        { "Slubling Waves", "Slublings spawn and must be destroyed either by pulling them to the group and cleaving them down or with ranged attacks." },
                    }
                },
                {
                    "Bandit Trio",
                    {
                        {
                            "Saboteurs",
                            "Spawn regularly throughout the event as cages are being opened.",
                            "Saboteurs sprinting toward cages with bombs in hand.",
                            "Kill saboteurs immediately before they reach the cages.",
                            "Saboteurs destroy cages, causing event failure.",
                            "Players tunneling on other enemies; failing to assign saboteur watchers."
                        },
                        {
                            "Berg",
                            "Spawns at 6:50 on the timer.",
                            "Berg will spawn near the Eastern gate.",
                            "Throw a beehive at Berg to give him a debuff then destroy him with maximum prejudice.",
                            "Unlikely to fail this fight but it would lead to death and Cage damage.",
                            "Throwing all behives at Berg at the same time. They do not stack, throw one at a time when the previous one wears off."
                        },
                        {
                            "Zane",
                            "Spawns at 5:00 on the timer.",
                            "Zane will spawn near the Eastern gate, but you need to already be there so go there at 5:10.",
                            "Release the hounds as Zane is about to spawn, keep Zane in the far South by the gate facing away from the cage so that his attacks do not reach the cage.",
                            "The cage takes massive damage leading to potential encounter failure.",
                            "Not being in place on time, not staying with the group, not paying attention."
                        },
                        {
                            "Narella (Nutella)",
                            "Spawns at 2:55 on the timer.",
                            "Narella will spawn near the West gate.",
                            "Watch for a Saboteur that spawns right before Narella and deal with them then throw oil kegs onto the ground causing Narella to ignite them, Avoid fire tornadoes, kill Narella.",
                            "Death and demise of both your characters life and your dignity.",
                            "Being hit by the fire tornadoes."
                        },
                    },
                    {
                        { "Mortar Barrage", "Mortars fire into the arena, one group member needs to go outside the walls and deal with the adds that shoot these off." },
                    }
                },
                {
                    "Matthias Gabrel",
                    {
                        {
                            "Elemental Phases",
                            "Matthias transitions at health thresholds: 80%, 60%, and 40% between Ice (starting), Fire, Water, and Abomination phases.",
                            "Matthias gains a new aura and begins using elemental attacks.",
                            "Adapt to each phase’s unique mechanics such as avoiding or burning ice patches with player skills, avoiding fire storms and not standing still during that phase, or avoiding rain clouds and not moving more than you absolutely have to.",
                            "Incorrect handling of elemental mechanics leads to rapid group damage or deaths.",
                            "Players walking through Ice patches, getting hit by fire tornadoes, standing in rain clouds, not moving during fire, not standing still during water."
                        },
                        {
                            "Blood Sacrifice",
                            "Starting at 9:45 then every 45 seconds until 40% health",
                            "A player is lifted into the air inside a bloodstone Shard.",
                            "Break the shards defiance bar without killing your party member before they die to the sacrifice.",
                            "The sacrificed player dies if not freed in time.",
                            "Players not noticing the sacrifice; insufficient burst CC on the shard."
                        },
                        {
                            "Blood Shield (bubble)",
                            "Periodically throughout the fight.",
                            "Mathias gains a protective barrier and begins shooting projectiles at a player in the group.",
                            "Someone must reflect Mathias's own projectiles back at him. 18 of the 20 to 25 that he shoots must be reflected back to break the shield.",
                            "It's kindof a rinse and repeat until the shield is broken but Mathias can not be damaged while he has the protective shield.",
                            "Nobody reflecting the projectiles as required."
                        },
                        {
                            "Corruption",
                            "Every 30 seconds.",
                            "A red circle under your feet and no SAK.",
                            "Run into one of the CLEAN water fountains around the edge of the arena to cleanse the poison from yourself.",
                            "Poison clouds spawning at the players location when they die from the poison that deal high damage to the group.",
                            "Not knowing what fountains are clean at any given time in the fight, not reacting quickly enough."
                        },
                        {
                            "Poison (SAK)",
                            "Periodically throughout the fight.",
                            "A red circle under your feet and a SAK.",
                            "Run to the wall between fountains and drop the poison cloud then run back to the group for healing.",
                            "Poison clouds spawning at the players location when they die from the poison that deal high damage to the group.",
                            "Not reacting quickly enough, dropping the poison where it overlaps a fountain."
                        },
                        {
                            "Shards of Rage & Hadoken",
                            "Periodically throughout the fight.",
                            "Mathias either leaps into the air or spins around as a wind-up.",
                            "Projectile destroy or avoid the attacks as appropriate.",
                            "Large damage inflicted upon the player.",
                            "Reflecting the projectiles rather than destroying them, standing in the way of the hadoken."
                        },
                    },
                    {
                        { "Misc", "Most attacks in this encounter are serious enough to be considered major attacks, he does throw some punches as well though." },
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 3 – Stronghold of the Faithful
        // ════════════════════════════════════════════════════════════════════════
        {
            "Stronghold of the Faithful",
            "Wing 3 – Stronghold of the Faithful",
            {
                {
                    "Escort (McLeod, Glenna, Towers)",
                    {
                        {
                            "Bridge Defense",
                            "Occurs throughout the event as Glenna moves across the bridge.",
                            "Warg spawns, snipers on ledges, and Glenna calling for help.",
                            "Stay near Glenna, kill incoming enemies quickly, and prevent her from being overwhelmed.",
                            "If Glenna is downed or killed, the event fails.",
                            "Players running too far ahead; ignoring snipers; leaving Glenna unprotected."
                        },
                        {
                            "Tower Captures",
                            "Triggered when players reach each tower along the path.",
                            "A champion enemy guarding the tower and Glenna stopping at the base.",
                            "Split into assigned groups, kill the champion, and capture the tower to progress.",
                            "If towers are not captured, Glenna cannot proceed and the event stalls.",
                            "Groups not splitting correctly; failing to CC champions; leaving towers uncleared."
                        },
                    },
                    {
                        { "Warg Ambushes", "Wargs periodically attack Glenna and must be killed quickly." },
                    }
                },
                {
                    "Keep Construct",
                    {
                        {
                            "Core Push",
                            "Occurs during each burn phase transition when the core becomes active.",
                            "A glowing orb (the core) appears and begins moving slowly.",
                            "Push the core into Keep Construct by attacking it while avoiding stray hits that knock it off course.",
                            "If the core is not pushed in time, the phase resets and the fight is prolonged.",
                            "Players hitting the core from the wrong angle; pushing too early; failing to stack for control."
                        },
                        {
                            "Orb Collection",
                            "Happens during the split phases when Keep Construct becomes invulnerable.",
                            "Small orbs spawning around the arena with glowing trails.",
                            "Collect orbs and deliver them to the center to charge the core.",
                            "Insufficient orbs collected results in a weak burn phase or phase failure.",
                            "Players collecting orbs inefficiently; missing orbs; not coordinating routes."
                        },
                        {
                            "Phantasmal Blades",
                            "Occurs regularly throughout the fight, especially during burn phases.",
                            "Blades materializing around the arena and sweeping in straight lines.",
                            "Dodge or sidestep the blades while maintaining DPS.",
                            "Being hit by multiple blades can down or kill players.",
                            "Players tunneling on DPS; standing in predictable blade paths."
                        },
                    },
                    {
                    }
                },
                {
                    "Xera",
                    {
                        {
                            "Button Phases",
                            "Triggered at the start of each platform phase and during transitions.",
                            "Buttons glowing on platforms and Xera becoming invulnerable.",
                            "Assign players to stand on buttons simultaneously to progress the encounter.",
                            "If buttons are not activated in time, the phase stalls and adds overwhelm the group.",
                            "Players standing on the wrong button; stepping off too early; poor coordination."
                        },
                        {
                            "Platform Breaks",
                            "Occurs during the final phase and periodically during transitions.",
                            "Platforms glowing red and beginning to crumble.",
                            "Move quickly to intact platforms before the current one collapses.",
                            "Falling results in instant death and can cause a wipe if too many players fall.",
                            "Players waiting too long; misjudging jump distances; not following the group."
                        },
                        {
                            "Mirror Images",
                            "Spawn during each split phase and periodically during the fight.",
                            "Illusions of Xera appearing around the arena.",
                            "Kill mirror images quickly to reduce pressure and prevent arena clutter.",
                            "Too many illusions overwhelm the group with damage and mechanics.",
                            "Players ignoring illusions; splitting damage inefficiently."
                        },
                    },
                    {
                        { "Bloodstone Shards", "Shards fall from above and must be avoided." },
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 4 – Bastion of the Penitent
        // ════════════════════════════════════════════════════════════════════════
        {
            "Bastion of the Penitent",
            "Wing 4 – Bastion of the Penitent",
            {
                {
                    "Cairn the Indomitable",
                    {
                        {
                            "Displacement",
                            "Occurs regularly throughout the fight, especially after Cairn teleports.",
                            "Cairn raises his arm and a glowing line appears indicating the direction of the teleport.",
                            "Quickly reposition after each teleport to maintain stack and avoid being caught out of range.",
                            "Players left behind take heavy damage or die from subsequent mechanics.",
                            "Players not reacting to teleports; running in the wrong direction; losing uptime."
                        },
                        {
                            "Shared Agony",
                            "Applied periodically to a random player.",
                            "A tether appears linking the afflicted player to the group.",
                            "The tethered player should stand slightly away from the group but not too far to avoid lethal damage.",
                            "If the tether is stretched too far, the afflicted player dies instantly.",
                            "Players running too far away; stacking too close and causing unnecessary damage."
                        },
                    },
                    {
                        { "Orb Spawns", "Orbs appear and must be avoided to prevent damage." },
                    }
                },
                {
                    "Mursaat Overseer",
                    {
                        {
                            "Mosaic Tiles",
                            "Active throughout the fight as safe and unsafe tiles rotate.",
                            "Tiles glow with shifting patterns indicating safe zones.",
                            "Move to safe tiles as they appear while maintaining DPS on the boss.",
                            "Standing on unsafe tiles deals heavy damage and can quickly down players.",
                            "Players tunneling on DPS; moving too late; misreading tile patterns."
                        },
                        {
                            "Jade Soldiers",
                            "Spawn at regular intervals and march across the arena.",
                            "Jade constructs emerging from portals and walking in straight lines.",
                            "Avoid their paths entirely; do not attempt to tank or kill them.",
                            "Being touched by a Jade Soldier results in instant death.",
                            "Players dodging into soldier paths; standing too close to spawn points."
                        },
                    },
                    {
                        { "Overhead Slam", "A large slam attack requires players to dodge or block." },
                    }
                },
                {
                    "Samarog",
                    {
                        {
                            "Guldhem and Rigom",
                            "Triggered at 66% and 33% health thresholds.",
                            "Samarog becomes invulnerable and the two adds spawn on opposite sides.",
                            "CC Guldhem, kite Rigom into him, and kill them in the correct sequence.",
                            "If Rigom dies too far from Guldhem, the phase resets.",
                            "Players killing Rigom too early; poor CC timing; failing to kite properly."
                        },
                        {
                            "Impaling Stab",
                            "Occurs periodically throughout the fight.",
                            "Samarog targets a player and performs a long, telegraphed thrust.",
                            "The targeted player must dodge or block the attack; allies should avoid standing in the line.",
                            "Being hit results in a stun and heavy damage, often leading to death.",
                            "Players not noticing the targeting animation; standing behind the targeted player."
                        },
                        {
                            "Shockwaves",
                            "Triggered after Samarog performs a large slam attack.",
                            "Circular shockwaves radiating outward from Samarog.",
                            "Jump or dodge each shockwave to avoid damage.",
                            "Taking multiple shockwaves can down or kill players.",
                            "Players mistiming jumps; dodging too early; standing too close to Samarog."
                        },
                    },
                    {
                    }
                },
                {
                    "Deimos",
                    {
                        {
                            "Black Oil",
                            "Spawns periodically throughout the fight, especially during later phases.",
                            "Black puddles forming beneath players or at random locations.",
                            "Place oil away from the group and avoid standing in it.",
                            "Oil expands and deals heavy damage, overwhelming the arena.",
                            "Players dropping oil in the stack; placing oil near Saul or key positions."
                        },
                        {
                            "Hand Kiting",
                            "Hands spawn regularly and fixate on a designated player.",
                            "Shadowy hands emerging from the ground and moving toward the kiter.",
                            "The kiter must move in a controlled path away from the group while avoiding oil.",
                            "Hands reaching the group cause massive damage and chaos.",
                            "Kiter running through the group; hands being dragged into oil or mechanics."
                        },
                        {
                            "Mind Crush",
                            "Occurs at fixed intervals throughout the fight.",
                            "Deimos raises his arms and a large red AoE appears on the ground.",
                            "Stack tightly to share the damage and use defensive cooldowns.",
                            "Unstacked players are instantly killed.",
                            "Players standing too far away; dodging out of the stack; late stacking."
                        },
                        {
                            "Saul Phases",
                            "Triggered at 75%, 50%, and 25% health thresholds.",
                            "Saul gaining new behaviors such as gambling, drinking, or summoning adds.",
                            "Manage adds, interrupt Saul’s dangerous abilities, and maintain control of the arena.",
                            "Unmanaged adds overwhelm the group or Saul dies prematurely.",
                            "Players ignoring adds; failing to interrupt; poor positioning during transitions."
                        },
                    },
                    {
                        { "Greater Death Mark", "A large AoE requires coordinated movement to avoid group damage." },
                        { "Shackles", "Players are tethered together and must coordinate movement to break the link." },
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 5 – Hall of Chains
        // ════════════════════════════════════════════════════════════════════════
        {
            "Hall of Chains",
            "Wing 5 – Hall of Chains",
            {
                {
                    "Soulless Horror (Desmina)",
                    {
                        {
                            "Death Bloom",
                            "Occurs at regular intervals throughout the fight.",
                            "A large expanding red AoE around the boss with a pulsing animation.",
                            "Move out of the expanding circle immediately while maintaining awareness of scythe patterns.",
                            "Standing in the AoE deals heavy ticking damage and can quickly down players.",
                            "Players dodging into scythes; reacting too slowly; stacking too close to the boss."
                        },
                        {
                            "Spinning Scythes",
                            "Active throughout the fight, with new scythes spawning in patterns as the fight progresses.",
                            "Scythes materializing on the ground and rotating in predictable paths.",
                            "Learn the scythe patterns and position safely between them while maintaining DPS.",
                            "Being hit by a scythe deals massive damage and often results in instant death.",
                            "Players standing in scythe spawn points; panicking during movement-heavy moments."
                        },
                        {
                            "Tormented Dead",
                            "Spawn periodically and fixate on random players.",
                            "Large undead adds glowing with red energy running toward their fixated target.",
                            "Kite the Tormented Dead away from the group until they explode safely.",
                            "Explosions inside the group cause lethal damage and can wipe the raid.",
                            "Fixated players running through the stack; killing the add too close to the group."
                        },
                    },
                    {
                        { "Flesh Wurms", "Wurms spawn and must be killed to reduce arena pressure." },
                    }
                },
                {
                    "River of Souls",
                    {
                        {
                            "Orb Carriers",
                            "Occurs repeatedly as players progress along the river path.",
                            "Orbs floating above platforms and glowing indicators showing where they must be delivered.",
                            "Pick up orbs and carry them to the correct platforms to stabilize the path forward.",
                            "Missing orb deliveries causes platforms to collapse or prevents progression.",
                            "Dropping orbs accidentally; not coordinating who carries which orb; running ahead without stabilizing platforms."
                        },
                        {
                            "Soul Walls",
                            "Appear at fixed intervals along the path.",
                            "Large walls of ghostly faces sweeping horizontally across the arena.",
                            "Time your movement to pass through gaps or wait for the wall to pass.",
                            "Being hit by a soul wall deals heavy damage and can knock players off platforms.",
                            "Players rushing ahead; misjudging wall timing; jumping into walls while gliding."
                        },
                    },
                    {
                        { "Platform Breaks", "Platforms collapse behind the group, forcing constant movement." },
                    }
                },
                {
                    "Statues of Grenth",
                    {
                        {
                            "Orb Passing",
                            "Occurs during each statue lane as players progress toward the final platform.",
                            "Orbs spawning at the start of each lane and glowing indicators showing where they must be delivered.",
                            "Pass orbs between players to reach the end of the lane while handling enemies.",
                            "Dropping or losing orbs resets lane progress.",
                            "Players running ahead without passing; dropping orbs in unsafe areas; poor coordination."
                        },
                        {
                            "Split Lanes",
                            "Active throughout the encounter as players divide into three lanes.",
                            "Three distinct paths with unique enemies and mechanics.",
                            "Assign balanced groups to each lane and complete lane-specific objectives simultaneously.",
                            "If one lane fails, the entire encounter resets.",
                            "Unbalanced lane assignments; ignoring lane mechanics; lack of communication."
                        },
                    },
                    {
                        { "Enforcer Adds", "Enforcers spawn and must be killed quickly to avoid wipes." },
                    }
                },
                {
                    "Dhuum",
                    {
                        {
                            "Reapers",
                            "Active throughout the fight as each Reaper performs their ritual.",
                            "Reapers channeling in fixed positions around the arena.",
                            "Protect Reapers from adds and ensure they complete their ritual to progress the fight.",
                            "If a Reaper dies, the encounter fails.",
                            "Players leaving Reapers unprotected; ignoring add spawns; poor lane assignments."
                        },
                        {
                            "Shackles",
                            "Applied periodically to pairs of players starting at 60% health.",
                            "A glowing tether linking two players together.",
                            "Move apart slowly until the tether breaks without dragging through dangerous areas.",
                            "If players move too far too fast, they take heavy damage or die.",
                            "Players sprinting apart; dragging shackles through Reapers or the group."
                        },
                        {
                            "Death Mark",
                            "Occurs at regular intervals during the fight, every 30 seconds rotating between greater and lesser.",
                            "A large red AoE appears beneath a random player.",
                            "Move the AoE away from the group before it detonates.",
                            "Detonating Death Mark inside the group deals massive damage.",
                            "Players panicking and running through the stack; dropping marks near Reapers."
                        },
                        {
                            "Messengers",
                            "Spawn periodically and move toward Dhuum.",
                            "Ghostly adds floating toward the boss.",
                            "Kill Messengers before they reach Dhuum to prevent him from gaining strength.",
                            "If Messengers reach Dhuum, he gains stacks that increase raid damage.",
                            "Players ignoring Messenger spawns; chasing them too far from the group."
                        },
                    },
                    {
                        { "Greater Death Mark", "A larger version of Death Mark that requires careful placement." },
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 6 – Mythwright Gambit
        // ════════════════════════════════════════════════════════════════════════
        {
            "Mythwright Gambit",
            "Wing 6 – Mythwright Gambit",
            {
                {
                    "Conjured Amalgamate",
                    {
                        {
                            "Arm Breaks",
                            "Occurs during each damage phase when the boss exposes its arms.",
                            "The Amalgamate raises its arms and glowing weak points appear on each one.",
                            "Split into left and right groups, break both arms quickly to expose the core.",
                            "If arms are not broken in time, the phase ends early and the fight drags on.",
                            "Groups unevenly split; players attacking the wrong arm; ignoring add pressure."
                        },
                        {
                            "Conjured Shields",
                            "Spawn during the arm phases and before core exposure.",
                            "Floating shields appear around the arena with glowing protective barriers.",
                            "Break the shields quickly to prevent them from blocking damage to arms or the core.",
                            "Shields block critical damage windows, causing phase failures.",
                            "Players tunneling the boss; ignoring shield spawns; poor target prioritization."
                        },
                        {
                            "Orb Delivery",
                            "Occurs during each core phase after both arms are broken.",
                            "Orbs dropping from the sky and glowing collection points on the platform.",
                            "Pick up orbs and deliver them to the designated spots to weaken the boss.",
                            "Insufficient orb deliveries result in a shortened or failed burn phase.",
                            "Players dropping orbs; multiple players grabbing the same orb; inefficient routing."
                        },
                    },
                    {
                    }
                },
                {
                    "Twin Largos (Nikare & Kenut)",
                    {
                        {
                            "Bubble Pulls",
                            "Occurs throughout the fight, especially during high-pressure phases.",
                            "Large water bubbles forming around players and pulling them inward.",
                            "Dodge or move out of the bubble radius before being pulled in.",
                            "Being pulled into a bubble can immobilize players and lead to lethal follow-up damage.",
                            "Players dodging too late; stacking too tightly; ignoring bubble spawn points."
                        },
                        {
                            "Platform Drops",
                            "Happens during the final phase as the arena begins to collapse.",
                            "Platforms glowing red and shaking before falling away.",
                            "Move quickly to safe platforms while maintaining DPS on the active boss.",
                            "Falling results in instant death and reduces group DPS significantly.",
                            "Players waiting too long; misjudging jump distances; splitting from the group."
                        },
                        {
                            "Tidal Waves",
                            "Triggered by Kenut at regular intervals.",
                            "A massive wave forming behind Kenut and sweeping across the arena.",
                            "Dodge through the wave or move to a safe zone to avoid heavy damage.",
                            "Being hit by the wave deals massive damage and can knock players off platforms.",
                            "Players dodging too early; standing behind Kenut; ignoring wave direction."
                        },
                    },
                    {
                    }
                },
                {
                    "Qadim",
                    {
                        {
                            "Elemental Essences",
                            "Occurs during each pylon phase as players defeat elemental creatures.",
                            "Essences dropping from defeated elementals and glowing with their respective colors.",
                            "Collect essences and deliver them to pylons to empower them and progress the fight.",
                            "Insufficient essence delivery prolongs the phase and increases arena pressure.",
                            "Players forgetting to pick up essences; delivering to the wrong pylon; poor routing."
                        },
                        {
                            "Pylon Control",
                            "Active throughout the encounter during each pylon phase.",
                            "Pylons activating with beams connecting them to Qadim.",
                            "Assign players to each pylon to maintain control and prevent Qadim from gaining strength.",
                            "Losing control of pylons causes Qadim to gain stacks and deal more damage.",
                            "Players leaving pylons unattended; insufficient CC on pylon adds; poor communication."
                        },
                        {
                            "Wyvern and Hydra Adds",
                            "Spawn during each pylon phase and during transitions.",
                            "Large wyverns and hydras entering the arena with distinct animations.",
                            "Kill these adds quickly to reduce arena pressure and prevent lethal attacks.",
                            "Unmanaged adds overwhelm the group with AoEs and heavy damage.",
                            "Players tunneling Qadim; ignoring add mechanics; poor positioning."
                        },
                    },
                    {
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 7 – The Key of Ahdashim
        // ════════════════════════════════════════════════════════════════════════
        {
            "The Key of Ahdashim",
            "Wing 7 – The Key of Ahdashim",
            {
                {
                    "Cardinal Adina",
                    {
                        {
                            "Pillar Breaks",
                            "Occurs during each damage cycle when Adina becomes invulnerable.",
                            "Adina retreats to the center and protective pillars rise around the arena.",
                            "Break the correct pillars in the assigned order to expose Adina again.",
                            "Breaking the wrong pillar or failing to break pillars in time causes arena-wide damage and resets the phase.",
                            "Players attacking the wrong pillar; poor split assignments; ignoring add pressure during breaks."
                        },
                        {
                            "Sand Walls",
                            "Triggered during each major attack cycle and during transitions.",
                            "Large walls of sand rising from the ground and sweeping across the arena.",
                            "Move to safe zones or rotate around the arena to avoid being trapped or damaged.",
                            "Being hit by sand walls deals heavy damage and can trap players in lethal zones.",
                            "Players rotating too slowly; running into walls; splitting from the group."
                        },
                        {
                            "Hand Crush",
                            "Occurs periodically throughout the fight.",
                            "Giant stone hands emerging from the ground beneath players.",
                            "Move out of the telegraphed zones immediately to avoid being grabbed.",
                            "Being hit results in massive damage and immobilization.",
                            "Players standing still too long; dodging into another hand zone."
                        },
                    },
                    {
                    }
                },
                {
                    "Cardinal Sabir",
                    {
                        {
                            "Electric Storm",
                            "Occurs at fixed intervals throughout the fight.",
                            "Sabir channels energy and a large storm aura forms around him.",
                            "Stack tightly inside the safe zone and use defensive cooldowns to survive the blast.",
                            "Being outside the stack zone results in instant death.",
                            "Players standing too far away; dodging out of the stack; late stacking."
                        },
                        {
                            "Tornado Pushes",
                            "Active throughout the fight, especially during storm phases.",
                            "Tornadoes forming around the arena and drifting toward players.",
                            "Avoid tornado paths and reposition quickly if pushed.",
                            "Being pushed into storms or off the platform results in death.",
                            "Players standing near tornado spawn points; ignoring tornado movement patterns."
                        },
                        {
                            "Jade Explosions",
                            "Triggered during add phases and storm transitions.",
                            "Jade orbs glowing brightly before detonating.",
                            "Move away from or destroy jade orbs before they explode.",
                            "Explosions deal heavy AoE damage and can chain into lethal hits.",
                            "Players ignoring orb timers; stacking too close to multiple orbs."
                        },
                    },
                    {
                    }
                },
                {
                    "Qadim the Peerless",
                    {
                        {
                            "Pylon Attunement",
                            "Occurs during each pylon phase as players attune to beams.",
                            "Beams connecting pylons to Qadim and attunement icons appearing on players.",
                            "Stand in the correct beam to maintain attunement and control pylon energy flow.",
                            "Losing attunement causes beams to destabilize and increases arena pressure.",
                            "Players standing in the wrong beam; leaving beams unattended; poor rotation timing."
                        },
                        {
                            "Anomalies",
                            "Spawn during each pylon phase and during transitions.",
                            "Small glowing anomalies drifting toward pylons or Qadim.",
                            "Kill anomalies quickly before they reach their targets.",
                            "Anomalies empower Qadim or destabilize pylons, causing massive damage.",
                            "Players tunneling the boss; ignoring anomaly spawns; poor add focus."
                        },
                        {
                            "Unstable Magic",
                            "Occurs throughout the fight, especially during burn phases.",
                            "Magic eruptions forming on the ground with bright telegraphs.",
                            "Move out of marked zones immediately to avoid heavy damage.",
                            "Standing in eruptions deals lethal damage and can chain into group wipes.",
                            "Players stacking too tightly; dodging into other eruptions; ignoring telegraphs."
                        },
                        {
                            "Tail Swipes",
                            "Triggered when players stand behind Qadim for too long.",
                            "Qadim shifting his weight and sweeping his tail behind him.",
                            "Avoid standing directly behind Qadim; reposition to his sides.",
                            "Tail swipes deal heavy damage and knock players away.",
                            "Players tunneling DPS behind the boss; ignoring tail animations."
                        },
                    },
                    {
                    }
                },
            }
        },
        // ════════════════════════════════════════════════════════════════════════
        // Wing 8 – Mount Balrior
        // ════════════════════════════════════════════════════════════════════════
        {
            "Mount Balrior",
            "Wing 8 – Mount Balrior",
            {
                {
                    "Decima",
                    {
                        {
                            "Coming Soon...",
                            "",
                            "",
                            "",
                            "",
                            ""
                        },
                    },
                    {
                        { "Coming Soon...", "" },
                    }
                },
                {
                    "Greer",
                    {
                        {
                            "Coming Soon...",
                            "",
                            "",
                            "",
                            "",
                            ""
                        },
                    },
                    {
                        { "Coming Soon...", "" },
                    }
                },
                {
                    "Ura",
                    {
                        {
                            "Coming Soon...",
                            "",
                            "",
                            "",
                            "",
                            ""
                        },
                    },
                    {
                        { "Coming Soon...", "" },
                    }
                },
            }
        },
    };
}
