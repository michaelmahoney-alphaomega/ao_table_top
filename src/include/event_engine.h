#include <vector>
#include "include/actor.h"

enum Interaction {
    MeleeAttack,
    RangedAttack,
    Spell_Damage,
    Spell_Mind,
    Defend
};
struct Action {
    Interaction interaction;
    Actor origin_actor;
    Actor destination_actor;   
};

class Event_Engine {
    public:
        Event_Engine();
        ~Event_Engine();
    
    private:
        
}

