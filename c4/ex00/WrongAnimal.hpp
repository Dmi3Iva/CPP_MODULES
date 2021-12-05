//
// Created by Shandy Mephesto on 8/26/21.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &animal);
	WrongAnimal& operator = (const WrongAnimal& animal);

	void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};


#endif
