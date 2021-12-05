//
// Created by Shandy Mephesto on 8/14/21.
//

#include "Karen.hpp"

Karen::Karen()
{
	_karenFunctions[0].name = "DEBUG";
	_karenFunctions[0].method = &Karen::_debug;

	_karenFunctions[1].name = "INFO";
	_karenFunctions[1].method = &Karen::_info;

	_karenFunctions[2].name = "WARNING";
	_karenFunctions[2].method = &Karen::_warning;

	_karenFunctions[3].name = "ERROR";
	_karenFunctions[3].method = &Karen::_error;
}


void Karen::complain(std::string level)
{
	int i = 0;
	while(_karenFunctions[i].name != level && i < 4)
		++i;

	switch (i)
	{
		case 0:
			(*this.*(_karenFunctions[0].method))();
		case 1:
			(*this.*(_karenFunctions[1].method))();
		case 2:
			(*this.*(_karenFunctions[2].method))();
		case 3:
			(*this.*(_karenFunctions[3].method))();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems"
					  << " ]"<<std::endl;
			break;
	}
}

void Karen::_debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
		<<" I just love it!" << std::endl << std::endl;
}

void Karen::_info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money."
		<<	"You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl << std::endl;
}

void Karen::_warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
		<< " coming here for years and you just started working here last month."
		<< std::endl << std::endl;
}

void Karen::_error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
	<< std::endl << std::endl;
}

