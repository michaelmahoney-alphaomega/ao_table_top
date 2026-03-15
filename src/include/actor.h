#include <vector>
#include "action.h"

using namespace std;

enum Size {
    Small,
    Medium,
    Large,
    Huge,
    Gargantuan,
    Colossal
};

class Actor {
    public:
        Actor();
        ~Actor();
        
        Error move(coordinates coord);
        coordinates get_location();
        int get_distance_to_actor(Actor actor);
        Error attack(Actor actor);
        Error create_attack(int att, int dam);
    

    private:
        // location information
        float location_x;
        float location_y;
        float location_z;
        
        //universal attributes
        int hp = 0;
        Size size_catetory = Size::Medium;
        vector<Action> actions;
};