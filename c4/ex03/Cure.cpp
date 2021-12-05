//
// Created by Shandy Mephesto on 8/29/21.
//

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure created" << std::endl;
};

Cure::~Cure()
{
	std::cout << "Cure destructed" << std::endl;
}

Cure::Cure(Cure &cure)
{
	*this = cure;
}

Cure &Cure::operator=(Cure &cure)
{
	(void)cure;
	return *this;
}

void Cure::use(ICharacter &iCharacter)
{
	std::cout << "* shoots an ice bolt at "<< iCharacter.getName() <<" *" <<
	std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure();
}

