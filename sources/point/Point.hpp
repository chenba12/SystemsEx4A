#ifndef SYSTEMSEX4A_POINT_HPP
#define SYSTEMSEX4A_POINT_HPP

#include "iostream"

namespace ariel {
    class Point {
    private:
        double x;
        double y;

    public:
        Point(double x, double y);

        Point();

        bool operator==(const Point &rhs) const;

        bool operator!=(const Point &rhs) const;

        double distance(const Point &point) const;

        friend Point moveTowards(const Point &src, const Point &dest, double distance);

        double getX() const;

        double getY() const;

        std::string print() const;

    };
}


#endif //SYSTEMSEX4A_POINT_HPP
