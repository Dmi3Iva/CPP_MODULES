//
// Created by Shandy Mephesto on 8/26/21.
//

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
	std::cout << "WrongDog " << type << " was created" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog " << type << " was destructed" << std::endl;
}

WrongDog::WrongDog(const WrongDog &animal)
{
	*this = animal;
}

WrongDog& WrongDog::operator = (const WrongDog& animal)
{
	type = animal.type;
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << "Woof, woof, woof :0" << std::endl;
}
