//
// Created by Shandy Mephesto on 9/9/21.
//

#include "header.h"

void toChar(std::string str)
{
	int parsedInt;

	try
	{
		std::istringstream(str) >> parsedInt;
		if (std::isprint(parsedInt))
		{
			std::cout << "char: " << static_cast<char>(parsedInt) << std::endl;
		}
		else
		{
			std::cout << "char: Non displayable " << std::endl;
		}
	}
	catch (const std::exception&){
		std::cout << "char: impossible" << std::endl;
	}
}