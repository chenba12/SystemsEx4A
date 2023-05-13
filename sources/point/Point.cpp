#include <iostream>
#include <complex>
#include "Point.hpp"


using namespace ariel;

/**
 * ctr
 * @param x coordinate
 * @param y coordinate
 */
Point::Point(double x, double y) : x(x), y(y) {}

/**
 * empty ctr default to (0,0)
 */
Point::Point() : x(0), y(0) {}

/**
 * check the distance between this point and otherPoint
 * @param otherPoint
 * @return the distance
 */
double Point::distance(const Point &otherPoint) const {
    double xDiff = this->x - otherPoint.x;
    double yDiff = this->y - otherPoint.y;
    return std::sqrt(xDiff * xDiff + yDiff * yDiff);
}

/**
 * @return a string representing the point between parenthesis
 */
std::string Point::print() const {
    return "(" + std::to_string(this->x) + "," + std::to_string(this->y) + ")";
}

//TODO fix this
Point ariel::moveTowards(const Point &src, const Point &dest, double distance) {
    return {0, 0};
}

/**
 * @param otherPoint
 * @return check if 2 points have the same values
 */
bool Point::operator==(const Point &otherPoint) const {
    return x == otherPoint.x &&
           y == otherPoint.y;
}
/**
 * @param otherPoint
 * @return check if 2 points don't have the same values
 */
bool Point::operator!=(const Point &otherPoint) const {
    return !(otherPoint == *this);
}

/**
 * @return current x value
 */
double Point::getX() const {
    return x;
}

/**
 * @return current y value
 */
double Point::getY() const {
    return y;
}



