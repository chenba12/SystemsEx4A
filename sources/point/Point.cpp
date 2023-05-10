#include <iostream>
#include <complex>
#include "Point.hpp"


using namespace ariel;

Point::Point(double x, double y) : x(x), y(y) {}

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
    std::cout << "(" << this->x << "," << this->y << ")" << std::endl;
}

Point ariel::moveTowards(Point &src, Point &dest, double distance) {
    return {0, 0};
}



