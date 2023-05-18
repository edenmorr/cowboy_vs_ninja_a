#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <cmath>
#include <string>
#include "Cowboy.hpp"

namespace ariel{ 

Cowboy::Cowboy(string name,Point location):Character(location,110,name),bullets(6){}

void Cowboy::shoot(Character* enemy) {
 
}

bool Cowboy::hasBullets() const {
    return bullets > 0;
}

void Cowboy::reload() {
}

string Cowboy::print(){
    string print = "";
    print +=this-> name + ": is a Cowboy\n";
    print += "life left: " + to_string(Point_of_impact);
    // print += "\nlocation: "+ to_string(location) + "\n";
    return print;
}
}
