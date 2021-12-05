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

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int	_hitpoints;
		int _energyPoints;
		int _attackDamage;
		
};

#endif