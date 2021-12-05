//
// Created by Shandy Mephesto on 8/29/21.
//

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice created" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructed" << std::endl;
}

Ice::Ice(Ice &ice)
{
	*this = ice;
}

Ice &Ice::operator=(Ice &ice)
{
	(void)ice;
	return *this;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice();
}
