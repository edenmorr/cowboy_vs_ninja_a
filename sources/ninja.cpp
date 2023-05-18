#include "ninja.hpp"
#include <iostream>
#include <string>
#include "Character.hpp"

using namespace std;
namespace ariel
{
    ninja::ninja(Point location,string name,int life,int speed):Character(location,life,name),speed(speed){}

  
    void ninja::slash(Character* enemy)
    {
    }
    void ninja::move(Character* enemy)
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
     string print = "";
        print +=this-> name + ": is a Ninja\n";
        print += "life left: " + to_string(Point_of_impact);
        // print += "\nlocation: "+ to_string(location) + "\n";
        return print;
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