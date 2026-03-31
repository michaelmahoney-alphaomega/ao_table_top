#include <vector>
#include "action.h"

using namespace std;

int Event_Engine (Trigger trigger) {
    
};

Trigger Event_Handler (Trigger trigger) {
     {

    }
};

struct Trigger {
    Action action;
    Actor* action_target;
};

class Trigger_Engine{

};

class Action_Engine {
    public:
        Action_Engine();
        ~Action_Engine();
        engine_run();

    
    private:
        vector<Action> _Action_Manifest;
};



