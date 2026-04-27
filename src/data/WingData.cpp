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
                            "Damage the final CC bar slowly, Defeat Gorseval before the end of the cast or perish.",
                            "Instant raid wipe if players do not destroy the boss before the cast is complete.",
                            "Breaking the final CC bar too early whilst also having inadequate DPS. Either one or the other will save the group, but a lack of self control and a lack of ability combined lead to certain demise."
                        },
                        {
                            "Eggs / Circles",
                            "Starting at 33% of his health bar remaining.",
                            "Circles spawn under players feet.",
                            "Move off of the circle.",
                            "Get trapped in a prison bubble until broken out, leading to a reduction of damage being delt at a vital time to deal damage.",
                            "Not moving out of the mechanic."
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
                    "Escort (McLeod the Silent)",
                    {
                        {
                            "Surveilled (Glenna Stacks)",
                            "Active from the start; stacks deplete whenever no player remains within 1,000 range of Glenna.",
                            "A stack counter visible on Glenna counting down toward zero.",
                            "Keep at least one player (typically the Druid) within 1,000 range of Glenna at all times. Use the special action key while near Glenna to call her toward you and guide her onto Ley Lines for safe passage.",
                            "Glenna's stacks reach 0 and she dies, instantly failing the encounter.",
                            "Entire squad rushing ahead to clear enemies and leaving Glenna unattended; forgetting to use the special action key to redirect Glenna onto white Ley Line circles."
                        },
                        {
                            "Warg Fixates",
                            "After all four towers along the route are captured, two Wargs spawn—one at the front and one at the rear of the group.",
                            "Large wolf enemies sprinting directly toward Glenna with high movement speed.",
                            "Immediately apply crowd control (immobilize, chill, cripple, float, or blind) to both Wargs. Assign one player to handle the rear Warg so it does not reach Glenna from behind. Burn them down as quickly as possible.",
                            "Wargs reach Glenna and deal massive damage, killing her and failing the event.",
                            "Ignoring the rear Warg; not saving crowd control abilities for after tower capture; trying to kill Wargs with no slows applied."
                        },
                        {
                            "Mines",
                            "Present along the escort route; red one-shot circles surround non-targetable mines.",
                            "A small mine object inside a large red circle (instant death) bordered by a thinner white circle (activation ring).",
                            "Skim the outer edge of the white activation ring to make the mine targetable, then destroy it with ranged attacks before it resets. Never step into the red circle. Mines respawn, so check behind you after clearing them.",
                            "Stepping into the red circle kills the player or Glenna instantly.",
                            "Walking straight through the red circle; forgetting that mines respawn and getting hit on the return path."
                        },
                        {
                            "McLeod the Silent – Split Phase",
                            "Triggered at 75%, 50%, and 25% of McLeod’s health.",
                            "McLeod splits into two copies; each copy displays a red or white marker above it; players also receive matching red or white markers.",
                            "Check your marker color. Deal damage only to the copy whose marker matches yours. Stay stacked between both copies so McLeod does not teleport to a distant player. A Warg also spawns during splits—cleave it down.",
                            "Damaging the wrong copy is wasted DPS and prolongs the encounter. McLeod teleports to the furthest player (up to 5,000 range) if the group spreads out, making positioning chaotic.",
                            "Hitting the wrong-colored copy; spreading out and causing McLeod to teleport away from the stack; ignoring the Warg that spawns during splits."
                        },
                        {
                            "Tower Captures",
                            "Four towers must be captured sequentially along the escort route.",
                            "A capture circle on each tower platform; enemies inside the circle contest the capture.",
                            "Enter the capture circle with more players than enemies. Clear enemies inside the circle, push them out, or use Mass Invisibility to bypass the contest entirely. Do not let Glenna fall out of range while the squad is at a tower.",
                            "Uncontested enemies inside the circle prevent capture, stalling the event.",
                            "Splitting the group unevenly across towers; leaving enemies alive inside the circle; letting Glenna’s stacks drain while the squad is distracted at a tower."
                        },
                    },
                    {
                        { "Tunnel of Respite (Cave)", "The cave contains Toxic Spores that deal damage. Players with the Forsaken Thicket Waters mastery can use healing water pools to cleanse stacks. Run between pools and avoid mushroom mobs that knock players around." },
                        { "Final Ley Line Call", "After McLeod is defeated, use the special action key to call Glenna to the final white Ley Line circle at the door. She will plant a bomb to open the gate and complete the encounter." },
                    }
                },
                {
                    "Keep Construct",
                    {
                        {
                            "Projections and Fixates",
                            "Triggered at the start of each burn-phase cycle. Two arena statues light up, one on each half of the arena.",
                            "Two statues glowing; two Projections spawning and immediately fixating on two random players.",
                            "Fixated players lure their Projection on top of Keep Construct so it is cleaved down near the boss. Do NOT let the two Projections touch each other—they will merge. The close-fixate player stands opposite their Projection’s spawn statue. Both Projections must die near the boss to remove two stacks of the boss’s vulnerability debuff and trigger the defiance bar.",
                            "If the Projections merge they become an Insidious Projection with more health and a frontal smash that strips boons. Killing the merged Projection away from the boss does not remove the debuff stacks, effectively wasting the phase.",
                            "Fixated players panicking and running to the squad instead of luring onto the boss; letting both Projections converge and merge; killing a Projection far from the boss hitbox."
                        },
                        {
                            "Exposed Core Phase (Green Circles)",
                            "Triggered when the boss’s defiance bar is broken after both Projections are dead near the boss.",
                            "Three large green circles appearing simultaneously on the arena floor.",
                            "Each green circle must have at least two players standing inside it before it detonates. Assign supports to hold two of the circles; all DPS stack on the third. If a support has been fixated, a DPS must swap to cover their circle immediately.",
                            "Any circle that detonates with fewer than two players inside causes an instant squad wipe.",
                            "Supports getting fixated without a DPS covering their circle; players not noticing which circles are unfilled and failing to reposition in time."
                        },
                        {
                            "Core Push (Ley Rifts)",
                            "Follows immediately after the Exposed Core Phase. A pink Construct Core appears in the arena center surrounded by a pink border containing five Ley Rifts along the edges.",
                            "A glowing pink orb in the center; five Ley Rift portals around the arena perimeter.",
                            "Use crowd control pushes, pulls, and launches to move the Construct Core through as many Ley Rifts as possible. Each Rift the Core passes through adds 75% bonus incoming damage to Keep Construct in the next burn phase. Aiming for five Rifts is safest; three is viable with high DPS. Disable pet auto-attacks to avoid accidentally pushing the Core off course.",
                            "Passing through zero Rifts means the next burn phase has no damage bonus, severely extending the fight. Missing the 66%/33% phase thresholds forces an additional repetition of the entire cycle.",
                            "Players randomly hitting the Core from inconsistent angles; pet auto-attacks nudging the Core into walls; not assigning a dedicated pusher."
                        },
                        {
                            "Xera’s Fury (Spread)",
                            "Occurs randomly between burst phases while Projections are active.",
                            "Light orange AoE circles appearing under every player’s feet simultaneously.",
                            "Spread out immediately. Each circle deals 20% of maximum health to any player standing inside another player’s circle. Fixated players and the tank must hold their positions on the boss; all other players spread to empty space.",
                            "Players stacking causes rapid coordinated damage that can down multiple players at once.",
                            "Fixated players abandoning their Projection positions to spread; DPS stacking on the tank and taking shared damage."
                        },
                        {
                            "Attuned Phantasms (Matching Markers)",
                            "Occurs randomly between burst phases. A large number of Phantasms spawn throughout the arena.",
                            "Many Phantasms appearing with red or white markers above them; all players simultaneously receive matching red or white markers.",
                            "Each player can only damage Phantasms that match their marker color. Focus fire on Phantasms of your color and burn them down quickly.",
                            "If any Phantasms are still alive when the timer expires, Keep Construct performs a massive attack that typically wipes the entire squad.",
                            "Players attacking the wrong-colored Phantasms and wasting DPS; not coordinating to ensure each color is covered evenly."
                        },
                        {
                            "Magic Blast (66% and 33%)",
                            "Triggered when the boss reaches 66% and 33% HP. Keep Construct becomes invulnerable and channels a massive explosion.",
                            "Red and white energy balls moving toward the boss; all players receive matching red or white markers.",
                            "Block or intercept balls that match your marker color before they reach the boss. Spread by marker color to avoid blocking the wrong balls. Do not cross to help teammates—trust your group.",
                            "Each ball that reaches the boss grants one stack of Magic Blast Intensity, increasing its damage. Fifteen or more stacks becomes dangerous; twenty or more typically wipes the squad.",
                            "Players crossing to intercept the other color’s balls and missing their own; low-health players not staying near supports to survive the chip damage from interceptions."
                        },
                    },
                    {
                        { "Phantasmal Blades", "A glowing pink pool forms under the boss and cone attacks radiate outward. Sidestep the cones and avoid standing in the pool, which applies heavy damage and conditions. The number of cones increases as the encounter progresses." },
                        { "Hail of Fury", "Below 33% HP the boss floats skyward and drops rubble across the arena. Projections killed at the correct location still remove debuff stacks during this phase. Continue the normal cycle." },
                        { "Enrage Timer", "10 minutes. After enrage Keep Construct deals 200% increased damage." },
                    }
                },
                {
                    "Twisted Castle",
                    {
                        {
                            "Madness Stacks",
                            "Active from the moment players enter the castle. Stacks accumulate continuously.",
                            "A stacking debuff counter on your buff bar. Stacks build at 1 per 3 seconds normally, or 2 per 3 seconds when facing toward the center of the castle.",
                            "Keep moving and avoid looking toward the center. Use nearby Fountains to cleanse 10 stacks at a time by interacting with them. Manage stacks actively throughout navigation.",
                            "At 99 stacks players are instantly killed with no exception. Every 10 stacks triggers a debilitating effect that compounds the difficulty.",
                            "Ignoring Fountains and letting stacks climb; standing still in the center-facing direction; not cleansing before attempting difficult jumps."
                        },
                        {
                            "Button Activation",
                            "Throughout the traversal encounter. Five of seven available buttons must be activated to open the path to the bell.",
                            "Interactive buttons/levers on platforms throughout the castle. The bell rings when five buttons are activated, signaling completion.",
                            "Navigate through the castle using designated routes, activate five buttons, and reach the bell. Assign players to different button paths to cover the required five quickly. Use mobility skills (e.g., Druid’s Ancestral Grace) to reach the skip button and save time.",
                            "Failing to activate five buttons means the bell never rings and the encounter does not complete.",
                            "Multiple players taking the same path and leaving other buttons unactivated; running out of time due to Madness stack management; falling from platforms (no gliding allowed)."
                        },
                        {
                            "Haunting Statues",
                            "Positioned at specific points along the traversal route, particularly near Button 5.",
                            "Stone statue enemies that begin moving toward players who are not staring directly at them.",
                            "Maintain eye contact with the statue (face toward it) to freeze it in place. Players can knock down, pull, or push statues but cannot damage them. Walk past them while a teammate holds eye contact. If a statue reaches you, it teleports you back to the start of the route.",
                            "Being touched by a Haunting Statue sends the player back to the route’s beginning, wasting significant time and allowing Madness stacks to accumulate.",
                            "All players turning away from the statue simultaneously; trying to damage statues instead of using mechanics to bypass them."
                        },
                    },
                    {
                        { "White Mantle Enemies", "Enemies scattered throughout the castle use knockbacks and knockdowns that can send players off platforms to their deaths. Clear or avoid them carefully, as falls from height are typically fatal without the ability to glide." },
                        { "Archway Drop Skip", "From the u-shaped platform, players can dodge off the inner corner to land on a lower archway without taking lethal fall damage, but only at full health. This shortcut saves significant time on the traversal route." },
                    }
                },
                {
                    "Xera",
                    {
                        {
                            "Forsaken Magic Stacks",
                            "Applied continuously by multiple mechanics throughout both phases of the encounter.",
                            "A stacking debuff on your buff bar. Effects trigger at 90 stacks (5-second Fear) and 99 stacks (instant death).",
                            "Avoid standing in Bloodstone Fragment AoEs and Gravity Wells. Players with the Forsaken Thicket Waters mastery can destroy Bloodstone Shards during the intermission phase to cleanse stacks. Standing inside a successful Spatial Manipulation green circle during Phase 2 also removes stacks.",
                            "Reaching 99 stacks kills the player instantly. Reaching 90 stacks triggers a 5-second Fear that prevents all actions.",
                            "Standing in Bloodstone Fragment AoEs to deal damage; getting caught in Gravity Well; not cleansing during the intermission glide phase."
                        },
                        {
                            "Bloodstone Fragments",
                            "Spawn every 10 seconds in one of 12 arena segments throughout the fight.",
                            "Orange AoE circles appearing in an arena segment around a glowing fragment.",
                            "DPS players must destroy each Fragment in their designated arena segment. Do NOT stand under the Fragment as it emits damage outward. If Xera passes through a Fragment’s AoE she deals double damage and converts conditions into boons.",
                            "Uncleared Fragments stack Forsaken Magic on all players who walk through their AoE. Xera inside a Fragment AoE gains a massive offensive buff and condition immunity.",
                            "Standing directly under the Fragment to DPS it and taking unnecessary damage; allowing multiple Fragments to persist simultaneously and flooding the arena with AoEs."
                        },
                        {
                            "Defiance Bar",
                            "Appears at 90% HP and recurs on a 60-second cooldown.",
                            "A yellow break bar above Xera’s health bar.",
                            "Break the bar as quickly as possible using crowd control abilities. While the bar is active Xera takes 80% reduced incoming damage and Bloodstone Fragments spawn at double speed.",
                            "Leaving the bar unbroken slashes your effective DPS to 20% and floods the arena with Fragments much faster than normal.",
                            "Saving CC for other purposes; forgetting to switch targets to break the bar; not coordinating CC cooldowns."
                        },
                        {
                            "Gravity Well",
                            "Spawns at 30-second intervals in Phase 1 and 25-second intervals in Phase 2. Not present during the intermission Ambient Magic event.",
                            "A large pink AoE covering approximately half of the current platform.",
                            "Move immediately to the unaffected half of the platform. If caught inside, the Well floats you, applies heavy conditions, and inflicts 25 Forsaken Magic stacks.",
                            "Being inside the Gravity Well applies 25 Forsaken Magic stacks instantly and significant damage, putting players dangerously close to the 99-stack death threshold.",
                            "Not repositioning fast enough when the Well spawns; standing near the boundary and getting clipped by its edge."
                        },
                        {
                            "Ambient Magic (Intervention SAK)",
                            "Triggers at specific HP thresholds: 75% in Phase 1; 35%, 15%, and 10% in Phase 2.",
                            "A message announcing a player has been selected; Phantasms channeling an attack around the entire arena.",
                            "The randomly selected player must wait for the Phantasms to reach the back of the arena, then activate the Intervention special action key to create a protective barrier over the squad. Time the activation carefully—too early and the barrier expires before the attack lands; too late is also fatal. The skill can be used while downed.",
                            "If the barrier is not deployed the Phantasm attack instantly kills the entire squad. Using the skill too early causes the barrier to disappear before the attack, resulting in the same wipe.",
                            "The selected player activating the SAK the moment they receive it instead of waiting for the correct timing; panicking and using it while the Phantasms are still on the far side of the arena."
                        },
                    },
                    {
                        { "Intermission Phase (50% HP)", "At 50% the squad glides clockwise together along Ley Lines around the entire arena. Stay together, destroy Bloodstone Shards on each platform to cleanse Forsaken Magic stacks, and dodge exploding orange circles that spawn across the platforms. Moving too fast or too slow wraps damaging ribbons around the platforms." },
                        { "Phase 2 Teleport Minigames (40% and 20%)", "Five random non-tank players are teleported to Push or Button minigames in Phase 2. Push players must guide three Coalescences through Ley Rifts by pushing them clockwise and avoiding orange circles. Button players stand on three buttons simultaneously, rotating clockwise at 9-10 stacks of the button debuff. Returning players gain temporary immunity to most mechanics." },
                        { "Laser Beam", "Spawns 30 seconds after the first Bloodstone Fragment and repeats roughly every minute. A beam fires from the center with energy orbs radiating outward. Move the tank and squad away from the center in advance and dodge the expanding orbs." },
                        { "Blurred Frenzy", "Xera occasionally roots in place and performs a high-damage frontal cone attack. Stand behind or outside her hitbox. The tank should step away or use blocks and invulnerability to survive." },
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
                            "Spatial Manipulation (Greens)",
                            "Triggered throughout the fight; always preceded by either Energy Surge or Orbital Sweep.",
                            "Multiple green circles appearing across the arena, each displaying a number of golden orbs above it indicating how many players are required.",
                            "Every player must enter a green circle. Match the number of players in each circle to the golden orb count above it—no more, no fewer. Quickly count nearby circles and coordinate with the squad to fill each one correctly before detonation.",
                            "Any player not inside a valid green circle takes heavy damage and gains 25 Unseen Burden stacks and a 2-second Float. Successfully standing in a circle removes 25 Unseen Burden stacks.",
                            "Too many players piling into one circle and leaving another empty; panicking and moving out of a circle before detonation; ignoring the orb count and filling circles wrong."
                        },
                        {
                            "Shared Agony",
                            "First triggers at 7 minutes 37 seconds remaining, then every 20 seconds. Targets the furthest unafflicted player.",
                            "A red pulsing aura appearing on the targeted player. Up to three players can be simultaneously afflicted.",
                            "Afflicted players must immediately move away from the squad and maintain distance. The red aura deals heavy damage to up to three nearby players within its area of effect. Healers and supports typically volunteer for early casts to control placement. Non-afflicted players must not approach afflicted teammates.",
                            "Afflicted players standing in the squad cause the aura to deal significant damage to up to three nearby players, quickly overwhelming healer output.",
                            "Afflicted players drifting back toward the stack out of habit; non-afflicted players running toward an afflicted teammate; forgetting that up to three simultaneous afflictions can occur late in the fight."
                        },
                        {
                            "Displacement",
                            "Occurs at regular intervals throughout the fight.",
                            "Three red circles appearing around the arena. Affected players see their screen border glow yellow.",
                            "Step out of any red circle immediately. Use Celestial Dash to reposition if needed. If teleported, use Celestial Dash to quickly return to the squad before the next mechanic.",
                            "Players inside a circle when it detonates take damage and are teleported to a random arena location, potentially into the path of other mechanics.",
                            "Not noticing the yellow screen border warning; getting teleported and then being caught by Spatial Manipulation away from the squad."
                        },
                        {
                            "Celestial Dash (Special Action Key)",
                            "Available from the start of the encounter; central to surviving Displacement and Unseen Burden accumulation.",
                            "The special action key icon on your UI. Unseen Burden stacks reducing movement speed (1% per stack).",
                            "Use Celestial Dash as a ground-targeted movement skill to reposition after Displacement teleports, to dodge Energy Surge or Orbital Sweep knockbacks, and to reach Spatial Manipulation circles. It functions as an evasion. Use it proactively to maintain stack with the squad.",
                            "Not using Celestial Dash when slowed by Unseen Burden stacks leaves players isolated and unable to reach green circles in time.",
                            "Hoarding Celestial Dash instead of using it to keep up with the group; using it into dangerous zones instead of toward the squad."
                        },
                        {
                            "Unseen Burden",
                            "Stacks are applied by Meteor Swarm (standing outside the compass pattern) and by failing Spatial Manipulation.",
                            "The compass pattern on the arena floor (requires Shaders set to Medium or higher). Stacks accumulating on your debuff bar, each reducing movement speed by 1%.",
                            "Stay as close to Cairn as possible to remain within the compass safe zone and avoid Meteor Swarm stacks. Do NOT use reflect skills—reflected shards will hit other players. Rely on Celestial Dash to compensate for speed loss.",
                            "At 99 stacks of Unseen Burden players cannot move. In normal mode this is effectively fatal; in Challenge Mode players are fully petrified and locked out of all skills except Celestial Dash.",
                            "Using reflection skills that hit other players with reflected shards; standing outside the compass and accumulating stacks unnecessarily; not setting Shaders to Medium to see the compass pattern."
                        },
                    },
                    {
                        { "Energy Surge", "Cairn teleports around the arena leaving green circles behind (always followed by Spatial Manipulation). An arrow at Cairn's feet indicates the direction. Sidestep or dodge the knockback path." },
                        { "Orbital Sweep", "Later in the fight Cairn extends one arm and sweeps counterclockwise. Position on the clockwise side of the arm and time a dodge or Celestial Dash to avoid the knockback. Always followed by Spatial Manipulation." },
                        { "Gravity Wave", "Active below 25% HP. Three large energy waves radiate outward after Orbital Sweep. Players stacked close to Cairn are in the safe zone and unaffected." },
                    }
                },
                {
                    "Mursaat Overseer",
                    {
                        {
                            "Claim / Protect / Dispel (SAK System)",
                            "Active from the start of the encounter. Three specific players are assigned each SAK role at the beginning of the pull.",
                            "The three special action key icons assigned to three different players. Orange tiles covering roughly half the board at fight start. Green tiles charging with a 5-second warning before spiking.",
                            "Claim player: use the ground-targeted Claim skill on orange (boss-claimed) tiles to flip them safe, keeping the central four squares clear. Protect player: kite Jade Soldiers (which fixate on you) away from the squad; use the Protect dome to block their explosion on death and to save the squad from Spike charges if needed. Dispel player: use the single-target Dispel skill to remove the orange shield from shielded Jade Scouts and Soldiers before the squad damages them.",
                            "Without Claim the squad has no safe tiles to stand on and takes continuous heavy damage. Without Dispel, shielded Scouts/Soldiers regenerate health whenever damaged. Without Protect, Jade Soldiers explode on the squad and the Protect player cannot kite them.",
                            "Claim player letting orange tiles encroach on the central four safe squares; Dispel player removing shields from Scouts while Soldiers are also shielded; Protect player kiting Soldiers through the squad."
                        },
                        {
                            "Mosaic Tiles (Green Spike Tiles)",
                            "Cycles on a 10-second loop; first spike pattern appears 5 seconds into the encounter.",
                            "Tiles turning green with a 5-second charge period. Spikes erupt from green tiles at full charge.",
                            "Move off any tile that turns green before the 5-second charge expires. The Protect dome can mitigate the spike damage if a player cannot move in time.",
                            "Standing on a green tile when it detonates causes instant death. The Protect dome is the only way to survive without moving.",
                            "Assuming green tiles are safe zones—they are not, they are the danger; staying on a tile while tunneling DPS on the boss; not noticing the charge timer."
                        },
                        {
                            "Jade Scouts and Jade Soldiers",
                            "Four Jade Scouts spawn at fight start and slowly advance across the board. If any Scout reaches the opposite edge it upgrades into a Jade Soldier.",
                            "Jade Scouts flipping safe tiles as they walk. Jade Soldiers fixating on the Protect player, gaining a damage-applying aura, and empowering the boss.",
                            "Dispel shields from Scouts immediately—damaged Scouts without Dispel go invulnerable and regenerate. Kill Scouts before they reach the far edge. If Soldiers spawn the Protect player kites them; Dispel removes their shields; kill Soldiers when their shields are down. Avoid standing near Soldiers when they die as they explode.",
                            "Active Soldiers empower the boss, increasing aura damage and orange-tile damage. Multiple Soldiers simultaneously makes positioning extremely difficult.",
                            "Damaging shielded Scouts or Soldiers and triggering their invulnerability; letting Scouts reach the far edge because of distraction with boss DPS; Protect player not leading Soldiers away from the squad before they die."
                        },
                    },
                    {
                        { "Orange Tiles (Boss-Claimed)", "Tiles claimed by the boss deal heavy continuous ticking damage to any player standing on them. Use the Claim SAK to flip orange tiles safe. The Claim skill is disabled after the 6-minute enrage timer." },
                        { "Enrage", "6-minute enrage timer. After enrage the Claim SAK is disabled, making the ever-expanding orange tile coverage fatal. The encounter must be completed before enrage." },
                    }
                },
                {
                    "Samarog",
                    {
                        {
                            "Brutal Aura",
                            "Passive; active for the entire encounter from the moment the fight starts.",
                            "Continuous damage ticks to all players approximately every 3 seconds.",
                            "Maintain constant healing support. There is no way to avoid this damage—it must be healed through. Ensure healers have enough healing output to sustain the squad on top of all other mechanics.",
                            "Without consistent healing the passive damage will gradually down the squad even without any other mechanic being failed.",
                            "Underestimating the healing requirement for this fight; taking a healing setup that is tuned for mechanics only and forgetting about the baseline passive damage."
                        },
                        {
                            "Brutalize",
                            "Triggers at every 10% HP threshold throughout the fight.",
                            "Samarog leaping onto the current tank; the boss becoming immune to damage and gaining a defiance bar; the tank taking continuous heavy damage.",
                            "Immediately break the defiance bar using crowd control abilities. The healer should spam heals on the tank to extend the time before the tank dies. All CC must be coordinated and deployed instantly—do not hold CC for other purposes.",
                            "If the CC bar is not broken, the tank dies. Extended Brutalize also prevents any damage to the boss.",
                            "Players saving CC for Prisoner Sweep instead of prioritizing the Brutalize bar; healer not immediately focusing the tank; slow CC response due to players not watching HP thresholds."
                        },
                        {
                            "Inevitable Betrayal",
                            "Every 25 seconds in Phase 2. Identified by the chat message 'Choose your allies wisely…'",
                            "One player receiving a large orange circle and another player receiving a small green circle.",
                            "The player with the large orange circle must leave the squad and stop moving. The player with the small green circle must immediately stack on top of the orange-circle player. Both players absorb the damage together. All other players remain in the stack.",
                            "The orange-circle player takes lethal damage if they remain isolated without the green-circle player stacking on them. Both players taking the hit together distributes the damage to survivable levels.",
                            "The green-circle player not noticing their marker and failing to stack on their partner; the orange-circle player continuing to move and making the green-circle player chase them; the squad not recognizing the mechanic and everyone spreading."
                        },
                        {
                            "Prisoner Sweep and Perimeter Spears",
                            "Part of Samarog's regular attack pattern throughout all phases.",
                            "Samarog swinging both spears in two consecutive arcing knockback attacks; the ring of permanently placed spears around the outer edge of the arena.",
                            "Stand behind Samarog inside his hitbox or block and dodge both swings. Use knockback-prevention skills such as Stand Your Ground or Inspiring Reinforcement. Never let a knockback push you toward the arena perimeter—spears at the edge deal instant death on contact.",
                            "Being knocked into the perimeter spears is instant death with no recovery.",
                            "Standing at the outer edge of the arena during any knockback attack; dodging backward (toward the perimeter) instead of sideways; not using stability or knockback prevention."
                        },
                        {
                            "Guldhem and Rigom (Split Phases)",
                            "At 66% and 33% HP Samarog leaves the arena and two adds spawn: Guldhem (large) and Rigom (small).",
                            "Guldhem applying a damage-sharing shield to himself every 33% of his HP. Rigom needing to be positioned under Samarog's original location. Guldhem targeting the furthest player with a stunning AoE every 20 seconds.",
                            "Use pushes, immobilizes, and displacement abilities to move Rigom under Samarog. When Guldhem gains his shield, damage to Guldhem transfers to Rigom—let Rigom's explosion detonate near Guldhem to strip the shield. Kill Guldhem after his shield is removed. Dodge or heal through Guldhem's distant-target stun. Do not stand near Rigom when he explodes.",
                            "If Rigom's explosion does not hit Guldhem, Guldhem's shield never breaks and he cannot be killed. Adds remaining alive for too long deal increasing pressure on the squad.",
                            "Killing Rigom before he can position under Guldhem; failing to push Rigom close enough with movement abilities; the squad standing near Rigom during the explosion and taking heavy damage."
                        },
                    },
                    {
                        { "Shockwave", "Samarog rears up and slams his spears, sending a ground shockwave outward. Jump or dodge the wave. The tank can step into the boss hitbox and dodge backward. Being knocked by the Shockwave into perimeter spears is instant death." },
                        { "Spear Impact", "Every 20 seconds a red circle charges and a spear lands dealing heavy damage with a persistent condition AoE. Stay out of the impact zone. Spears can be destroyed or cleared when breaking defiance bars. Cleave them while hitting the boss when possible." },
                        { "Fixation System", "Initial fixation goes to the closest player. Subsequent fixations go to the furthest player. A new fixate target is chosen after each defiance bar break, each split phase, or if the current target dies. Tank should hold Samarog in the arena center while the squad stacks behind." },
                    }
                },
                {
                    "Deimos",
                    {
                        {
                            "Mind Crush",
                            "Occurs approximately every 40 seconds.",
                            "Deimos channels with his flails; Saul shouts 'Stand in the ward! Quickly!'; a protective dome appears around Saul.",
                            "Move into Saul's protective dome immediately. Players inside the dome are protected. Players outside take 70% of maximum HP as damage over 10 seconds and can be instantly downed. Personal blocks and death-prevention skills (e.g., Rebound!) are valid alternatives if caught outside.",
                            "Any player outside Saul's dome takes lethal damage. Ghost explosions that occur simultaneously strip Protection from players and can combine lethally with Mind Crush.",
                            "Stacking to share damage instead of standing in Saul's dome—this is wrong; the dome is the correct action. Running away from the dome out of panic. Being in the wrong position when the cast starts."
                        },
                        {
                            "Rapid Decay (Black Oil)",
                            "Starts at 60% HP. Spawns every 15 seconds under the closest non-tank player to the boss.",
                            "A bright orange circle appearing on a non-tank player's position.",
                            "Move away from the group immediately when you see the orange indicator. Place oil toward the arena edge, not in the center (the center is needed for Saul's dome). Leave the oil placement spot quickly—each step taken inside expanding oil makes it larger. The tank should not hold the boss in the center of the arena to keep oil away from the dome.",
                            "Oil expands with every step taken through it. Fully expanded oil in the center of the arena blocks access to Saul's dome and is frequently responsible for squad wipes.",
                            "Dropping oil in the center of the arena near Saul's dome; running through existing oil to place new oil; the tank holding the boss at the center and forcing oil into the dome area."
                        },
                        {
                            "Hand Kiting",
                            "Every 10 seconds from fight start. Hands spawn at the furthest player from Deimos.",
                            "Five shadowy hands appearing at 1-second intervals at the location of the furthest player.",
                            "Designate one player as the Hand Kiter. That player must stay at maximum distance from Deimos at all times. Keep approximately five hands stacked in one area away from the squad. At each 25% HP threshold all existing hands are pulled to Deimos—each hand that reaches him grants +2% damage to the boss, so minimize accumulated hands before threshold transitions.",
                            "Hands reaching the squad cause massive damage. Hands reaching Deimos during threshold transitions grant permanent damage stacks.",
                            "The kiter running through the squad and depositing hands on the group; allowing more than five hands to accumulate before a threshold transition; the kiter not being the furthest player at all times."
                        },
                        {
                            "Annihilate (Pizza)",
                            "Approximately every 20 seconds.",
                            "A large orange AoE split into segments fanning out in front of Deimos.",
                            "Dodge toward Deimos's front center or step into the gap between two segments. Blocks and invulnerability skills also work. Avoid standing between two segment boundaries—hits there count as two separate hits. The attack cascades from front to back.",
                            "Being hit by Annihilate deals heavy damage. Being struck between segments takes double damage.",
                            "Dodging backward away from Deimos (into the full cascade); misjudging the segment boundaries; not using blocks or invuln when caught in the AoE."
                        },
                        {
                            "Saul Clone Phases (Green Portals)",
                            "Green portal phases trigger at 75% (Thief Saul), 50% (Gambler Saul), and 25% (Drunkard Saul). A random non-tank player is targeted with a green circle at each threshold.",
                            "A green circle appearing on a random non-tank player at each threshold. Different clone behaviors in the Demonic Realm.",
                            "Thief Saul (75%): Enter the green portal, fight the clone to 50% HP, then return. If his defiance bar is not broken the Thief steals all group boons. Gambler Saul (50%): Enter the portal, identify the real Saul by his White Mantle Staff among four copies, stand outside all four to avoid damage, then kill him quickly. Drunkard Saul (25%): Enter the portal, break his defiance bar quickly, kill him fast. An unbroken bar triggers random player teleports on the main platform, potentially into Oils.",
                            "Thief Saul unbroken: squad loses all boons. Gambler Saul: standing inside the four copies deals lethal damage. Drunkard Saul: unbroken bars cause chaos on the main platform. If Saul dies on the main platform, the encounter fails.",
                            "Identifying the wrong Gambler clone and attacking it; not breaking Drunkard's bar before delayed teleports catch the main-platform players in Oil; the same player always entering portals and leaving the main platform undefended."
                        },
                        {
                            "Demonic Tears",
                            "Spawn at 75% HP and continue spawning every 15 seconds after that.",
                            "Tear portals appearing around the platform perimeter.",
                            "Walk over tears to close them. Each player has a 60-second cooldown before they can close another tear. Assign multiple players to patrol tears so no single player is overwhelmed. Tears are not dangerous to walk through.",
                            "Open Demonic Tears spam unblockable projectiles at the squad, applying significant pressure on top of all other mechanics.",
                            "Ignoring tears after 75% because the squad is focused on Oil and clones; one player burning their cooldown early and being unable to close subsequent tears."
                        },
                        {
                            "10% Demonic Realm Phase",
                            "Triggered when Deimos reaches 10% HP. He becomes invulnerable and all players are teleported to the Demonic Realm.",
                            "Deimos reaching 10%; the entire squad being teleported simultaneously.",
                            "In the Demonic Realm: dodge right for the first attack, dodge left for the second, then dodge when Deimos slams both hands for the third. Hands and Oils continue to spawn—the hand kiter resumes far positioning and one player can bait Oils to the side. Maintain all normal mechanics until Deimos is defeated.",
                            "Deimos pushes players off the platform in the Demonic Realm if they fail to dodge correctly. Oils and Hands in the Demonic Realm can kill players the same as in the main phase.",
                            "Forgetting the dodge directions for the first three attacks; the hand kiter not resuming far position immediately on arrival; dropping Oil in the center of the Demonic Realm platform."
                        },
                    },
                    {
                        { "Ghosts (Greeds and Prides)", "Spawn at fight start and again at 40% HP. Small ghosts (Greeds) and large ghosts (Prides) advance toward Saul. Kill all ghosts before they reach Saul. Use immobilizes and cripples on large Prides. If Saul is killed by ghost detonations the encounter fails." },
                        { "Chain Breaking (Demonic Realm Portals)", "A random player is targeted with a green circle. Enter the circle to teleport to the Demonic Realm side, destroy four statues, and avoid Deimos's flail swings. Being knocked off the platform by the flail is fatal." },
                        { "Unnatural Signet", "Applied 5 seconds into the boss phase and roughly every minute. Deimos takes 200% increased damage for 10 seconds. Time burst damage windows to coincide with this buff for maximum phase efficiency." },
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
                            "Necrosis (Dual Tank Swap)",
                            "Active throughout the fight. The active tank gains one Necrosis stack every 12 seconds. Tanks must swap using the Issue Challenge special action key (45-second cooldown).",
                            "Necrosis debuff stacking on the active tank. At four or more stacks incoming damage becomes extreme.",
                            "Designate two tanks. The inactive tank uses Issue Challenge before the active tank reaches four stacks to transfer fixation. Both tanks track their stack count and cooldown and communicate swaps clearly.",
                            "Failing to swap tanks causes the active tank to die from compounding 40% damage-per-stack amplification. Swapping too late is the most common cause of tank deaths.",
                            "Swapping too late or the incoming tank using Issue Challenge before their cooldown resets. Both tanks must coordinate timing verbally."
                        },
                        {
                            "Death Bloom",
                            "Occurs at regular intervals starting from the pull. Every other cast triggers Howling Death immediately after.",
                            "Eight cone-shaped AoEs radiating outward from the boss. Each cone has a visible telegraph before detonating. There are safe gaps between cones.",
                            "Walk slightly backward away from the boss into a safe gap between cones. Do not dodge outward — being close to the boss and dodging can put you into an adjacent cone. Position in a safe gap before detonation.",
                            "Being struck deals heavy damage. Standing close to the boss risks being caught by two adjacent cones simultaneously.",
                            "Dodging outward into another cone; standing too close to the boss so gaps are too narrow to use safely."
                        },
                        {
                            "Howling Death (Breakbar)",
                            "Triggers after every other Death Bloom cast. All Surging Souls walls despawn during this window.",
                            "Boss gains a defiance bar immediately after a Death Bloom resolves.",
                            "Break the defiance bar immediately using crowd-control skills. Use the Howling Death window to reposition safely since Surging Souls walls are absent.",
                            "If the bar is not broken, the boss casts an uncleansable Fear that forces all players off the platform, causing a squad wipe.",
                            "Saving CC for other uses and failing to break the bar; not coordinating CC cooldowns so they land simultaneously."
                        },
                        {
                            "Surging Souls",
                            "Active throughout the fight. Walls begin spawning early in the fight and persist until Howling Death windows.",
                            "Walls of ghostly energy moving slowly across the arena floor.",
                            "Keep track of wall positions at all times and move to avoid them. Walls cannot be dodged, blocked, or invulned — only sidestepped. Use Howling Death windows (when walls despawn) to reposition.",
                            "Any player struck by a wall is instantly killed. There is no survival skill that negates a direct hit.",
                            "Not watching wall positions while focused on DPS; being caught off guard when walls fail to render due to low Character Model Limit graphics settings."
                        },
                        {
                            "Spinning Scythes",
                            "Active throughout the fight. Scythes spawn and travel in straight lines across the platform.",
                            "Scythes moving in linear paths across the arena. Their direction is predictable once spawned.",
                            "Observe the spawn direction of each scythe and position out of its path. Do not use boons aggressively before a scythe pass.",
                            "Being hit converts all of the player's boons into conditions, greatly increasing the danger of simultaneous arena hazards.",
                            "Standing in a scythe's linear path while focused on DPS; not repositioning after boon corruption occurs."
                        },
                        {
                            "Tormented Dead",
                            "Spawns every 20 seconds after the boss reaches 90% HP. Fixates on the inactive tank.",
                            "A large glowing undead add running toward the inactive tank.",
                            "The Druid uses push abilities (Glyph of the Tides, Point-Blank Shot) to shove the Tormented Dead off the edge of the platform. Ranged DPS assists with damage. Do not allow it to remain in the center of the arena where its AoE explosion denies space.",
                            "If the Tormented Dead reaches the center and explodes, it deals lethal damage to the group and denies central space.",
                            "Trying to kite it until it expires instead of pushing it off the platform; using push skills at the wrong angle and failing to clear the edge."
                        },
                        {
                            "Crumbling Arena",
                            "Triggers at 90%, 66%, and 33% HP.",
                            "The outer edges of the platform falling away. The playable arena shrinks at each threshold.",
                            "Move inward away from the collapsing edge before each threshold hits. Be aware that the arena is smaller after each collapse and Surging Souls walls now have less room to avoid.",
                            "Any player standing on the collapsing edge section is instantly defeated.",
                            "Standing near the edge at HP thresholds while focusing on DPS; not adjusting positioning after each arena shrink."
                        },
                    },
                    {
                        { "Flesh Wurms", "Eight elite Flesh Wurms spawn at the start of the fight and spit ranged projectiles. Kill them during the opening phase to reduce sustained pressure." },
                        { "Corrupt the Living", "The boss spins its hammer, applying conditions to nearby players. The active tank should dodge this when possible." },
                        { "Vortex Slash", "An expanding orange AoE followed by a larger ring. Both are dodgeable or blockable. Dodge sideways to avoid the outer ring." },
                    }
                },
                {
                    "River of Souls",
                    {
                        {
                            "Escort & Desmina's Barrier",
                            "Active throughout the entire encounter. Players escort Desmina along the river to the end.",
                            "Desmina's protective dome around her. The river deals heavy ticking damage to players outside the dome. If Desmina stops moving, check for active Enervators.",
                            "Split into two groups: a forward group that runs ahead to kill Enervators, and an escort group (typically a Heal Firebrand plus a Superspeed source) that stays with Desmina, keeping her alive and applying boons. Keep Desmina alive — if she dies, the encounter fails.",
                            "Desmina dying ends the encounter immediately. Falling off the platform is instant death.",
                            "The entire squad running ahead and leaving Desmina without support; not killing Enervators fast enough to keep Desmina moving."
                        },
                        {
                            "Enervators",
                            "Spawn regularly along the route ahead of Desmina.",
                            "Enemies spawning ahead of Desmina's path. While alive, they disable her protective dome and freeze her in place.",
                            "The forward group prioritizes killing Enervators immediately. Do not allow them to remain alive — every second they live is time Desmina is frozen and her escort group is exposed to the river.",
                            "Unmanaged Enervators halt Desmina's progress indefinitely and expose the escort group to lethal river damage.",
                            "Forward group members fighting other enemies or staying too far back to kill Enervators before they reach Desmina."
                        },
                        {
                            "Hollowed Bombers",
                            "Spawn periodically and run directly toward Desmina.",
                            "Enemies with a defiance bar channeling a bomb as they approach Desmina.",
                            "Break the Hollowed Bomber's defiance bar to interrupt the bomb channel, or apply Aegis to Desmina preemptively. If neither is possible, be prepared to heal Desmina for the 20% HP loss.",
                            "An uninterrupted bomb detonation removes 20% of Desmina's maximum health. Multiple uninterrupted bombers can kill her.",
                            "Not noticing Bombers approaching; failing to pre-position CC or Aegis to intercept them."
                        },
                        {
                            "Spectral Rifts",
                            "Present along the river path throughout the encounter.",
                            "Rifts that pull players toward them. At 25% progress they begin spawning Spirit Hordes.",
                            "Hit each Spectral Rift 10 times to temporarily deactivate its pull. At 25% encounter progress, Rifts also begin spawning Spirit Horde ghosts — prioritize deactivating Rifts near Desmina's path.",
                            "Active Rifts continuously pull players off position and can drag them into the river or away from Desmina.",
                            "Ignoring Rifts and getting pulled repeatedly; not hitting them enough times to deactivate."
                        },
                        {
                            "Spirit Horde",
                            "Spawns from Spectral Rifts at 25% encounter progress.",
                            "Small ghosts chasing Desmina and her escort group in large numbers.",
                            "The escort group cleaves down Spirit Horde ghosts as they arrive. They are individually weak but accumulate dangerous sustained damage. Keep Desmina topped up with heals during this phase.",
                            "Unchecked Spirit Horde ghosts overwhelm the escort group with stacking damage.",
                            "Letting ghosts pile up without cleaving; not warning the escort group that Spirit Horde phase has begun."
                        },
                        {
                            "Time Bombs",
                            "Randomly applied to escort group members throughout the encounter.",
                            "An expanding two-circle AoE on an escort group player. The inner circle locks in and the outer circle detonates.",
                            "Move to the back of Desmina's barrier immediately and drop the bomb there, away from allies. Do not drop it near the front of the barrier where it will stun players moving with Desmina.",
                            "A Time Bomb detonating near allies stuns them and disrupts escort positioning.",
                            "Standing still and letting the bomb detonate in the middle of the escort group; moving in the wrong direction and dropping the bomb at the front of the barrier."
                        },
                        {
                            "Soul Walls",
                            "Appear at 33% encounter progress.",
                            "Instant-kill walls sweeping across the arena, similar to Surging Souls in the Soulless Horror fight.",
                            "Navigate around the walls. They cannot be dodged, blocked, or invulned. Use the gaps in wall timing to continue escorting Desmina.",
                            "Any player struck by a wall is knocked into Ghost State.",
                            "Being caught by a wall while distracted by other mechanics; not warning the group when walls begin spawning at 33%."
                        },
                        {
                            "Ghost State & Respawn",
                            "Activates the first time a player fully dies during the encounter.",
                            "Entering Ghost State instead of going to the respawn point. Purple orbs scattered throughout the river.",
                            "Collect five purple orbs to respawn. After collecting the fifth orb, the player respawns on the river itself — rejoin Desmina's escort immediately.",
                            "Players who cannot collect five orbs in time remain out of the fight. Repeated deaths drain the squad's ability to protect Desmina.",
                            "Not knowing Ghost State exists and panicking; respawning too far from Desmina and getting hit by the river before rejoining."
                        },
                    },
                    {
                        { "River Damage", "The river beneath the path deals heavy ticking damage to any player outside Desmina's barrier. Stay inside the dome at all times. Falling off the platform is instant death." },
                    }
                },
                {
                    "Broken King (Statue of Ice)",
                    {
                        {
                            "Green Orb Capture",
                            "A green circle appears every 2% of the boss's HP throughout the fight.",
                            "A glowing green circle appearing on the ground. It will detonate dealing lethal squad-wide damage if no player is standing in it.",
                            "Assign players to always cover green circles. Move into the circle immediately when it appears and stand in it until it resolves. Communicate when you already have three Frozen Wind stacks so another player can take your next orb.",
                            "An uncovered green circle detonates dealing severe damage to the entire squad, potentially wiping the group.",
                            "Multiple players racing to the same circle and leaving another circle uncovered; players with high Frozen Wind stacks taking orbs without communicating."
                        },
                        {
                            "Frozen Wind Stacks",
                            "Each green orb captured grants one Frozen Wind stack. Stacks expire after 45 seconds.",
                            "Frozen Wind debuff stacking on players capturing orbs. At three stacks, the next capture freezes the player for 10 seconds and deals constant damage.",
                            "Track your Frozen Wind stacks. At three stacks, call out that you cannot take the next orb and let a teammate cover it. Players can use invulnerability skills at three stacks to absorb a fourth orb without being frozen.",
                            "A player frozen for 10 seconds is removed from DPS and orb coverage temporarily, which can cascade into uncovered orbs and a squad wipe.",
                            "Not tracking personal stack count; taking a fourth orb without an invulnerability ready and getting frozen during a critical moment."
                        },
                        {
                            "DPS Control (~75k Group DPS)",
                            "Active throughout the fight. An enrage timer triggers at 3:30.",
                            "Green orbs spawning more frequently than the group can cover if DPS is too high; enrage at 3:30 if DPS is too low.",
                            "Maintain approximately 75k total group DPS. If orbs are spawning faster than the group can cover (from DPS spiking too high), back off damage. If the group is at risk of the enrage timer, push harder. Falling below 60k risks failing the enrage timer.",
                            "Too high DPS causes orbs to spawn faster than players can capture them. Too low DPS triggers enrage at 3:30, wiping the squad.",
                            "Full-sending DPS without monitoring orb spawn rate; not recognizing when orbs are accumulating faster than the group can handle."
                        },
                        {
                            "Ice Cracks",
                            "Boss creates cracked ground patterns periodically throughout the fight.",
                            "Shining ice cracks appearing on the ground around the arena.",
                            "Sidestep out of crack patterns before they pulse. They deal heavy damage on detonation.",
                            "Standing in cracks when they pulse deals heavy damage and can push players into dangerous stack situations during orb coverage.",
                            "Focusing entirely on orbs and green coverage and ignoring crack positions."
                        },
                    },
                    {
                        { "Frozen Wind Stack Timing", "Stacks expire after 45 seconds, so if the fight runs long enough, stacks naturally drop. Coordinate orb assignments so players with high stacks rotate off coverage temporarily." },
                    }
                },
                {
                    "Eater of Souls (Statue of Death)",
                    {
                        {
                            "Twisted Spirit & Red Orb Collection",
                            "Twisted Spirits spawn at the platform edge periodically. Twenty total red orbs are needed to progress.",
                            "A spider-shaped Twisted Spirit spawning at the edge of the platform. Defeating it releases five Reclaimed Energy orbs.",
                            "Kill the Twisted Spirit immediately. Use the special action key to collect the released orbs, then target the glowing rectangle in the arena to deposit them. Placing orbs on an active rectangle during the boss kill window yields ten red orbs. Collect all twenty to light six torches and strip the boss's regeneration.",
                            "Not collecting enough orbs means the boss retains its regeneration and the fight becomes unwinnable.",
                            "Missing the deposit window by not targeting the active glowing rectangle; failing to kill Twisted Spirits quickly enough to collect all five orbs before they despawn."
                        },
                        {
                            "Lost Spirit & Air Phase",
                            "Every 40–50 seconds, a Lost Spirit spawns surrounded by a green launch circle.",
                            "A Lost Spirit appearing with a green circle around it. Any player standing in the green circle is launched airborne and gains Fractured Spirit, preventing them from taking subsequent launches.",
                            "Designated players step into the green circle to be launched. While airborne, use Ascend, Spirit Surge, and Descend abilities to collect five orbs within 30 seconds. The boss also gains a defiance bar during this window — the rest of the squad breaks it, or one designated 'sac' player steps into the boss's hitbox to allow the bar to resolve.",
                            "Airborne players who fail to collect five orbs within 30 seconds die. Failing to break or resolve the defiance bar leaves it active and pressures the squad.",
                            "Players with Fractured Spirit trying to take another green launch and dying instantly; not assigning a breakbar strategy before the fight."
                        },
                        {
                            "Six Torches",
                            "Throughout the fight as red orbs are collected.",
                            "Six unlit torches around the arena. Each group of collected orbs lights additional torches.",
                            "Ensure orbs are deposited efficiently to light all six torches. Lighting all six torches strips the boss's regeneration, making it possible to kill.",
                            "Without all torches lit, the boss's regeneration prevents it from being killed.",
                            "Wasting orb deposits by not timing them with the active glowing rectangle, resulting in fewer orbs counted per deposit."
                        },
                    },
                    {
                        { "Puke AoE", "The boss periodically vomits a large poisonous AoE. Move out of it immediately. This is a standing hazard that pressures positioning throughout the fight." },
                    }
                },
                {
                    "Eyes of Janthir (Statue of Darkness)",
                    {
                        {
                            "Light Delivery (Thrower Puzzle)",
                            "Active throughout the entire encounter.",
                            "Three lights continuously spawning on the platform. Two elevated Thrower platforms on either side of the arena.",
                            "Two assigned Throwers take positions on their elevated platforms. They alternate grabbing lights (one from each end, alternating through the middle) and passing them to assigned players on the ground. Ground players receive the light and carry it to the Eye. Throwers must avoid catching lights on map geometry when rotating their grab pattern.",
                            "Light delivery failures leave the Eye without delivered lights, preventing the stun that stops teleportation.",
                            "Throwers catching lights on geometry and losing them; ground players not being in position to receive the pass."
                        },
                        {
                            "Stun Thresholds & Teleport",
                            "The Eye must be stunned at 85%, 70%, 55%, 40%, 25%, and 10% HP thresholds.",
                            "Each HP threshold approaching. Failure to stun at 70% additionally summons a Minotaur. Without a stun, the Eye teleports away.",
                            "Assign one Stunner per Eye. Stunners apply the stun at each 10% threshold using the delivered light. Re-stun approximately every 10 seconds to extend the stun duration and prevent teleportation between thresholds. Do not use hard crowd control (knockback, pull, launch) as these overwrite stun duration and cause premature teleportation.",
                            "An unstunned Eye teleports to a new location, disrupting positioning and wasting time. Failing the 70% stun also spawns a Minotaur add.",
                            "Using hard CC skills (knockback/pull/launch) that overwrite the stun; stunners being too slow to re-stun between thresholds."
                        },
                        {
                            "Synchronized Kill",
                            "As both Eyes approach 0% HP.",
                            "Both Eyes' HP bars. They must die within 8 seconds of each other.",
                            "Coordinate DPS across both sides. Call out HP percentages so the group can slow one Eye and push the other to sync the kills within 8 seconds.",
                            "If the two Eyes die more than 8 seconds apart, both regenerate to full HP and the encounter resets.",
                            "One side killing their Eye too quickly without communicating; not having a designated caller monitoring both HP bars."
                        },
                    },
                    {
                        { "Hard CC Restriction", "Never use knockback, pull, or launch effects on either Eye. These skills overwrite the stun applied by the light delivery and cause the Eye to teleport prematurely." },
                        { "Role Structure", "Each Eye requires one Thrower (elevated platform), one Stunner (applies light stun), and three DPS. Assign roles before the encounter begins." },
                    }
                },
                {
                    "Dhuum",
                    {
                        {
                            "Pre-Event: Enforcers, Messengers & Deathlings",
                            "Before the boss fight begins. Wave-based event that must be completed to trigger the Dhuum encounter.",
                            "Skeletal Enforcers spawning in four corners attacking Reapers. Messengers fixating on players. Deathling spiders swarming Reapers.",
                            "Kill Enforcers fast, avoiding their frontal cone attacks. Designate a Messenger Kiter: the kiter attacks Messengers first so they fixate on the kiter for their 15-second duration, keeping them away from Reapers. Cleave Deathlings continuously to prevent accumulated damage on Reapers. Protect all Reapers throughout the event.",
                            "Reapers killed during the pre-event permanently remove them from the boss fight, making the Final Phase impossible.",
                            "No one fixating Messengers so they deal heavy damage to Reapers; standing in front of Enforcers and taking their cone attacks."
                        },
                        {
                            "Greens (Airborne Mechanic)",
                            "Every 30 seconds throughout the fight, Dhuum targets a Reaper with a green circle.",
                            "A green circle appearing on a Reaper. Players assigned to greens watch for this on their rotation.",
                            "The assigned Green player (G1, G2, G3 rotating) enters the green circle before it detonates. They are lifted airborne and must collect five red orbs within 15 seconds to return safely. If no player is in the circle at detonation, the Reaper dies and the squad wipes. Players cannot take two consecutive greens — doing so kills them instantly.",
                            "An uncovered green detonation kills the Reaper, wiping the squad. A player taking consecutive greens dies instantly.",
                            "G-rotation players losing track of whose turn it is; a player attempting a second consecutive green without realizing the restriction."
                        },
                        {
                            "Death Mark",
                            "Occurs at regular intervals throughout the fight.",
                            "Dhuum reappears on a random player with a large orange circle beneath him. A pillar of light appears nearby. The Death Mark leaves behind dangerous green fire after it resolves.",
                            "When Dhuum's orange circle appears, all players caught in it have their boons stolen and are separated from their souls. Run immediately to the nearest pillar of light within 10 seconds to reclaim your soul. After the mechanic resolves, avoid walking through the green fire left at the Death Mark location.",
                            "Any player who fails to reach a pillar of light within 10 seconds dies instantly.",
                            "Running in the wrong direction instead of toward the pillar of light; walking through the lingering green fire after the Death Mark resolves."
                        },
                        {
                            "Greater Death Mark (6:30)",
                            "Occurs at the 6:30 timer mark.",
                            "Dhuum reappearing at the center of the arena and blasting all players backward. Each player's soul beacon (shining pillar of light at their original position) appears immediately after.",
                            "When blasted backward, return immediately to your soul beacon to reclaim your soul or die instantly. Dhuum also gains an orange circle that steals boons and pulls players — position with your back against a safe wall (not the throne) before the mechanic to limit how far you are blasted. Any bombs timed to detonate at 6:35 must be detonated early; bombs coinciding with 5:15, 3:55, 2:35, or 1:15 dissipate during the soul separation.",
                            "Any player who fails to reach their soul beacon dies instantly. Being blasted into a wall without a clear return path increases the risk significantly.",
                            "Panicking after the blast and running in the wrong direction; bomb players not managing their bomb timing around this mechanic."
                        },
                        {
                            "Shackles",
                            "Starting at 60% HP, applied periodically to the two non-tank players closest to Dhuum.",
                            "Yellow border on your squad UI icon, a red chat message, and a visible glowing tether connecting two players. After 4 seconds, the shackle activates with heavy damage.",
                            "The two shackled players immediately run in opposite directions to break the tether. Call out your direction using a landmark (e.g., 'throne' or 'door') so you don't both run the same way.",
                            "Failing to break the shackle within the activation window deals heavy damage to both shackled players.",
                            "Both shackled players running in the same direction; dragging the tether through Reapers or into the stack."
                        },
                        {
                            "Affliction (Bombs)",
                            "Starting at 9:00 on the timer. A new bomb is applied 3 seconds after the previous one detonates.",
                            "A bomb debuff with an icon over the player's head and a special action key prompt. The bomb detonates after 13 seconds or early if the player goes into downstate or uses the special action key.",
                            "Leave the stack immediately when afflicted. Let the bomb time out naturally (do not force early detonation) to maintain spawn timing. Avoid detonating near Reapers, greens, or the Messenger Kiter.",
                            "Detonating inside the stack deals heavy damage to all nearby players. Early detonation desynchronizes the bomb timing for the rest of the fight.",
                            "Using the special action key to detonate early; running through the stack on the way out instead of moving to a safe zone."
                        },
                        {
                            "Messengers",
                            "Spawn periodically and move toward the Reapers.",
                            "Messenger adds approaching the Reapers. The designated Messenger Kiter watches for their spawn.",
                            "The Messenger Kiter attacks each Messenger immediately to gain fixation. Messengers die 15 seconds after fixation. Keep them away from the Reapers for their full duration. If a Messenger reaches a Reaper unattended, it deals heavy damage to that Reaper.",
                            "Messengers that reach a Reaper deal heavy damage. Multiple unmanaged Messengers can kill a Reaper.",
                            "No dedicated kiter assigned; kiter dying and leaving Messengers unfixated."
                        },
                        {
                            "Final Phase (10% HP — Seven Seals)",
                            "Triggers when Dhuum reaches 10% HP. Timer resets to 1:45.",
                            "All players launched airborne (identical to green mechanic — collect five orbs). After landing, players respawn in a protective dome. Seven seals appear around the room.",
                            "Collect five airborne orbs to land safely (avoid the central light beam). Pre-load boons (Protection, Aegis, Regeneration) before leaving the dome — exiting deals heavy damage. Position at dome edge near your assigned seal. All seven seals must be channeled within 10 seconds of each other. After channeling, kill Dhuum within 20 seconds before enrage. If Dhuum survives 20 seconds, the seal process repeats.",
                            "Failing to channel all seven seals simultaneously resets the seal phase. Failing to kill Dhuum within 20 seconds triggers enrage and wipes the squad.",
                            "Players not pre-loading boons before leaving the dome; poor seal assignments leaving some seals unreachable; insufficient DPS causing enrage."
                        },
                    },
                    {
                        { "Cracks", "After five auto-attacks, Dhuum strikes his scythe into the floor creating ground cracks. Sidestep out of the cracks before they detonate." },
                        { "Slash (30%)", "Starting at 30% HP, Dhuum performs a cone attack that pulls players and strips boons. Sidestep to avoid it." },
                        { "Tanking", "The toughness tank receives a damage reduction buff. Position Dhuum away from the stack. Rotate Dhuum's position to facilitate green coverage and Death Mark baiting." },
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
                            "Arm Phases & Add Spawns",
                            "Throughout the fight. The boss alternates smashing one of four arena tiles. The squad stacks on the middle two tiles, starting on the right by convention.",
                            "The boss's arm slamming down on an arena tile. The first smash spawns Sword adds; the second smash spawns Shield adds with defiance bars.",
                            "Stack on the middle two tiles. Dodge or use defensive skills to avoid the initial arm smash knockdown. Kill Sword adds immediately — use pull skills (e.g. Into the Void) to group them. Kill Shield adds and break their defiance bars using saved Conjured Slash SAKs. Save the last five Sword Bubbles collected for the next hand phase for maximum value.",
                            "Letting Swords and Shields survive too long causes them to walk toward each other and merge into Warriors, which have higher health and deal more damage.",
                            "Not grouping Sword adds for cleave; wasting Conjured Slash SAKs on Sword adds instead of saving them to break Shield defiance bars."
                        },
                        {
                            "SAK System (Conjured Slash & Conjured Protection)",
                            "SAKs are gained by killing Sword adds (Conjured Slash) and Shield adds (Conjured Protection). Used to negate specific mechanics.",
                            "Conjured Slash SAK (from Sword add kills) — used to break Shield add defiance bars and deal burst damage. Conjured Protection SAK (from Shield add kills) — used to negate Junk Wall and Thunderhead Clap.",
                            "Assign two dedicated Collectors to gather orbs during collection phases. The Sword Collector gathers four Sword Bubbles and uses Conjured Slash on the fifth, repeating the cycle. The Shield Collector saves all Conjured Protection stacks for Junk Wall and Thunderhead Clap. Do not use Protection SAKs carelessly — they are required for survival mechanics.",
                            "Using Protection SAKs at the wrong time leaves the squad unprotected against Junk Wall or Thunderhead Clap, causing mass downs or wipes.",
                            "Random players picking up SAK orbs instead of designated Collectors; using Conjured Protection against Junk Wall and having none left for Thunderhead Clap."
                        },
                        {
                            "Orb Delivery (Collection Phase)",
                            "Occurs after each arm is destroyed. Three types of orbs fly in from behind the platform.",
                            "Three orb types: purple Damage Bubbles (damage players on contact), green Sword Bubbles (white line inside — grant Conjured Slash), green Shield Bubbles (white outline — grant Conjured Protection). Two Collectors move to intercept them before they reach the boss.",
                            "Dedicated Collectors move to intercept orbs mid-flight, preventing them from reaching the boss. Damage Bubbles must be avoided; Sword and Shield Bubbles must be collected by their respective assigned Collector. Orbs that reach the boss unintercepted grant Conjured Amalgamate buffs.",
                            "Uncollected Sword and Shield Bubbles reaching the boss grant it additional strength. Damage Bubbles hitting players deal heavy damage.",
                            "Collectors walking into Damage Bubbles while intercepting; non-Collectors picking up orbs and disrupting SAK economy."
                        },
                        {
                            "Junk Wall",
                            "Occurs after collection phase following the destruction of each arm. Originates from the side of the destroyed arm and sweeps across the platform. If both arms are destroyed, the wall returns from the opposite direction.",
                            "A wall of debris advancing across the platform from the arm's side.",
                            "Use saved Conjured Protection SAKs to block the wall and prevent deaths. High-DPS groups that kill the boss before the wall returns need only one set of shields. Lower-DPS groups reposition to the opposite side of the platform to use one shield set against both passes.",
                            "A Junk Wall hitting players without Conjured Protection active deals lethal damage to the squad.",
                            "Not having Conjured Protection ready when the wall arrives; lower-DPS groups not repositioning to handle the returning wall."
                        },
                        {
                            "Thunderhead Clap (50% HP)",
                            "Triggers at exactly 50% boss HP. The boss becomes invulnerable.",
                            "The boss animation for Thunderhead Clap — it instantly downs every player on the platform.",
                            "Use saved Conjured Protection SAKs to negate the Thunderhead Clap. Alternatively, players with defensive skills (e.g., Rebound!) can survive it. This is the primary reason to save Shield stacks from the first half of the fight.",
                            "Without Conjured Protection, every player is downed simultaneously, causing a squad wipe.",
                            "Spending all Conjured Protection SAKs on Junk Walls and having none available for Thunderhead Clap."
                        },
                        {
                            "Warriors (Merged Adds)",
                            "Occurs when Sword and Shield adds are not killed quickly enough and walk toward each other.",
                            "Sword and Shield adds moving toward each other and merging into larger Warrior enemies.",
                            "Prevent merging entirely by killing adds as soon as they spawn. If Warriors do appear, eliminate them immediately — they require CC and deal significantly more damage than their component adds.",
                            "Warriors left alive create sustained pressure that disrupts the orb collection phase and SAK economy.",
                            "Letting adds live while the group chases DPS on the boss; not using pull skills to group Sword adds for fast cleave."
                        },
                    },
                    {
                        { "25% Phase (Second Arm Respawn)", "At 25% HP, both arms respawn at 50% of their HP. Killing each arm removes an additional 10% from the boss, leaving 5% remaining. If the second arm takes too long, the first arm respawns again." },
                        { "Initial Smash Knockdown", "The first arm smash at the start of the fight knocks down players unless dodged or negated with a defensive skill. Position on the middle two tiles and be ready to dodge the initial slam." },
                    }
                },
                {
                    "Twin Largos (Nikare & Kenut)",
                    {
                        {
                            "Split Platform Structure & Phase Order",
                            "The encounter is divided into four phases. The squad splits across two separate platforms in Phases 3 and 4.",
                            "Phase 1: Nikare alone (100%–50%). Phase 2: Kenut alone (100%–50%). Phase 3: Both active simultaneously on split platforms (50%–25%). Phase 4: Both active simultaneously on split platforms (25%–0%).",
                            "In Phases 1 and 2, the full squad handles each boss sequentially. In Phases 3 and 4, split the squad: one group handles Nikare on their platform, the other handles Kenut on theirs. Coordinate HP across both bosses — if one side kills their boss while the other is far behind, the encounter becomes significantly harder.",
                            "Uncoordinated kills leave the surviving boss with full attention needed from both groups. Poor split balance leads to wipes in Phase 4.",
                            "Not assigning a clear split before Phase 3; one side burning too fast without communicating HP to the other group."
                        },
                        {
                            "Aquatic Detainment (Nikare)",
                            "Every 23 seconds. Nikare creates small orange circles under every player.",
                            "Small orange circles appearing beneath every player's feet.",
                            "Dodge, block, or use a stun break to escape the orange circle before it triggers. Being caught floats the player airborne for 4 seconds while dealing ticking damage.",
                            "Players caught in Aquatic Detainment are floated and take 4 seconds of ticking damage, reducing their effective DPS window and exposing them to follow-up mechanics.",
                            "Burning dodges too early and having none available when Aquatic Detainment activates; ignoring it and soaking unnecessary damage."
                        },
                        {
                            "Geyser (Nikare)",
                            "Every 10 seconds when no other mechanics are active. Targets two random players with large orange circles.",
                            "Large orange circles appearing under two random players, followed by a knockback explosion.",
                            "Move or dodge out of the orange circle before it explodes. Being hit applies Waterlogged stacks and risks being knocked off the platform.",
                            "Being knocked off the platform by a Geyser is lethal. Stacking Waterlogged from repeated hits is dangerous — 10 stacks causes instant death.",
                            "Standing still when the orange circle appears; not monitoring Waterlogged stack count."
                        },
                        {
                            "Tidal Pool (Nikare)",
                            "Every 13 seconds. Applied as a timed debuff to a non-tank player.",
                            "A debuff on a non-tank player. After 5 seconds, the player's position becomes an expanding water AoE.",
                            "The targeted player immediately moves to the edge of the platform to drop the Tidal Pool away from the group. The pool applies Waterlogged to anyone standing in it.",
                            "A Tidal Pool dropped in the center of the platform applies Waterlogged to the entire stack, rapidly accumulating toward the 10-stack instant-death threshold.",
                            "Targeted player not reacting fast enough and dropping the pool in the stack; dropping the pool near the platform edge in a way that blocks movement."
                        },
                        {
                            "Vapor Rush (Nikare)",
                            "Every 23 seconds. Nikare performs three fast dash attacks.",
                            "An arrow indicator at Nikare's feet telegraphing dash direction. The first two dashes target the furthest player; the third targets the tank.",
                            "Watch the arrow indicator and sidestep each dash. The furthest player should be aware they will be targeted twice. The tank positions to take the third dash safely.",
                            "Being hit by Vapor Rush deals heavy damage and applies conditions.",
                            "Standing in the dash path after seeing the arrow indicator; the furthest player not moving after the first dash and being hit by the second."
                        },
                        {
                            "Sea Swell (Kenut)",
                            "Kenut pulses an orange warning circle then blasts a water swell across the platform.",
                            "An orange circle pulse from Kenut followed immediately by a large wave sweeping the platform.",
                            "Jump over the wave, dodge through it, or use an invulnerability or block skill to negate it. Do not stand and take the hit — each player hit grants Kenut a protective stack.",
                            "Players hit by Sea Swell take heavy damage, are launched, and grant Kenut protective stacks per player hit, reducing the squad's damage output.",
                            "Dodging too early and having the dodge expire before the wave arrives; standing behind Kenut where the wave originates."
                        },
                        {
                            "Vapor Jet (Kenut)",
                            "Every 20 seconds. Kenut teleports to the furthest player.",
                            "Kenut teleporting to the furthest player's position and unleashing a small orange rectangular attack in front of her.",
                            "Assign one player to predictably kite this by staying as the furthest player at a consistent position. That player dodges or sidesteps the rectangular attack. Being hit steals boons and applies Poison.",
                            "Boon strips from repeated Vapor Jet hits compound with other boon-removal mechanics and weaken the squad significantly.",
                            "No designated kiter assigned, causing Kenut to teleport randomly into the stack; the kiter not sidestepping the rectangular telegraph."
                        },
                        {
                            "Cyclone Burst (Kenut)",
                            "Water flows from Kenut creating various circles on the platform.",
                            "Multiple circles appearing across the platform from Kenut.",
                            "Sidestep the circles rather than using dodge or defensive cooldowns — the damage is moderate and those resources are better saved for Sea Swell and Vapor Jet. Each hit grants Kenut a protective stack.",
                            "Standing in Cyclone Burst circles applies bleeds and grants Kenut protective stacks, reducing damage dealt.",
                            "Wasting dodge rolls on Cyclone Burst and having none available for Sea Swell."
                        },
                        {
                            "Aquatic Barrage (Phases 3 & 4)",
                            "During Phase 3 (50%–25%) and Phase 4 (25%–0%). Both bosses simultaneously gain defiance bars.",
                            "Both bosses spinning centrally and shooting water bolts across the platform. In Phase 4, they also hurl projectiles cross-platform causing daze.",
                            "Break both defiance bars quickly and simultaneously using squad CC. In Phase 4, use projectile destruction skills to mitigate cross-platform projectiles causing daze.",
                            "Failing to break the defiance bars allows Aquatic Barrage to continue dealing sustained heavy damage. Phase 4 cross-platform projectiles cause daze that disrupts DPS and CC timing.",
                            "Not coordinating CC between split groups; running out of CC skills because they were used on individual boss mechanics earlier."
                        },
                        {
                            "Aquatic Aura (Phase 4)",
                            "Active throughout Phase 4 (25%–0%). Applies continuously to all players.",
                            "Aquatic Aura debuff stacking on all players, increasing incoming damage by 2% every three seconds.",
                            "Maximize DPS in Phase 4. The longer Phase 4 runs, the more damage the squad takes from all sources. Condition cleansing remains critical as Waterlogged stacks compound with Aquatic Aura pressure.",
                            "A slow Phase 4 with high Aquatic Aura stacks plus accumulated Waterlogged causes the squad to take lethal incoming damage.",
                            "Treating Phase 4 like the earlier phases in terms of pacing; not cleansing conditions aggressively enough."
                        },
                        {
                            "Water Tornadoes",
                            "Three tornadoes path across Kenut's platform, moving approximately clockwise from corner to corner.",
                            "Three rotating water tornadoes moving in a clockwise pattern across the platform.",
                            "Track tornado positions and move to avoid their paths. Being hit applies damage and conditions including Waterlogged.",
                            "Repeated tornado hits rapidly stack Waterlogged, moving toward the 10-stack instant-death threshold.",
                            "Standing still and letting a tornado catch up; not watching tornado pathing while managing other Kenut mechanics."
                        },
                    },
                    {
                        { "Waterlogged", "A persistent debuff applied by water attacks, boss abilities, and platform hazards. At 10 stacks the player dies instantly. Condition cleansing is essential throughout all phases. Monitor your stack count." },
                    }
                },
                {
                    "Qadim",
                    {
                        {
                            "Pylon Structure & Lair Phases",
                            "The fight is divided into three pylon phases at 100%–66%, 66%–33%, and 33%–0% HP. At each threshold Qadim jumps to the corresponding pylon platform.",
                            "Qadim jumping to a pylon platform. Each pylon contains a lair guardian: Hydra (Phase 1), Apocalypse Bringer/Destroyer (Phase 2), Wyvern Matriarch and Patriarch (Phase 3).",
                            "Split the squad: the majority fights the lair guardian on the pylon platform while a dedicated kiter remains on Qadim's main platform managing Lava Elementals. Defeat the lair guardian to complete the lamp and phase Qadim back to the main platform. After each lamp completion, an allied NPC deals massive damage to the lair creature, assisting the kill.",
                            "Failing to defeat the lair guardian prevents Qadim from phasing. If no players are on Qadim's platform, he instantly gains 5 Fiery Empowerment stacks.",
                            "Leaving Qadim's platform entirely unattended during lair phases; not having a lamp strategy prepared for each lair guardian's mechanics."
                        },
                        {
                            "Lava Elemental Kiting",
                            "Active whenever the squad is on Qadim's main platform. Lava Elementals spawn and move toward Qadim.",
                            "Lava Elementals spawning and walking toward Qadim. Each one that reaches him grants a stack of Fiery Empowerment (+20% attack speed and damage per stack).",
                            "Assign a dedicated kiter (typically Rifle Deadeye or another ranged DPS) to stay on Qadim's platform and eliminate all Lava Elementals before they reach the boss. The kiter must engage and kill elementals continuously while the rest of the squad handles lair guardians. Greater Magma Elementals are invulnerable until their summoner reaches 50% HP or leaves range.",
                            "Each Lava Elemental reaching Qadim grants Fiery Empowerment. Multiple stacks make Qadim's attacks lethal for the squad during main platform phases.",
                            "No dedicated kiter assigned; kiter leaving Qadim's platform during lair phases, allowing elementals to reach the boss unchecked."
                        },
                        {
                            "Flame Wave",
                            "Occurs as part of Qadim's repeating attack pattern (third attack in the cycle: Slash → Slash → Flame Wave → Slash → Flame Dance).",
                            "Qadim winding up for a sweeping attack that knocks players backward.",
                            "Evade the Flame Wave by dodging or repositioning before it hits. Being struck knocks the player backward, interrupting positioning and potentially pushing them off the platform.",
                            "Players knocked backward by Flame Wave can be pushed into hazards or off the platform.",
                            "Not tracking Qadim's attack pattern and being caught off guard by the wave; dodging too early and being hit anyway."
                        },
                        {
                            "Flame Dance",
                            "Occurs as the fifth attack in Qadim's repeating attack pattern.",
                            "Leaping flames appearing across lines on the platform floor. Lit lines are hazardous; unlit lines are safe.",
                            "Stand on unlit platform lines. Do not stand on or move across lit lines during the animation.",
                            "Standing on a lit flame line deals heavy damage.",
                            "Repositioning during Flame Dance and accidentally moving onto a lit line; not identifying safe lines quickly enough."
                        },
                        {
                            "Shockwave & Breakbar",
                            "Occurs after Qadim's fourth attack in the repeating pattern. A second Shockwave triggers invulnerability and a defiance bar.",
                            "First Shockwave: orange circle collapsing inward — dodge or jump. Second Shockwave: Qadim becomes invulnerable and gains a defiance bar.",
                            "Dodge or jump over the first Shockwave to avoid heavy damage and knockback. Break Qadim's defiance bar during the invulnerability window. If the break bar is not broken, Qadim deals massive damage to the squad. As an emergency measure, retreat to Pyre platforms, but breaking the bar is the standard strategy.",
                            "Failing to break the defiance bar results in massive squad damage. Failing the first Shockwave dodge deals heavy damage and knockback.",
                            "Not saving sufficient CC for the breakbar; trying to dodge the first Shockwave too late."
                        },
                        {
                            "Pyres & Fireballs",
                            "Three Pyres spawn around the arena perimeter. Each grants a specific buff; unkilled Pyres spawn bouncing Fireballs continuously.",
                            "Three Pyres: North-West (Aegis), South-West (Vigor), East (Stability). Bouncing Fireballs from any Pyre that is not killed.",
                            "Choose which Pyres to kill based on squad composition (condition groups kill Vigor Pyre; power groups kill Aegis Pyre; CC-weak groups kill Stability Pyre). Kill chosen Pyres to stop their Fireball spawns. Avoid bouncing Fireballs from remaining unkilled Pyres — they down players on contact.",
                            "Unkilled Pyres spawn Fireballs continuously that instantly down players on contact.",
                            "Not assigning Pyre targets before the fight; walking into Fireball paths while focused on other mechanics."
                        },
                        {
                            "Red Circle Teleport",
                            "Occurs when Qadim moves between platforms (at lair transitions). Legendary enemies gain red circles at their second breakbar activation.",
                            "Red circles appearing beneath players on the current platform when a transition is about to occur.",
                            "Move off any red circle within 2 seconds. Players who remain in the red circle are teleported to Qadim's new location, separated from the group.",
                            "Being teleported into Qadim's location separated from the group often results in death from Lava Elementals and Qadim's attacks with no support.",
                            "Not noticing red circles during the chaos of a lair guardian kill; being too slow to step out within the 2-second window."
                        },
                    },
                    {
                        { "Tanking (Proximity-Based Aggro)", "Qadim's aggro is proximity-based — the closest player is always targeted. The designated tank maintains position at Qadim's center to control attack direction away from the group. Proximity tanking is easily disturbed by players moving too close, so the group must maintain distance from the boss." },
                        { "Lamp System", "Three mandatory lamp completions occur at fight start, 66%, and 33% HP. A sub-group traverses a lamp room defeating mobs, then signals the squad to open the lamp. One player gains a green circle that ports remaining lamp players and the allied creature to the main arena, dealing massive damage to the lair guardian." },
                        { "Phase 3 Wyvern Split", "In Phase 3, Wyvern Matriarch and Patriarch spawn simultaneously and require two tanks: one isolates the Matriarch, one handles the Patriarch with the group. The Matriarch occasionally pushes players off the platform — tank defensively." },
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
                            "Tectonic Upheaval",
                            "Occurs repeatedly throughout the fight during the main damage phase.",
                            "An orange circle appears beneath each of the five furthest players from Adina. The circle locks onto a hexagon shape on the ground, then a pillar rises there.",
                            "The five designated baiter players step away from the stack to be the furthest targets. When the circle locks onto the ground, move away immediately before the pillar rises. Return to the stack quickly. Place pillars far enough apart that they do not overlap, and not on top of Adina.",
                            "Any player still standing on their circle when the pillar rises is instantly defeated. If a rising pillar overlaps another pillar, it destroys it — reducing the number of pillars available to block Boulder Barrage.",
                            "Standing too far from the boss at all times (only step out when targeted); not returning to stack after baiting; placing pillars too close together or near Adina."
                        },
                        {
                            "Diamond Palisade",
                            "Immediately before each Boulder Barrage — also at the very start of the fight.",
                            "Adina performs a rippling attack animation. This is the signal to move to your assigned pillar.",
                            "Move immediately to your assigned pillar. At the very start of the encounter, you can negate the opening Diamond Palisade damage by remaining mounted.",
                            "Players caught in the open take heavy damage and are left exposed for the incoming Boulder Barrage.",
                            "Not moving to a pillar fast enough; forgetting this precedes Boulder Barrage every time."
                        },
                        {
                            "Boulder Barrage",
                            "Immediately after Diamond Palisade, recurring throughout the fight.",
                            "An expanding orange circle erupts from Adina across the arena.",
                            "Hide behind a pillar. Maximum two players per pillar. Each pillar absorbs two hits from the barrage. Stay behind the pillar until the attack fully resolves.",
                            "Any player hit by Boulder Barrage goes downstate. Pillars that absorb their maximum hits break — if pillars break without being destroyed by Tectonic Upheaval, Adina gains stacks of a buff that increases her damage output and reduces damage taken by 20% per stack.",
                            "More than two players sharing one pillar; players hiding behind the wrong pillar or forgetting their assignment; pillars breaking from the barrage instead of from Tectonic Upheaval (granting Adina stacks)."
                        },
                        {
                            "Radiant Blindness",
                            "After Tectonic Upheaval and before the Boulder Barrage combo resolves.",
                            "Adina raises her arms, speaks a voice line, and gains a glowing Eye icon above her head.",
                            "Run to your assigned pillar immediately and do NOT face toward Adina. Turn your camera away from her. Maintain position behind the pillar.",
                            "Looking at Adina while she has the Eye applies a 20-second uncleansable blind to your character, severely reducing your effectiveness.",
                            "Continuing to DPS and looking at Adina too long; forgetting to look away while navigating to the pillar."
                        },
                        {
                            "Sand Wall",
                            "At 75%, 50%, and 25% HP — Adina becomes invulnerable and a split phase begins.",
                            "A massive wall of sand rises from the south side of the arena and rotates counterclockwise. It will kill anyone it touches instantly.",
                            "As soon as the split phase begins, run counterclockwise around the arena, staying ahead of the wall. Stop at the northwest position and hold there for the rest of the phase.",
                            "Instant death for any player touched by the Sand Wall.",
                            "Running clockwise (into the wall); hesitating at the start; stopping too early before reaching the northwest position."
                        },
                        {
                            "Hands of Erosion and Eruption",
                            "After the Sand Wall completes its rotation — at 75% two hands spawn; at 50% and 25% four hands spawn (two of each type).",
                            "Giant stone hands emerge from the ground. Hand of Erosion pulls players toward quicksand edges; Hand of Eruption fires projectiles at the group.",
                            "Prioritize destroying the Hand of Erosion first. Use blocks, reflects, or projectile mitigation skills to handle Hand of Eruption projectiles. Dodge or use invulnerability if you cannot block the projectiles.",
                            "Being knocked into the quicksand around the arena edge is lethal. Unblocked Eruption projectiles apply heavy vulnerability stacks. At 25% four hands spawn simultaneously, greatly increasing pressure.",
                            "Ignoring the Hand of Erosion; standing near the arena edge when hands appear; lacking projectile mitigation for Hand of Eruption."
                        },
                        {
                            "Perilous Pulse",
                            "Throughout the fight — a standard tank mechanic.",
                            "An orange cone appears in front of Adina aimed at the tank.",
                            "Tank faces Adina away from the group and absorbs or blocks the knockback. All other players avoid standing in front of the boss.",
                            "Players hit by the cone are knocked back, potentially into quicksand or mine hazards.",
                            "DPS players standing in front of Adina; tank not positioning correctly to face the cone away from the group."
                        },
                        {
                            "Stalagmites",
                            "Throughout the fight — tied to the tank position.",
                            "Mines spawn in blocks behind where the tank is standing.",
                            "Tank stands within Adina's hitbox and uses invulnerability skills or blocks to avoid being knocked backward into the mines. The group should never stand in the mine field.",
                            "Mines that detonate deal heavy damage to nearby players and destroy the ground terrain in that area.",
                            "Tank walking backward into their own mine field; group members standing near mine locations."
                        },
                    },
                    {
                        { "Pillar Pandemonium (Adina Stacks)", "Each pillar that is destroyed by Boulder Barrage rather than by a player properly baiting Tectonic Upheaval grants Adina a stack of a buff increasing her outgoing damage and reducing incoming damage by 20% per stack. Ensure all pillars absorb hits cleanly. If a baiter dies, surviving baiters should merge pillar positions to prevent unprotected slots." },
                        { "Quicksand Edges", "The outer edge of the arena is covered in quicksand. Falling into it causes rapid death. Knockbacks from hands and explosions can throw players in — maintain central positioning and prioritize stability or blocks during split phases." },
                    }
                },
                {
                    "Cardinal Sabir",
                    {
                        {
                            "Violent Currents / Flash Discharge (SAK)",
                            "Active continuously throughout all damage phases whenever players are in melee range of Sabir.",
                            "Stacks of Violent Currents build up as Sabir's auto-attacks hit players stacking in front of him. At 5 stacks, the Flash Discharge special action key becomes available on your skill bar.",
                            "Stack tightly in melee in front of Sabir to accumulate Violent Currents stacks as fast as possible. Use Flash Discharge when commanded by the group leader — it deals heavy breakbar damage and is essential for breaking defiance bars. Do not waste Flash Discharge off-cooldown; save it for coordinated breakbar breaks.",
                            "Spreading out prevents stacks from building, removing the group's primary breakbar tool and a significant DPS modifier. Wasting Flash Discharge at random means the bar cannot be broken when it matters.",
                            "Spreading away from the group and losing stack buildup; using Flash Discharge independently instead of on commander's call."
                        },
                        {
                            "Electrical Repulsion",
                            "At 90% HP — Sabir's first defiance bar appears.",
                            "A continuous pushback force radiates from Sabir, and orange line telegraphs (Dynamic Deterrent) spawn on the ground around players.",
                            "Walk into Sabir continuously to fight the pushback, and spam Flash Discharge along with all other crowd control skills to break the defiance bar quickly. After breaking, avoid standing on any orange lines when they detonate.",
                            "Failing to break the bar allows the pushback to shove players off the platform or into lethal zones. The orange lines detonate and deal heavy burst damage.",
                            "Not coordinating crowd control; failing to use all available CC instantly; standing in orange line detonation patterns."
                        },
                        {
                            "Unbridled Tempest",
                            "First occurs at 75% HP and repeats throughout the fight.",
                            "Pulsing orange circles expand outward from Sabir, telegraphing a massive wind attack.",
                            "Use one of three methods: (1) Enter a tornado — the tornado protects you from the wind wall; glide over the wall from inside the tornado. (2) Use Flash Discharge SAK — it teleports you through the wall. (3) Use a death-prevention skill such as Rebound or Rite of the Great Dwarf.",
                            "Players who are hit by Unbridled Tempest without protection go downstate.",
                            "Trying to tank through the attack without protection; not recognizing the telegraph in time; burning Flash Discharge on breakbars immediately before this mechanic fires without having an alternative escape."
                        },
                        {
                            "Tornadoes",
                            "Present in the arena throughout phases 3 and 5 (80%-60% and 60%-0%).",
                            "Tornadoes rotate clockwise around the arena. They are required during Unbridled Tempest but dangerous at all other times.",
                            "Avoid touching tornadoes during normal DPS phases — contact removes all Violent Currents stacks from your character. Only enter a tornado intentionally to survive Unbridled Tempest by gliding over the wind wall.",
                            "Accidentally touching a tornado removes your Violent Currents stacks, resetting your contribution to breakbar damage and DPS buff. During the 80% intermission platform navigation phase, one orange death tornado on the path will instantly kill any player who contacts it.",
                            "Accidentally walking into a tornado while focusing DPS on Sabir; gliding into the death tornado during the 80% intermission."
                        },
                        {
                            "Ion Shield",
                            "Occurs multiple times during Phase 5 (60%-0%). This is the primary phase 5 breakbar.",
                            "A large defiance bar appears on Sabir that refills very quickly if not broken in a single coordinated burst. The bar has no pushback — it is purely a synchronized CC check.",
                            "The commander waits until approximately 6 or more players have accumulated Flash Discharge charges (watch for the light yellow border appearing in the squad UI). On the commander's signal, all ready players use Flash Discharge simultaneously to break the bar in one burst.",
                            "If players use Flash Discharge at different times the bar resets and the group must wait through another full Violent Currents buildup cycle.",
                            "Players using Flash Discharge off-cooldown without waiting for the coordinated call; not watching for the visual cue that charges are ready."
                        },
                        {
                            "Titanic Twister",
                            "Spawns at 50% HP and persists throughout the remainder of the fight.",
                            "A very large orange tornado spawns on the west side of the arena and rotates clockwise around the boss.",
                            "Continuously track this tornado's position and adjust your positioning to avoid it at all times for the rest of the fight. It does not despawn.",
                            "Contact downs or kills players and prevents resurrection attempts in its area.",
                            "Tunnel-visioning DPS on Sabir and drifting into the tornado path; not planning group positioning around the tornado's rotation."
                        },
                        {
                            "Fury of the Storm",
                            "First occurs at 50% HP and repeats periodically thereafter.",
                            "An expanding orange square telegraph originates from the arena center and pushes outward toward the platform edges.",
                            "Immediately move to one of the two protective bubble zones located in arena corners before the square reaches you.",
                            "Players who are not inside a protective bubble when the square resolves are downed.",
                            "Not reacting the moment the telegraph appears; misjudging the timing and arriving at the bubble too late."
                        },
                        {
                            "Paralyzing Wisps",
                            "Spawn on a side platform to the west at 40% HP. Additional wisp platforms appear every 10% HP thereafter.",
                            "Wisps appear on an adjacent platform and continuously fire projectile damage at the main group. They have a defiance bar and respawn 40 seconds after being killed.",
                            "A designated player (typically a Banner Warrior or player with updraft-capable gliding) uses Flash Discharge to teleport to the wisp platform, breaks the defiance bar, kills the wisps quickly, then glides back to the main platform using updrafts. Alternatively, if your group has strong projectile mitigation (e.g., Protective Solace walls), the wisps can be ignored.",
                            "If wisps are left alive they continuously bombard the main group with projectiles. The wisp handler must also avoid being caught by Fury of the Storm or Unbridled Tempest during the round trip.",
                            "The wisp handler not accounting for main platform mechanics timing while off-platform; returning too late and getting hit by Unbridled Tempest."
                        },
                    },
                    {
                        { "Platform Intermissions (80% and 60%)", "At 80% HP Sabir stuns the group and leaps to the next platform. Players must navigate bounce pads and tornadoes to follow. At 80% one orange death tornado on the path instantly kills on contact. At 60% two death tornadoes are present. Do not glide through or into these death tornadoes." },
                        { "Enrage Timer", "Sabir enrages at 9 minutes total fight time, gaining 200% increased damage. Keep stack discipline and breakbar coordination tight to maintain DPS efficiency." },
                    }
                },
                {
                    "Qadim the Peerless",
                    {
                        {
                            "Ruinous Nova (Fight Opener)",
                            "Immediately at the start of the fight, before any damage can be dealt.",
                            "Qadim channels with all three pylons glowing. Each pylon has a breakbar that must be broken.",
                            "Split the squad into three groups — one group per pylon. Each group uses crowd control skills to break their assigned pylon's defiance bar simultaneously. The Pylon Kiters and any CC-capable players coordinate to break all three bars before Ruinous Nova completes.",
                            "If any pylon's breakbar is not broken in time, Ruinous Nova resolves and wipes the entire squad instantly.",
                            "Uneven CC distribution leaving one pylon unbroken; players not knowing their pylon assignment before the pull."
                        },
                        {
                            "Flux Disruptor (Tether Setup)",
                            "Must be activated before the fight starts. Reassignment occurs throughout the fight at phase transitions.",
                            "A special action skill is available in the arena before engaging. The tank and three designated Pylon Kiters must activate it. Pylon tethers apply Erratic Energy, a 5% increased damage taken debuff.",
                            "Only the tank and three Pylon Kiters activate Flux Disruptor initially. All other players must NOT activate it. The tank tethers to Qadim (closest player with active Flux Disruptor). Each Pylon Kiter tethers to their assigned pylon. At Phase 4 through Phase 6 additional players activate or deactivate as directed by the strategy.",
                            "Wrong players activating Flux Disruptor breaks pylon tether assignments, preventing shield strip and causing squad-wide damage.",
                            "Non-designated players activating Flux Disruptor at fight start; failing to manage activation/deactivation at later phase transitions."
                        },
                        {
                            "Orb Collection and Good Tether",
                            "Starting at 95% HP, an orb fires every 5% HP from 95% to 40% (skipping the 80% and 60% fire phases).",
                            "A red arrow points from Qadim toward one of three landing zones around the arena. Orbs travel toward the landing zone and must be intercepted by a Pylon Kiter.",
                            "The appropriate Pylon Kiter intercepts the orb before it lands and immediately returns it to their pylon. Use teleport skills to move quickly. Each caught orb adds a Secondary Good Tether stack to that pylon — Good Tethers increase Qadim's damage taken by 5% per stack (maximum 10 stacks = 50% increased damage taken).",
                            "If an orb lands without being caught or is grabbed by an Anomaly, the squad takes heavy damage. Failing to build Good Tether stacks significantly increases the time required to kill Qadim.",
                            "Hesitating on pickup; not returning to the pylon immediately after catching; kiters being too far from the orb landing zone."
                        },
                        {
                            "Force of Havoc (Carpet)",
                            "After Force of Retaliation in each main phase. The tank is selected as the placement anchor.",
                            "Qadim creates a long rectangular AoE path on the ground that persists for 20 seconds. It may visually disappear due to a known bug — the area remains deadly regardless.",
                            "The tank alternates carpet placement between two pre-defined safe locations away from the pylons and the squad stack. All other players avoid the carpet zone. Do not let the carpet touch a pylon — if it does, that pylon is reclaimed by Qadim and its breakbar must be re-broken.",
                            "Anyone standing in the carpet takes massive damage. A pylon caught in the carpet is reclaimed, adding an additional pylon break to the phase.",
                            "Tank placing carpet on the same spot twice (must alternate); carpet clipping a pylon; group standing in the carpet path."
                        },
                        {
                            "Anomalies",
                            "First spawn at 75% HP, then every 40 seconds. During Phases 4 and 5 spawn rate increases to every 30 seconds.",
                            "A purple-black void telegraph appears at orb spawn points. An Anomaly creature then walks toward Qadim.",
                            "Break the Anomaly's defiance bar and kill it before it reaches Qadim. Anomalies that walk through active fire zones on the ground are automatically destroyed — use fire placement to cover their paths. If an Anomaly cannot be guided into fire, the squad must manually focus and kill it. During pylon rebreak phases all living Anomalies walk directly toward Qadim — kill them before breaking pylons.",
                            "Any Anomaly that reaches Qadim powers him up, increasing difficulty. Multiple Anomalies reaching him can cause a wipe.",
                            "No assigned player responsible for Anomalies; breaking Anomaly CC bars too early before fire placement is ready; leaving Anomalies alive when entering a pylon break phase."
                        },
                        {
                            "Skyhammer",
                            "Starting in Phase 1 at approximately 90% HP. Repeats periodically. The tank is immune.",
                            "A random player is targeted by a barrage of lightning. Three orange circles appear and grow progressively larger around that player's position.",
                            "Immediately run away from the group toward the arena edge. The circles do not move with you — they stay at the location where you were when targeted. Keep running until you are clear. On the final (largest) circle, be prepared to dodge or use swiftness to escape cleanly.",
                            "Heavy damage from each circle. If you remain in the group the circles hit multiple players. The final large circle requires active avoidance.",
                            "Not moving away from the group fast enough; using dodge too early before the final circle; standing still thinking it will follow you."
                        },
                        {
                            "Force of Retaliation",
                            "After all pylons are broken at 100%, 80%, and 60% HP; and after Qadim flies to each pylon at 40%, 30%, and 20% HP.",
                            "A shockwave radiates outward from Qadim immediately after pylon events.",
                            "Dodge the shockwave or use blocking abilities. Groups often pre-stack at the edge of a fire zone and use shared stability or blocks (such as Stand Your Ground) to ride through it safely.",
                            "Being hit knocks players backward, potentially into fire zones or off safe areas.",
                            "Not dodging; poor positioning that leaves no safe direction to be knocked toward."
                        },
                        {
                            "Poisoned Power",
                            "Occurs occasionally during Phase 2 (80%-60%) when Qadim targets a pylon.",
                            "Qadim channels a purple beam directly at one of the pylons. A defiance bar appears on that pylon.",
                            "The Pylon Kiter assigned to that pylon must immediately break its defiance bar within 10 seconds using all available CC skills.",
                            "Failing to break the bar in time applies Enfeebled Force to the kiter (inflicting weakness, vulnerability, cripple, and bleeding repeatedly). Qadim may reclaim the pylon if the bar is not broken.",
                            "Pylon Kiter not being near their pylon when Poisoned Power triggers; not having CC skills ready."
                        },
                        {
                            "Bad Tether System (Phases 4-6)",
                            "Phase 4 begins at 40% HP when Qadim destroys the north pylon. Continues through Phases 5 and 6.",
                            "Players with active Flux Disruptors receive Primary or Secondary Bad Tether debuffs from Qadim. Primary Bad Tethers fix directly to Qadim; Secondary Bad Tethers spread from Primary Tether players (up to 3 Secondary per Primary).",
                            "Designated tether players keep their Flux Disruptors active and separate from the DPS group. Tethered players stand at the tank's side at the inner circle edge and stay at range. All non-designated players deactivate Flux Disruptor before Phase 6 lockup to limit how many players receive Bad Tethers.",
                            "Bad Tethers spreading to damage dealers reduces the squad's overall damage output, extending the fight dangerously toward enrage.",
                            "Non-designated players forgetting to deactivate Flux Disruptor; tethered players mixing with the DPS group and spreading Bad Tethers."
                        },
                    },
                    {
                        { "Chaos Currents", "Throughout the fight, electric currents flow along white lines on the arena floor. Avoid standing on the moving current paths — contact deals heavy damage, weakness, and burning." },
                        { "Fire Phase (80% and 60% HP)", "At 80% Qadim lifts all players and an expanding white circle appears. The squad must immediately move to the designated fire stack location (left side at 80%, right side at 60% for standard groups). Standing in the wrong location drops deadly fire circles. After the fire phase pylons regain breakbars and must be re-broken. Fire zones placed correctly also serve as Anomaly destruction paths." },
                        { "Buff Stripping (Phase 6)", "In Phase 6 (20%-0%) Qadim gains protective buffs at regular intervals. Assign dedicated strip players (Chronomancer Mind Spike, Scourge Feast of Corruption, or Renegade Banish Enchantment) to remove these buffs continuously. Failure to strip reduces incoming damage significantly." },
                        { "Good Tether Stack Optimization", "Building maximum Good Tether stacks (10 stacks = 50% damage increase on Qadim) allows high-DPS groups to skip Phases 4 and 5 entirely by burning Qadim past 40% and 30% before the pylon destruction mechanics trigger. Each pylon supports up to 3 Secondary Good Tethers via orb catches in addition to its Primary Tether." },
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
                    "Decima the Stormsinger",
                    {
                        {
                            "Conduit Charging System",
                            "Active throughout all phases. Uncharged conduit pylons ring the arena; each can hold up to 3 charge stacks.",
                            "Conduits gain charge whenever a beam or arrow attack passes through them. A conduit at 3 stacks (triple-charged) is the most dangerous state. Track charge levels at all times.",
                            "Coordinate kiter positioning so that arrow and beam attacks charge the minimum number of conduits. Never let multiple conduits reach triple charge simultaneously. Going into an intermission phase with multiple triple-charged conduits is the primary wipe condition.",
                            "Triple-charged conduits at intermission create massive Fulminate and Flux Nova damage and add excessive Discord stacks to Phase 3, making the phase nearly unmanageable.",
                            "Careless positioning allowing unintended conduit charges; losing track of charge levels mid-fight; kiter placing arrows over already-charged conduits."
                        },
                        {
                            "Fluxlance – Orange Arrow (Kiter Mechanic)",
                            "Phase 1: fires once after auto-attacks. Phase 2: fires as 5x Fusillade (Fluxlance Fusillade), then 4x later in the cycle. Phase 3: 5x fires simultaneously rather than sequentially.",
                            "An orange arrow indicator appears beneath the furthest player(s) from Decima. A 5-second cast plays before the beam fires. In Phase 2+, numbers 1–5 appear above the five furthest players indicating firing order. Standing inside the boss's red proximity ring applies Harmonic Sensitivity, which amplifies the first arrow hit by ~25%.",
                            "Arrow baiters (the 5 furthest players in Phase 2+) stand just outside the boss's red AoE ring. Position each arrow so its beam path runs between two conduits without hitting either. In Phase 2 beams fire sequentially with 5-second intervals — you can outheale them. In Phase 3 all five fire simultaneously — Barrier and Protection are critical. If you are unexpectedly targeted, quickly find the nearest pair of uncharged conduits and stand between them; you will gain Galvanic Sensitivity and cannot soak Sparks for 30 seconds.",
                            "Any conduit in the beam path gains a charge. Baiters hit outside their intended position take excessive damage. Non-baiters hit by arrows gain Galvanic Sensitivity and cannot soak Sparks.",
                            "Baiters stepping into the boss red ring (Harmonic Sensitivity); poorly angled arrows charging conduits; non-baiters drifting into beam paths."
                        },
                        {
                            "Red Arrow (Kiter Instant-Kill Beam)",
                            "After both jumping attacks (Seismic Crash and Earthrend) each cycle — targets the same furthest player as the Orange Arrow.",
                            "A deep red arrow indicator appears at the targeted player's feet. That player's screen border turns deep red and they hear the voice line 'Need cover.' The beam fires in 5 seconds and is instant-kill to anyone in its path. Note: this beam can de-render on low Character Model Limit settings.",
                            "The kiter must immediately teleport or move to place an uncharged conduit directly between themselves and Decima before the beam fires. Use teleport skills (Sand Swell, Shadowstep, Mimic+Blink). Do not move excessively horizontally after placement — this can cause the beam to clip other players. The beam applies a barrier to the targeted player as a reward for surviving correctly.",
                            "Instant death to the targeted player and anyone in the beam path. The conduit used for cover gains a charge.",
                            "Kiter reacting too slowly; selecting a charged conduit for cover; moving horizontally after placement and exposing other players to the beam path."
                        },
                        {
                            "Seismic Crash",
                            "After the Orange Arrow each cycle.",
                            "Decima leaps into the air and crashes down. Standing directly under her landing point is an instant kill. After landing, a knockback wave pushes all players outward until they hit a fence or natural stop.",
                            "Do not stand under Decima during the jump. Be inside her hitbox but not touching the central impact point to avoid lethal proximity damage. Dodge sideways or have Protection boons active to reduce the knockback. Seismic Crash is always immediately followed by Sparks releasing from powered conduits.",
                            "Instant death from direct landing impact. Players knocked into fences take ricochet damage. Poor positioning from the knockback misplaces the squad for the subsequent Spark collection.",
                            "Standing directly under Decima; not having Protection boons ready; being out of position for Sparks after the knockback."
                        },
                        {
                            "Sparks (Green Circles)",
                            "Released from powered conduits immediately after Seismic Crash each cycle. Also generated continuously during intermission phases.",
                            "Green orb circles travel from powered conduits toward Decima. Each Spark requires a minimum number of players to absorb it (indicated by a number on the circle). In Phase 2 and 3 players with Galvanic Sensitivity debuff take lethal damage from Sparks and cannot soak them.",
                            "Phase 1: All players except the kiter soak Sparks. Phase 2–3: Only the boss group (melee stack) can safely soak — sensitized players must stay clear. Multiple players absorbing a Spark dissipate it faster; never solo-soak unless necessary. Players can 'wiggle in and out' of a Spark to slow its movement without taking damage if needed to stall until more players are available.",
                            "If a Spark reaches Decima she gains one stack of Charge. At 10 stacks of Charge the squad wipes instantly.",
                            "Sensitized players attempting to soak; allowing Sparks to reach the boss; too few players assigned to soak in Phase 2–3 because sensitized players outnumber safe players."
                        },
                        {
                            "Fulgent Fences",
                            "After conduit summoning each phase. Fence pattern changes after each Arrow attack cycle.",
                            "Glowing barriers link conduits and partition the arena into sections. Walking into a fence causes knockback and ricochet damage. In Phase 3 a pattern can appear with no ground-level openings at all.",
                            "The kiter must use teleport skills (Sand Swell, Shadowstep, Mimic+Blink) to cross fence barriers — they cannot be walked through. The main squad avoids fence knockback zones during repositioning. In Phase 3 with no openings the kiter must teleport entirely.",
                            "Kiter trapped outside the arena by fences misplaces arrows and cannot cover the Red Arrow beam. Players knocked into fences take additional ricochet damage.",
                            "Kiter attempting to walk through fences without a teleport ready; not recognizing the no-opening Phase 3 pattern; running backward into a fence while avoiding spreads."
                        },
                        {
                            "Intermission Phases (75% and 40% HP)",
                            "Occurs at 75% and 40% HP. Lasts approximately 20 seconds regardless of defiance bar status.",
                            "Decima becomes damage-immune and channels while her defiance bar appears. Sparks generate continuously from all powered conduits. Galvanic Sensitivity is removed from all players during this window.",
                            "The entire squad focuses on collecting Sparks to contribute to breaking Decima's defiance bar — since Galvanic Sensitivity is cleared all players can soak safely. Do not let any Spark reach Decima, as it fully regenerates the defiance bar. Stack centrally for healing.",
                            "A Spark reaching Decima resets the defiance bar completely. Multiple triple-charged conduits surviving into the intermission dramatically increases the Fulminate and Flux Nova explosion damage that follows.",
                            "Players spreading to avoid Sparks instead of soaking; letting even one Spark reach Decima during the defiance bar phase."
                        },
                        {
                            "Fulminate and Flux Nova (Intermission End)",
                            "Immediately when the intermission concludes — either after 20 seconds or when the defiance bar is broken.",
                            "Decima's orb and all conduits explode simultaneously in a massive raid-wide damage event.",
                            "Stack tightly for coordinated burst healing and barrier coverage. Ensure no triple-charged conduits remain entering this moment. Each triple-charged conduit that is destroyed applies an unnamed debuff to the squad and gives Decima 5 stacks each of Peal of Harmony and Discord — multiple triple-charge stacks make Phase 3 near-unwinnable.",
                            "Multiple triple-charged conduits cause wipe-level damage and/or unmanageable Discord stacks going into Phase 3.",
                            "Spreading instead of stacking for burst healing; allowing multiple triple-charged conduits to carry into the explosion."
                        },
                        {
                            "Focused Fluxlance – Green Arrow (Phase 3)",
                            "Phase 3 only (40%-0% HP). Fires as the first arrow in each attack cycle, preceding the 5x Orange Arrows.",
                            "A sixth, green-colored arrow indicator appears, targeting the uncharged conduit closest to the opposite side of Decima from the furthest player. A Spread mechanic (Discordant Thunder) overlaps with this mechanic as Discord stacks increase — Protection boon negates the Spread damage.",
                            "The kiter stands on the opposite side of Decima from the main group to angle the Green Arrow near the melee stack. A minimum of 5 players must be standing inside the Green Arrow's AoE when it detonates. Run through the boss hitbox if needed — Decima will not perform lethal jumping attacks during the Green Arrow window. Use Sand Swell for mobility if available. Do not dodge inside the arrow as it prevents being counted.",
                            "Fewer than 5 players inside the Green Arrow applies an Exposed debuff to the entire squad AND the targeted conduit gains extra charge equal to the number of missing players (2 missing = triple-charge). In the final 10% of the fight this is a likely wipe condition.",
                            "Kiter poor positioning that places the Green Arrow too far from the melee group; players over-spreading during the overlapping Spread mechanic and failing to reach the arrow; hesitation when the arrow appears far away."
                        },
                    },
                    {
                        { "Discordant Thunder (Spreads)", "Whenever Arrow mechanics fire and Discord stacks are available, lightning strikes the five closest players. Spread moderately — up to 3 players can stack with mitigation. Can be evaded, blocked, or invulned. Protection boon entirely negates the damage and is the primary mitigation tool. Do not over-spread backward into conduits." },
                        { "Harmonious Thunder (Lightning Strikes)", "Decima gains one stack of Peal of Harmony for every 3% HP lost. Each stack triggers lightning strikes on the closest uncharged conduits relative to the furthest player. Kiter must anticipate which conduits will be struck based on current arrow positioning and Harmony stacks to avoid overcharging conduits." },
                        { "Earthrend", "Accompanies Seismic Crash — an outside-arena AoE that is an instant kill to anyone struck. Fires as part of the jumping attack sequence. Avoid the telegraph zone." },
                        { "Kiter Role Requirements", "The dedicated kiter must have at least one teleport skill (Sand Swell, Shadowstep, or Mimic+Blink) to cross Fulgent Fences and reach Red Arrow cover conduits in time. The kiter is isolated from normal healing — squad must provide boon support (Protection, Regeneration) to keep them alive through Galvanic Sensitivity stacks and arrow hits." },
                        { "Enrage and Composition", "Decima enrages at 10 minutes. Run 2–3 healers (Scourge, Druid, Firebrand, or Chronomancer) with dual sources of Protection and Stability. No hard ranged DPS requirement exists despite Arrow bait roles." },
                    }
                },
                {
                    "Greer the Blightbringer",
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
                    "Ura the Steamshrieker",
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
