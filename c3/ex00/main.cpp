#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap evilTrap("evil trap");
	evilTrap.attack("the air");
	evilTrap.beRepaired(9999);
	evilTrap.takeDamage(23423);

	std::cout << std::endl;

	ClapTrap defaultTrap("trap");
	defaultTrap.attack("the ground");
	defaultTrap.beRepaired(9999);
	defaultTrap.takeDamage(23423);

	std::cout << std::endl;
	return 0;
}
