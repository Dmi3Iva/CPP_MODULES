//
// Created by Shandy Mephesto on 8/29/21.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character: public ICharacter
{
public:
	Character();
	Character(std::string str);
	~Character();
	Character(Character &character);
	Character &operator = (Character &character);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string	_name;
	AMateria	*_materials[4];
};


#endif