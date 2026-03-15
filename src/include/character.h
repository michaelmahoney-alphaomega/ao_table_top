#include "actor.h"


class Character : public Actor {
    public:
        Character();
        ~Character();

    private:
    // location info
        float location_x = 0;
        float location_y = 0;
        float location_z = 0;

        // Action
        Action action;


};