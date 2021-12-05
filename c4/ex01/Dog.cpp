//
// Created by Shandy Mephesto on 8/26/21.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog " << type << " was created"<< std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << type << " was destructed"<< std::endl;
	delete _brain;
}

Dog::Dog(const Dog &animal)
{
	*this = animal;
}

Dog& Dog::operator = (const Dog& animal)
{
	type = animal.type;
	_brain = new Brain(*animal._brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof, woof, woof :0" << std::endl;
}

Brain *Dog::getBrain()
{
	return _brain;
}
