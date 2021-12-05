#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap evilTrap("evil trap");
	evilTrap.attack("the air");
	evilTrap.beRepaired(9999);
	evilTrap.takeDamage(23423);
	evilTrap.highFivesGuys();
	evilTrap.guardGate();
	evilTrap.whoAmI();

	std::cout << std::endl;

	DiamondTrap defaultTrap("trap");
	defaultTrap.attack("the ground");
	defaultTrap.beRepaired(9999);
	defaultTrap.takeDamage(23423);
	defaultTrap.highFivesGuys();
	defaultTrap.guardGate();
	defaultTrap.whoAmI();
	std::cout << std::endl;

	return 0;
}
