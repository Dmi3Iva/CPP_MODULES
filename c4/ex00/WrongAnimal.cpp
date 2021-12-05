//
// Created by Shandy Mephesto on 8/26/21.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal " << type << " was created"<< std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal " << type << " was created"<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " was destructed"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& animal)
{
	type = animal.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Not implemented method" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}