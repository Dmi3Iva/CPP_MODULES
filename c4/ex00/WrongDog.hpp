//
// Created by Shandy Mephesto on 8/26/21.
//

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	~WrongDog();
	WrongDog(const WrongDog &animal);
	WrongDog& operator = (const WrongDog& animal);

	void makeSound() const;
};


#endif
