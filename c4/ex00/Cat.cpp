//
// Created by Shandy Mephesto on 8/26/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat " << type << " was created"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " was destructed"<< std::endl;
}

Cat::Cat(const Cat &animal)
{
	*this = animal;
}

Cat& Cat::operator = (const Cat& animal)
{
	type = animal.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow, meow, meow :3" << std::endl;
}