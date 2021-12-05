//
// Created by Shandy Mephesto on 8/12/21.
//

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() <<
	std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}