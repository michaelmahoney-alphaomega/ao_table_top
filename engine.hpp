#include <iostream>
#include <cmath>
#include <string>

#ifndef ENGINE_HPP
#define ENGINE_HPP

struct coordinates {
    float x;
    float y;
    float z;
};

enum Action_Type {
    Move,
    Standard,
    Swift,
    Immediate,
    Free,
};

class Action {

    public:
        Action();
        ~Action();
        
        Trigger* run_action(Action* self, Action* other_actor);
    
    private:
       std::string stat_name;
       Error set_stat(int* stat);
       int stat;
       
       std::string check_name;
       Error set_check(int* stat);
       int check;


        
    
};

class Trigger {

};

enum Error {
    GeneralError
};

// enum AcVtion 
// {
//     Attack,
//     Defend,
//     Ready_Action,
//     Skill_Check
// };

class Actor {
    public:
        Actor();
        ~Actor();
        
        Error move(coordinates coord);
        coordinates get_location();
        float get_distance_to_actor(Actor actor);

    
    private:
        coordinates location;



};

class Character : public Actor {

};

class Engine 
{
    public:
        Engine();
        ~Engine();
        
        Error run_round();

        
    
    private:
        int round;
        Character* whos_turn;
        Character* characters[];

    

    


};


#endif