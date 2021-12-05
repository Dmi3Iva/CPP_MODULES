//
// Created by Shandy Mephesto on 9/9/21.
//

#include "header.h"

bool isValid (std::string s)
{
	bool isThereDot = false;
	bool isThereE = false;

	if (s.empty())
		return false;

	for(size_t i = 0; i < std::strlen(s.c_str()); ++i)
	{
		if (i == 0)
		{
			if (s[0] == '+' || s[0] == '-')
				continue;
		}
		if (!isdigit(s[i]))
		{
			if (s[i] == '.') {
				if (isThereDot)
					return false;
				else
					isThereDot = true;
			}
			else if (s[i] == 'e' && (s[i + 1] == '+' || s[i + 1] == '-')) {
				if (isThereE)
					return false;
				else
				{
					isThereE = true;
					++i;
				}
			}
			else if ((i == strlen(s.c_str()) - 1)  && s[i] == 'f')
				continue;
			else
				return false;

		}
	}
	return true;
}

bool isSomeConsts(std::string str)
{
	if (
		str == "nan" || str == "nanf"||
		str == "+inf" || str == "-inf" ||
		str == "+inff" || str == "-inff"
		)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (str == "nan" || str == "+inf" || str == "-inf")
		{
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
		}
		else
		{
			std::cout << "float: " << str << std::endl;
			std::cout <<
			"double: " << str.substr(0, str.size() - 1) <<	std::endl;
		}
		return true;
	}
	return false;
}

bool isStreamViewHasDotOrE(double d)
{
	std::stringstream stream;
	stream << d;
	return stream.str().find('.') != std::string::npos || stream.str().find
		('e') != std::string::npos;
}

bool isStreamViewHasDotOrE(float f)
{
	std::stringstream stream;
	stream << f;
	return stream.str().find('.') != std::string::npos || stream.str().find
			('e') != std::string::npos;
}