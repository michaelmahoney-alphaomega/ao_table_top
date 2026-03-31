#include "include/action_engine.h"
#include "include/engine.h"

Trigger Action_Engine (Action action) {
    
};

struct Trigger {
    Action action;
    Actor* action_target;
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
