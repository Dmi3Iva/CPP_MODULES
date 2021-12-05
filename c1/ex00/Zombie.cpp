//
// Created by Shandy Mephesto on 8/11/21.
//

#include "Zombie.hpp"
#include <iostream>
#include <string>

void	Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : _name("untitled")
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " was destructed"<< std::endl;
}