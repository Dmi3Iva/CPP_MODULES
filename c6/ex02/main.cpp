//
// Created by Shandy Mephesto on 9/12/21.
//

#include <iostream>
#include <cstdlib>
#include <exception>

class Base {
public:
	virtual ~Base(){}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void)
{
	int random = std::rand() % 3;
	switch (random)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
	{
		std::cout << "It was A class!" <<std::endl;
	}
	else if (b)
	{
		std::cout << "It was B class!" <<std::endl;
	}
	else if(c)
	{
		std::cout << "It was C class!" <<std::endl;
	}
	else
	{
		std::cout << "Didn't identified class" <<std::endl;
	}
}

void identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It was A class!" <<std::endl;
	}
	catch (std::exception &e)
	{
		try{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "It was B class!" <<std::endl;
		}
		catch (std::exception &e)
		{
			try{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "It was C class!" <<std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Didn't identified class" <<std::endl;
			}
		}
	}
}

int main(void)
{
	std::srand(std::time(0));
	A a;
	B b;
	C c;
	Base base;

	std::cout << "Identify A B C Base classes in order by ref" << std::endl;
	identify(a);
	identify(b);
	identify(c);
	identify(base);

	std::cout << "Identify A B C Base classes in order by link" << std::endl;
	identify(&a);
	identify(&b);
	identify(&c);
	identify(&base);
	std::cout << std::endl;

	std::cout << "play random" << std::endl;
	Base *array[4];
	for (int i = 0 ; i < 4; ++i)
		array[i] = generate();

	std::cout << "identify by link" << std::endl;
	for (int i = 0; i < 4; ++i)
		identify(array[i]);

	std::cout << "identify by ref" << std::endl;
	for (int i = 0; i < 4; ++i)
		identify(*array[i]);

	for (int i = 0 ; i < 4; ++i)
		delete array[i];
	return 0;
}
