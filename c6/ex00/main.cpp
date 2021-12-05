//
// Created by Shandy Mephesto on 9/7/21.
//

#include "header.h"

bool isNan(std::string str)
{
	(void)str;
	return false;
}

bool isInf(std::string str)
{
	(void)str;
	return false;
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Invalid arguments count" << std::endl;
		return 0;
	}
	if (!isValid(argv[1]))
	{
		if (!isSomeConsts(argv[1]))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		return 0;
	}
	toChar(argv[1]);
	toInt(argv[1]);
	toFloat(argv[1]);
	toDouble(argv[1]);
	return 0;
}

