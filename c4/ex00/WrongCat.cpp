//
// Created by Shandy Mephesto on 8/26/21.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << type << " was created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << type << " was destructed"<< std::endl;
}

WrongCat::WrongCat(const WrongCat &animal)
{
	*this = animal;
}

WrongCat& WrongCat::operator = (const WrongCat& animal)
{
	type = animal.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow, meow, meow :3" << std::endl;
}
