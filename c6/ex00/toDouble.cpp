//
// Created by Shandy Mephesto on 9/9/21.
//

#include "header.h"

void toDouble(std::string str)
{
	float result = static_cast<double>(atof(str.c_str()));

	if (result == std::numeric_limits<double>::infinity())
	{
		std::cout << "double: +" << result << std::endl;
	}
	else {
		if (result - ((result>0) ? floor(result) : ceil(result)) == 0
			&&  !isStreamViewHasDotOrE(result))
		std::cout << "double: "<< result  << ".0" << std::endl;
		else
		{
			std::cout << "double: " << result << std::endl;
		}
	}
}