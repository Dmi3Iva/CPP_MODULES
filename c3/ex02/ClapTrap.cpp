#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("untitled"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " was destroyed" << std::endl; 
}


ClapTrap::ClapTrap(
    std::string name,
    int hitpoints,
    int energyPoints,
    int attackDamage
    ):_name(name), _hitpoints(hitpoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {
    std::cout << "ClapTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
    std::cout << "Copy constuctor from ClapTrap " << clapTrap._name << std::endl;
    // TODO:: check is it correct or not?
    *this = clapTrap;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clapTrap) {
    std::cout << "Assignment operator for ClapTrap " << clapTrap._name << std::endl;
    this->_name = clapTrap._name;
    this->_hitpoints = clapTrap._hitpoints;
    this->_energyPoints = clapTrap._energyPoints;
    this->_attackDamage = clapTrap._attackDamage;
    return *this;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << _name << " attack "<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " took "<< amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " is repaired "<< amount << " hitpoints" << std::endl;
}
