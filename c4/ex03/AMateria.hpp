//
// Created by Shandy Mephesto on 8/29/21.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		const std::string type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria &aMateria);
		AMateria& operator = (AMateria &aMateria);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};



#endif
