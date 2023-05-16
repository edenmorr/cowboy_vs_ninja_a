#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
#include <cmath>
#include <string>

using namespace std;
namespace ariel{ 

Character::Character(const string& name, int hitPoints, const Point& location)
    : name(name), Point_of_impact(hitPoints), location(location) {}

bool Character::isAlive() {
    return Point_of_impact > 0;
}

double Character::distance(const Character& other) const {
    return this->distance(other);
}
void Character::hit(int damage) {
    // Point_of_impact -= damage;
    // if (Point_of_impact < 0) {
    //     Point_of_impact = 0;
    // }
}

std::string Character::getName() const {
    return name;
}

Point Character::getLocation() const {
    return location;
}

void Character::print() const {
    std::cout << "Character: " << name << std::endl;
    std::cout << "Hit Points: " << Point_of_impact << std::endl;
    std::cout << "Location: ";
    // Point.print();
}

}