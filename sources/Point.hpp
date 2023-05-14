#pragma once

#include "iostream"

namespace ariel {
    class Point {
    private:
        double xVal;
        double yVal;

    public:
        Point(double xVal, double yVal);

        Point();

        bool operator==(const Point &otherPoint) const;

        bool operator!=(const Point &otherPoint) const;

        double distance(const Point &otherPoint) const;

        friend Point moveTowards(const Point &src, const Point &dest, double distance);

        double getX() const;

        double getY() const;

        std::string print() const;

    };
}