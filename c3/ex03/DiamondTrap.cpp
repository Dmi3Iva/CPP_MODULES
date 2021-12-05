#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("untitled_clap_name", 100, 50, 30) {
    _name = "untitled";
    std::cout << "DiamondTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name", 100, 50, 30){
    _name = name;
    std::cout << "DiamondTrap " << _name << " was created with hitpoints=" << _hitpoints
        << " energypoints=" << _energyPoints << " attackDamage=" << _attackDamage << std::endl;
}
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " was destroyed" << std::endl; 
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << _name << " and my ClaptTrap name is " << this->ClapTrap::_name << std::endl;
}

