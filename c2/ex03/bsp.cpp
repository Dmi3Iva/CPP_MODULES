#include "Point.hpp"	
	
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    
    // std::cout << a.getX() - point.getX() << std::endl;
    // std::cout << b.getY() - a.getY() << std::endl;
    // std::cout << (b.getX() - a.getX()) << std::endl;
    // std::cout << a.getY() - point.getY() << std::endl << std::endl;

    // (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
    Fixed first ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY()));
    // (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
    Fixed second ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY()));
    // (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)
    Fixed third ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY()));

    Fixed zero(0);

    // std::cout
    //     << "first : " << first << std::endl
    //     << "second : " << second << std::endl
    //     << "third : " << third << std::endl
    //     <<std::endl;

    // If first, second and third values have the same sings, then it means the point is inside the triangle - return true
    // If some values have different signs, then it means the point is outside - return false
    // If some of the values are zero then it means the dot on the edge - return false
    if (
        (first > zero && second > zero && third > zero) ||
        (first < zero && second < zero && third < zero)
    )
        return true;
    else
        return false;

}
