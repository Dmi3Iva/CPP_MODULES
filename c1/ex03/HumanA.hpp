//
// Created by Shandy Mephesto on 8/12/21.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
	void setWeapon(Weapon &weapon);

private:
	Weapon &_weapon;
	std::string	_name;

};


#endif //HUMANA_HPP
