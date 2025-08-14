# Overview
This is a simple project to create an unsophistocated table-top game engine. This is just the engine component and does not include the UI or any networking features.

## Chore List
1. Finish the general skeleton: classes, enums and structs
2. Begin work on the main engine::Engine() constructor workflow. This will make clear what initial things need to be flushed out. go for a very basic game state object, can complexify later.
3. Define a very basic Character class: hp, one att, dam for the attack, size of character, location, and hooks into each of thes properties
4. Create a very basic Action class
5. Skeleton out the action_engine: This should take in a stack of Actions and push triggers to the trigger stack
6. do number 5 but for trigger_engine