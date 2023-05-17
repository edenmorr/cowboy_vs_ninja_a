#include "Ninja.hpp"
#include <iostream>
#include <string>
#include "Character.hpp"

using namespace std;
namespace ariel
{
    ninja::ninja(Point location,string name,int life,int speed):Character(name,Point_of_impact,location),speed(speed){}


    void move(Character* enemy)
    {
    }
    void ninja::slash(Character* enemy)
    {
    }
    void ninja::move(Character *enemy)
    {
    }
    int ninja::getSpeed()
    {
        return this->speed;
    }
    void ninja::setSpeed(int speed)
    {
        this->speed = speed;
    }
    string ninja::print()
    {
    
    }

    //OldNinja constructor
    OldNinja::OldNinja(string name, Point location)
        : ninja(location, name, 140, 8) {}

    //TrainedNinja constructor
    TrainedNinja::TrainedNinja(string name, Point location)
        : ninja(location, name, 120, 12) {}

    //YountNinja constructor
    YoungNinja::YoungNinja(string name, Point location)
        : ninja(location, name, 100, 14) {}
}