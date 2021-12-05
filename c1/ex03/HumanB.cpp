//
// Created by Shandy Mephesto on 8/12/21.
//

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = NULL;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() <<
		std::endl;
	else
		std::cout << _name << " attacks with his hands :D" << 
		std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
