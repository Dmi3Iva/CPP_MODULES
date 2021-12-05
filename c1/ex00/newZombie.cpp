//
// Created by Shandy Mephesto on 8/11/21.
//

#include "Zombie.hpp"
#include <string>

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}