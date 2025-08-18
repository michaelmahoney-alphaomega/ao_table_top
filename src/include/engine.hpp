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

class Map {
    int x;
    int y;
};

enum Error {
    GeneralError
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
        coordinates location;
        int hp;
        int att;
        int dam;
};

class Character : public Actor {
    public:
        Character();
        ~Character();

    private:
    

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