#include "include/event_engine.h"
#include "include/engine.h"


// struct Interaction{
//     Interaction_Type type;
//     int range;
//     std::string roll_stat;
//     std::string roll_dice;
//     std::string check_stat;
//     std::string check_dice;
// };


Trigger Action_Engine (Action action) {
    
    switch (action.interaction) {

        case Interaction::MeleeAttack:

            bool in_melee_range = action.origin_actor.get_distance_to_actor(action.destination_actor);

            if (in_melee_range) {
                int error_count = 0;

                while (error_count < 6) {
                    Error error = action.origin_actor.attack(action.destination_actor);                

                    if (Error::No_Error == error) {
                        Error e = Error::No_Error;
                    }
                    
                };

            }

            
    }
};

struct Trigger {
    Interaction interaction;
    Actor action_target;
    Trigger(Interaction a, Actor b) : interaction(a), action_target(b) {}
};

class Trigger_Engine{

};

class Visibility_Engine{
    public:
        Visibility_Engine();        
        ~Visibility_Engine();        
        
        bool line_of_sight(Actor actor1, Actor actor2){
            return true;
        };

        bool line_of_effect(Actor actor1, Actor actor2){
            return true;
        };
};

class Map_Engine{

};

class Event_Engine{
    public:
        Event_Engine();
        ~Event_Engine();
        

};
