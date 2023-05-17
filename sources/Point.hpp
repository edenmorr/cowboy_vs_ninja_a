#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;
namespace ariel{
class Point{

private:
double x;
double y;
 
public:
// Point();
Point(double xcoord, double ycoord);
double getX() const;
double getY() const;
void setX(double xCoord);
void setY(double yCoord);
double distance(Point points);
void print();
Point moveTowards(Point source, Point destination, double distance);
    };
}