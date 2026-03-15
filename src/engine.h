#include "include/character.h"
#include "include/action.h"
#include "event_engine.h"

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Engine 
{
    public:
        Engine(
            vector<Character> character_manifest, 
            vector<Actor> actor_manifest,
            vector<Action> action_manifest
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
        vector<Character> characters;
        vector<Actor> actors;
        Map map; 

        EventEngine Event_Engine();
        Game_State GameState Game_State();

        void create_game_state(vector<Character> character_manifest, vector<Actor> actor_manifest);
        void create_event_engine(vector<Character> character_manifest, vector<Actor> actor_manifest);

        void create_map(int height, int width);
        void create_map_state(vector<Character> character_manifest, vector<Actor> actor_manifest);
        
        void create_actor_state(vector<Actor> actor_manifest);
        void create_character_state(vector<Character> character_manifest, vector<Actor> actor_manifest);

        void initialize_turn_order(vector<Character> character_manifest);

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