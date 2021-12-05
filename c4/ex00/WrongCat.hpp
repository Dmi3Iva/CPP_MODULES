//
// Created by Shandy Mephesto on 8/26/21.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &animal);
	WrongCat& operator = (const WrongCat& animal);

	void makeSound() const;
};


#endif
