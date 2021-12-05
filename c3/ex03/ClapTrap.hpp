#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap& operator = (const ClapTrap& clapTrap);
		ClapTrap(std::string name);
		ClapTrap(
			std::string name,
			int hitpoints,
			int energyPoints,
			int attackDamage
			);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int	_hitpoints;
		int _energyPoints;
		int _attackDamage;
		
};

#endif