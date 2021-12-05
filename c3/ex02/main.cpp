#include "FragTrap.hpp"

int main(void)
{
	FragTrap evilTrap("evil trap");
	evilTrap.attack("the air");
	evilTrap.beRepaired(9999);
	evilTrap.takeDamage(23423);
	evilTrap.highFivesGuys();

	std::cout << std::endl;


	FragTrap defaultTrap("trap");
	defaultTrap.attack("the ground");
	defaultTrap.beRepaired(9999);
	defaultTrap.takeDamage(23423);
	defaultTrap.highFivesGuys();

	std::cout << std::endl;
	return 0;
}
