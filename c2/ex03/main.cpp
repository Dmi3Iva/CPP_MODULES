#include "Point.hpp"
#include <iostream>

int main( void ) {

	std::cout << "simple true case" << std::endl;
	{
		Point a(1, 1);
		Point b(2, 1);
		Point c(1, 2);
		Point p(1.1, 1.2);

		std::cout << "vertices:"<<std::endl
			<< "a: " << a << std::endl
			<< "b: " << b << std::endl
			<< "c: " << c << std::endl
			<< "p: " << p << std::endl
			<< std::endl << "is point inside ABC triangle?"
			<< std::endl;

			if(bsp(a, b, c, p)) 
				std::cout << "yes" << std::endl;
			else
				std::cout << "no" << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "hard true case" << std::endl;
	{
		Point a(4.6f, -1.02f);
		Point b(6.3, 4.38);
		Point c(12.14, 2.58);
		Point p(7.78, 2.38);

		std::cout << "vertices:"<<std::endl
			<< "a: " << a << std::endl
			<< "b: " << b << std::endl
			<< "c: " << c << std::endl
			<< "p: " << p << std::endl
			<< std::endl << "is point inside ABC triangle?"
			<< std::endl;

			if(bsp(a, b, c, p)) 
				std::cout << "yes" << std::endl;
			else
				std::cout << "no" << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "simple edge case" << std::endl;
	{
		Point a(1, 1);
		Point b(1, 100);
		Point c(50, 50);
		Point p(1, 50);

		std::cout << "vertices:"<<std::endl
			<< "a: " << a << std::endl
			<< "b: " << b << std::endl
			<< "c: " << c << std::endl
			<< "p: " << p << std::endl
			<< std::endl << "is point inside ABC triangle?"
			<< std::endl;

			if(bsp(a, b, c, p)) 
				std::cout << "yes" << std::endl;
			else
				std::cout << "no" << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "vertices case" << std::endl;
	{
		Point a(4.6f, -1.02f);
		Point b(6.3, 4.38);
		Point c(12.14, 2.58);
		Point p(4.6f, -1.02f);

		std::cout << "vertices:"<<std::endl
			<< "a: " << a << std::endl
			<< "b: " << b << std::endl
			<< "c: " << c << std::endl
			<< "p: " << p << std::endl
			<< std::endl << "is point inside ABC triangle?"
			<< std::endl;

			if(bsp(a, b, c, p)) 
				std::cout << "yes" << std::endl;
			else
				std::cout << "no" << std::endl;
	}

	return 0;
}
