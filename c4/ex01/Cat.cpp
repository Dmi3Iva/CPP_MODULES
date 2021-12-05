//
// Created by Shandy Mephesto on 8/26/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"),  _brain(new Brain())
{
	std::cout << "Cat " << type << " was created"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " was destructed"<< std::endl;
	delete _brain;
}

Cat::Cat(const Cat &animal)
{
	*this = animal;
}

Cat& Cat::operator = (const Cat& animal)
{
	type = animal.type;
	_brain = new Brain(*animal._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow, meow, meow :3" << std::endl;
}

Brain *Cat::getBrain()
{
	return _brain;
}
