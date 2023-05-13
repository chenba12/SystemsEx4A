#include <iostream>
#include <complex>
#include "Point.hpp"


using namespace ariel;

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point() : x(0), y(0) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::distance(const Point &point) const {
    double xDiff = this->x - point.x;
    double yDiff = this->y - point.y;
    return std::sqrt(xDiff * xDiff + yDiff * yDiff);
}

std::string Point::print() const {
    return "(" + std::to_string(this->x) + "," + std::to_string(this->y) + ")";
}

//TODO fix this
Point ariel::moveTowards(const Point &src, const Point &dest, double distance) {
    return {0, 0};
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}




