//
// Created by Shandy Mephesto on 8/26/21.
//

#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; ++i)
		_ideas [i] = std::to_string(i + 123);
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0 ; i < 100 ; ++i)
		_ideas[i] = brain._ideas[i];
	return *this;
}

std::string *Brain::getIdeas()
{
	return _ideas;
};