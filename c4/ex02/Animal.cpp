//
// Created by Shandy Mephesto on 8/26/21.
//

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal " << type << " was created" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal " << type << " was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " was destructed"<< std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
}

Animal& Animal::operator = (const Animal& animal)
{
	type = animal.type;
	return *this;
}

std::string Animal::getType() const
{
	return type;
}