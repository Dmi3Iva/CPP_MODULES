//
// Created by Shandy Mephesto on 8/29/21.
//

#include "Character.hpp"

Character::Character() : _name("untitled")
{
	std::cout << "Character " << _name << " is created" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		_materials[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character " << _name << " is created" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		_materials[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << "Character " << _name << " is destructed" << std::endl;
	for (int i = 0; i < 4 ; ++i)
		if (_materials[i])
			delete _materials[i];
}

Character::Character(Character &character)
{
	*this = character;
}

Character &Character::operator=(Character &character)
{
	_name = character.getName();
	for (int i = 0; i < 4; ++i)
	{
		if(_materials[i])
		{
			delete _materials[i];
		}
		_materials[i] = character._materials[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materials[i] == NULL)
		{
			_materials[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (_materials[idx])
	{
		delete _materials[idx];
		_materials[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (_materials[idx])
	{
		_materials[idx]->use(target);
	}
}

const std::string &Character::getName() const
{
	return _name;
}
