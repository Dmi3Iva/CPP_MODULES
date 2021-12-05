//
// Created by Shandy Mephesto on 9/12/21.
//

#include "iter.hpp"
#include <iostream>

class Awesome {
public:
	Awesome(void): _n(42) {return;}
	int get(void) const {return this->_n;}
private:
	int _n;
};

std::ostream &operator << (std::ostream &o, Awesome const &rhs) {
	o <<rhs.get();
	return o;
}

template<typename T>
void print(T const &x) {std::cout << x << std::endl;return;}

int main()
{
	int pInt[] = {2342, 23543, 5345, 24, 234, 2342};
	float pFloat[] = {123.2, 12.123, 5464.243 };

	std::cout << "print values" << std::endl;

	std::cout << "print ints" << std::endl;
	iter(pInt, 6, &print);
	std::cout << "print float" << std::endl;
	iter(pFloat, 3, &print);
	std::cout << std::endl << "Class and array output" << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab,5, print);
	iter(tab2, 5, print);

	return 0;
}