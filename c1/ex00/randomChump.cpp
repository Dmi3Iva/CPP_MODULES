//
// Created by Shandy Mephesto on 8/11/21.
//

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie* zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}
