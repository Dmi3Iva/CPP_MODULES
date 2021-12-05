#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("untitled", 100, 50, 20) {
    std::cout << "ScavTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	std::cout << "Copy constructor from ScavTrap " << scavTrap._name <<
	std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& scavTrap)
{
	std::cout << "Assignment operator for ScavTrap " << scavTrap._name <<
	std::endl;

	this->_name = scavTrap._name;
	this->_hitpoints = scavTrap._hitpoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " was destroyed" << std::endl; 
}
void ScavTrap::attack(std::string const & target) {
    std::cout << "ScavTrap " << _name << " attack "<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << "has entered the Gate keeper mode!" << std::endl;
}
