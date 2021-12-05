#include <cstring>
#include <iostream>
#include "whatever.hpp"

class Awesome {
public:
	Awesome (int n): _n(n){}
	bool operator == (Awesome const &rhs) const { return (this->_n == rhs._n);}
	bool operator != (Awesome const &rhs) const { return (this->_n != rhs._n);}
	bool operator > (Awesome const &rhs) const { return (this->_n > rhs._n);}
	bool operator < (Awesome const &rhs) const { return (this->_n < rhs._n);}
	bool operator >= (Awesome const &rhs) const { return (this->_n >= rhs._n);}
	bool operator <= (Awesome const &rhs) const { return (this->_n <= rhs._n);}
	int getN(){ return _n;}

private:
	int _n;
};

int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "swap" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "swap" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;

	float e = 2.3;
	float f = 3;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "swap" << std::endl;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	Awesome i(1);
	Awesome g(2);
	std::cout << "i = " << i.getN() << ", g = " << g.getN() << std::endl;
	std::cout << "swap" << std::endl;
	::swap(i, g);
	std::cout << "i = " << i.getN() << ", g = " << g.getN() << std::endl;
	Awesome awesomeMin = ::min(i, g);
	Awesome awesomeMax = ::max(i, g);
	std::cout << "min( e, f ) = " << awesomeMin.getN() << std::endl;
	std::cout << "max( e, f ) = " << awesomeMax.getN() << std::endl;

	return 0;
}