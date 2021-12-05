//
// Created by Shandy Mephesto on 8/29/21.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	~Cure();
	Cure (Cure &cure);
	Cure &operator = (Cure &cure);

	void use(ICharacter& target);
	AMateria* clone() const;
};


#endif //INC_4CPP_CURE_HPP
