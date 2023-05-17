#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include <cmath>
#include <string>
#include "cowboy.hpp"
#include "Character.hpp"
namespace ariel{ 
cowboy::cowboy(string name ,Point location):bullets(6), damage(10) {}


void cowboy::shoot(Character* enemy) {
    // Check if the cowboy is alive and has bullets remaining
    // If so, shoot the enemy, subtract 10 from the enemy's health, and decrease the bullet count by 1
    // Implementation omitted for brevity
}

bool cowboy::hasBullets() const {
    return bullets > 0;
}

void cowboy::reload() {
    bullets = 6;
}
string cowboy::print(){
    
}

}
