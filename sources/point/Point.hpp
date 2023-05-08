#ifndef SYSTEMSEX4A_POINT_HPP
#define SYSTEMSEX4A_POINT_HPP

namespace ariel {
    class Point {
    private:
        double x;
        double y;

    public:
        Point(double x, double y);

        double distance(const Point &point) const;

        friend Point moveTowards(Point &src, Point &dest, double distance);

        double getX() const;

        double getY() const;

        void print() const;

    };
}


#endif //SYSTEMSEX4A_POINT_HPP
