#pragma once

#include "iostream"

namespace ariel {
    class Point {
    private:
        double x;
        double y;

    public:
        Point(double x, double y);

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