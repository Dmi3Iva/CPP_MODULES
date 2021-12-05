#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap& operator = (const ScavTrap& scavTrap);

		void guardGate();
		void attack(std::string const & target);
};

#endif