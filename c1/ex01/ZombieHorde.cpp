//
// Created by Shandy Mephesto on 8/12/21.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *result = new Zombie[N];

	for (int i = 0; i < N ; ++i)
	{
		result[i].setName(name);
		result[i].announce();
	}
	return result;
}
