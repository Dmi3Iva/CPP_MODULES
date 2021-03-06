//
// Created by Shandy Mephesto on 8/12/21.
//

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {}

const std::string &Weapon::getType()
{
	return _type;
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}
