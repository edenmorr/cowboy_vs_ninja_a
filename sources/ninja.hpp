#include "Character.hpp"
#pragma once

namespace ariel{
class ninja:public Character
    {
    private:
    int speed;
    int health;

    public:
    ninja(Point location,string name,int initialHealth, int initialSpeed);
    void move(Character* enemy);
    void slash(Character* enemy);

    //for tests
    int getSpeed();
    void setSpeed(int speed);
    string print();
    };
    //Ninja classification
    /*
        all the Ninjas have the same functions and parameters the only difference is the value 
        youngNinja speed 14 life 100
        Traind speed 12 life 120
        old speed 8 life 140 
    */
    class OldNinja:public ninja{
        public:
            OldNinja(string name, Point location);
    };

    class TrainedNinja:public ninja{
        public:
            TrainedNinja(string name, Point location);
    };
    
    class YoungNinja:public ninja{
        public:
            YoungNinja(string name, Point location);
    };
}