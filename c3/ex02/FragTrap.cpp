#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("untitled", 100, 100, 30) {
    std::cout << "FragTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " was destroyed" << std::endl; 
}
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap requests high fives!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	std::cout << "Copy constructor from FragTrap " << fragTrap._name <<
	std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator = (const FragTrap& fragTrap)
{
	std::cout << "Assignment operator for FragTrap " << fragTrap._name <<
	std::endl;

	this->_name = fragTrap._name;
	this->_hitpoints = fragTrap._hitpoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;
	return *this;
}


