//
// Created by Shandy Mephesto on 9/9/21.
//

#include "header.h"

void toInt(std::string str)
{
	int parsedInt;
	try{
		std::istringstream(str) >> parsedInt;
		std::cout << "int: " << parsedInt << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "int: impossible" << std::endl;
	}
}
