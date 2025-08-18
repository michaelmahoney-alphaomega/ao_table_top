#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "include/engine.hpp"

enum Terrain {
    Fire,
    Water,
    Ground,
    Ice,
    Earth
};

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