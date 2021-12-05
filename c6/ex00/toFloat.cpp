//
// Created by Shandy Mephesto on 9/9/21.
//

#include "header.h"

void toFloat(std::string str)
{
	try
	{
		float result = static_cast<float>(atof(str.c_str()));

		if (result == std::numeric_limits<float>::infinity())
		{
			std::cout << "float: +" << result << "f" <<
					  std::endl;
		} else
		{
			if (result - ((result > 0) ? floor(result) : ceil(result)) == 0
			&&  !isStreamViewHasDotOrE(result))
				std::cout << "float: " << result << ".0f" <<
						  std::endl;
			else
			{
				std::cout << "float: " << result << "f" <<
						  std::endl;
			}
		}
	}
	catch (std::exception&)
	{
		std::cout << "float: impossible" << std::endl;

	}
}