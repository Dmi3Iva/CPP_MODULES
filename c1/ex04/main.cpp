//
// Created by Shandy Mephesto on 8/14/21.
//

// TODO:: handle errors
#include "Replacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "invalid arguments:: pass 3 args" << std::endl;
		return 1;
	}

	if (!argv[1] || !argv[2] || ! argv[3])
	{
		std::cout << "some of the values are empty,"
		<< " please provide correct values" << std::endl;
		return 2;
	}
	Replacer replacer(argv[1]);
	return replacer.replace(argv[2], argv[3]);
}