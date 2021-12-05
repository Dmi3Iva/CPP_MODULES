//
// Created by Shandy Mephesto on 8/12/21.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
public:
	Weapon(const std::string& str);
	const std::string& getType();
	void setType(const std::string& type);


private:
	std::string _type;
};


#endif //WEAPON_HPP
