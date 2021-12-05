//
// Created by Shandy Mephesto on 8/12/21.
//

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	zombies = zombieHorde(1, "allone");
	delete [] zombies;


	zombies = zombieHorde(4, "four");
	delete [] zombies;

	zombies = zombieHorde(10, "ten");
	delete [] zombies;
	return 0;
}
