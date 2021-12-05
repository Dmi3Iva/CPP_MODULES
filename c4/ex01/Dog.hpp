//
// Created by Shandy Mephesto on 8/26/21.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	Dog();
	~Dog();
	Dog(const Dog &animal);
	Dog& operator = (const Dog& animal);

	void makeSound() const;
	Brain *getBrain();

private:
	Brain *_brain;
};


#endif
