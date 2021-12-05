//
// Created by Shandy Mephesto on 8/11/21.
//

#include "Zombie.hpp"

int main(void)
{
	Zombie firstZombieStack("first zombie stack");
	firstZombieStack.announce();

	Zombie *secondZombie = newZombie("second zombie");
	secondZombie->announce();
	delete secondZombie;

	randomChump("third zombie");
	randomChump("fourth zombie");

	Zombie thirdZombieStack("third zombie stack");
	thirdZombieStack.announce();

	Zombie *fifthZombie = newZombie("fifth zombie");
	secondZombie->announce();
	delete fifthZombie;
}
