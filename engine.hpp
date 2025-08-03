#include <iostream>
#include <cmath>
#include <string>

#ifndef ENGINE_HPP
#define ENGINE_HPP

enum Result 
{
    Error,
    Success
};

enum Action 
{
    Attack,
    Defend,
    Ready_Action,
    Skill_Check
};

class Engine 
{
    public:
        Engine();
        ~Engine();
        
        Result run_round();

        
    
    private:
    

    


};

int engine()
{
    std::string name;
    std::string dump;
    double number;

    std::cout << "Enter you name: ";
    std::cin >> name;
    
    std::string phrase = "Hello, " + name;
    std::cout << phrase << std::endl;
    
    std::cin >> dump;
    

    return 0;
}

#endif