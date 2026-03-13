#include "include/character.h"
#include "include/action.h"

#include <iostream>
#include <cmath>
#include <string>
#include <vector>


class Engine 
{
    public:
        Engine(
            std::vector<Character> character_manifest, 
            std::vector<Actor> actor_manifest,
            std::vector<Action> action_manifest
        ) {

        };

        ~Engine();
        Error create_map(int height, int width, int depth);
        Error assign_map_terrain(int map_arr[5][5][5]); // an int 3D array that designates a type of terrain for each square on the map
        Error run_round();
    
    private:

        int round;
        int character_count;
        Character* whos_turn;
        std::vector<Character> characters;
        Map map; 

        void create_map(int height, int width);
        void initialize_turn_order(std::vector<Character> character_manifest);
        void create_map_state(std::vector<Character> character_manifest, std::vector<Actor> actor_manifest);
        void create_character_state(std::vector<Character> character_manifest, std::vector<Actor> actor_manifest);
        void create_event_state(std::vector<Character> character_manifest, std::vector<Actor> actor_manifest);
        void create_event_engine(std::vector<Character> character_manifest, std::vector<Actor> actor_manifest);

};
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
    No_Error,
    ActionEntineError,
    TriggerEngineError,
    MapError,
    VisibilityEngineError,
    GameStateError,
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