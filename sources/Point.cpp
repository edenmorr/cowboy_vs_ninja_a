#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include <cmath>

using namespace std;
namespace ariel{ 
Point::Point(){
    this->x=0.0;
    this->y=0.0;
}
Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double xCoord) {
    x = xCoord;
}

void Point::setY(double yCoord) {
    y = yCoord;
}

double Point::distance(Point point) {
    double dx = x - point.getX();
    double dy = y - point.getY();
    return sqrt(dx * dx + dy * dy);
}
void Point::print(){
    cout<< "(" << x << "," << y << ")" << endl;
}
Point Point::moveTowards(Point source, Point destination, double distance){
    // double dx = destination.x - source.x;
    // double dy = destination.y - source.y;
    // double currentDistance = sqrt(dx * dx + dy * dy);
    // if (currentDistance <= distance) {
    //     return destination;
    // } else {
    // double ratio = distance / currentDistance;
    // double newX = source.x + dx * ratio;
    // double newY = source.y + dy * ratio;
return Point(x,y);
}
}


