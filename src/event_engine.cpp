#include "include/event_engine.hpp"
#include "include/engine.hpp"

enum Interaction_Type {
    Attack,
    Defend
};

struct Interaction{
    Interaction_Type type;
    std::string roll_stat;
    std::string roll_dice;
    std::string check_stat;
    std::string check_dice;
};

struct Action {
    Interaction interaction;
    Actor origin_actor;
    Actor destination_actor;   
};

Trigger Action_Engine (Action action) {
    
    switch (action.interaction) {
        case Interaction::Attack:
            
    }
};

struct Trigger {
    Interaction interaction;
    Actor action_target;
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

};
