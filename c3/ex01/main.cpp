#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap evilTrap("evil trap");
	evilTrap.attack("the air");
	evilTrap.takeDamage(23423);
	evilTrap.beRepaired(9999);
	evilTrap.guardGate();

	std::cout << std::endl;

	ScavTrap defaultTrap("trap");
	defaultTrap.attack("the ground");
	defaultTrap.takeDamage(23423);
	defaultTrap.beRepaired(9999);
	defaultTrap.guardGate();

	std::cout << std::endl;
	return 0;
}
