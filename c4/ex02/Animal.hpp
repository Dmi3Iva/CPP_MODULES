//
// Created by Shandy Mephesto on 8/26/21.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal& operator = (const Animal& animal);

	virtual void makeSound() const = 0;
	std::string getType() const;

protected:
	std::string type;
};


#endif
