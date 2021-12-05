//
// Created by Shandy Mephesto on 8/29/21.
//

#include "AMateria.hpp"

AMateria::AMateria(): type("materia")
{
	std::cout << "AMateria created type:" << type << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructed type:" << type << std::endl;
}

AMateria::AMateria(std::string const &type): type(type)
{
	std::cout << "AMateria created type:" << type << std::endl;
}

AMateria &AMateria::operator=(AMateria &aMateria)
{
	(void)aMateria;
	std::cout << "Amateria unresolved method" << std::endl;
	return *this;
}

AMateria::AMateria(AMateria &aMateria)
{
	*this = aMateria;
}

const std::string &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "Amateria unresolved method" << std::endl;
}