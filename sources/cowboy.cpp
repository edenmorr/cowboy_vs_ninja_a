#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include <cmath>
#include <string>
#include "Cowboy.hpp"
#include "Character.hpp"

namespace ariel{ 
Cowboy::Cowboy(string name,Point location):Character(location,110,name),bullets(6){}


void Cowboy::shoot(Character* enemy) {
    // Check if the Cowboy is alive and has bullets remaining
    // If so, shoot the enemy, subtract 10 from the enemy's health, and decrease the bullet count by 1
    // Implementation omitted for brevity
}

bool Cowboy::hasBullets() const {
    return bullets > 0;
}

void Cowboy::reload() {
    bullets = 6;
}
string Cowboy::print(){
    string print;
    return print;
}
}
