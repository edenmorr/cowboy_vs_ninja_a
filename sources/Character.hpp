#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include <cmath>
#include <string>
using namespace std;
namespace ariel{ 
class Character{

private:
Point location;
int Point_of_impact;
string name;


public:
bool isAlive();
Character(const std::string& name, int Point_of_impact, const Point& location);
double distance(const Character& other) const;
void hit(int damage);
string getName() const;
Point getLocation() const;
void print() const;
};
}