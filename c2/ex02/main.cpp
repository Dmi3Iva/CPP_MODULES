#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a;
	Fixed c(1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "c:" << c << std::endl;

	std::cout << "float:" << Fixed(5.05f) * Fixed(2) << std::endl;

	std::cout << b << std::endl;
	std::cout << "4.123 + 1 = " << Fixed(4.123f) + Fixed(1) << std::endl;
	std::cout << Fixed(5.05f) * Fixed(2) << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "12370 / 20.5f = " << Fixed(12370) / Fixed(20.5f) <<
	std::endl;

	return 0;
}
