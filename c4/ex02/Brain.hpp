//
// Created by Shandy Mephesto on 8/26/21.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain (const Brain &brain);
	Brain & operator = (const Brain &brain);

	std::string *getIdeas();
private:
	std::string _ideas[100];
};


#endif
