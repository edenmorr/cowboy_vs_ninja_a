#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
#include <cmath>
#include <string>
namespace ariel{ 
class cowboy {

protected:
    int bullets;
    int damage;

public:
    cowboy(string name ,Point location);
    void shoot(Character* enemy);
    bool hasBullets() const;
    void reload();
 
    string print();
};
}
