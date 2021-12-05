//
// Created by Shandy Mephesto on 8/29/21.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	~Ice();
	Ice (Ice &ice);
	Ice &operator = (Ice &ice);

	void use(ICharacter& target);
	AMateria* clone() const;
};


#endif
