#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

public:
    Point();
    ~Point();
    Point(const Point &p);
    Point(const float x, const float y);
    void operator = (const Point &p);
    const Fixed getX(void) const;
    const Fixed getY(void) const;

private:
    const Fixed _x;
    const Fixed _y;

};

std::ostream &operator << (std::ostream& os, Point const &p);

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif