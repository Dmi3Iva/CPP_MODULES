//
// Created by Shandy Mephesto on 8/11/21.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();

private:
	std::string _name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif //CPP01_ZOMBIE_HPP
