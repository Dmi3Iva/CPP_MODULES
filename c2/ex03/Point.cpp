    #include "Point.hpp"
    
    Point::Point() : _x(Fixed(0)), _y(Fixed(0)) { }

    Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) { }

    Point::~Point()
    {}

    Point::Point(const Point &p) : _x(p.getX()), _y(p.getY())
    {
    }
    
    void Point::operator = (const Point &p)
    {
        std::cout << "i'm okay"<< std::endl;
        ;
        std::cout << "i'm not dedad"<< std::endl;
    }

    Fixed const Point::getX() const
    {
        return _x;
    }
    Fixed const Point::getY() const
    {
        return _y;
    }

    std::ostream &operator << (std::ostream& os, Point const &p)
    {
        os << "x = " << p.getX() << " y = " << p.getY();
        return os;
    }