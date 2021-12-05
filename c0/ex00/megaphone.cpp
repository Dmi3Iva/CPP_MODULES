#include <iostream>

std::string
	loud(std::string str)
{
	for (size_t i = 0; i < str.size(); ++i)
	{
		std::cout << (char)std::toupper(str[i]);
	}
	return str;
}

int
	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
			loud(argv[i]);
	}
	std::cout << std::endl;
}
