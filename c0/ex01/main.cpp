#include "header.hpp"

void	showInstruction()
{
	std::cout << "Please, use one of the commands:" << std::endl;
	std::cout << "\"ADD\" - to add contact" << std::endl;
	std::cout << "\"SEARCH\" - to find ontact" << std::endl;
	std::cout << "\"EXIT\" - to stop programm and exit" << std::endl;
	std::cout << std::endl;
}

int
	main(void)
{
	PhoneBook	phoneBook;
	std::string	str;
	bool		exitFlag = false;

	std::cout << "Hi, it is phone book program" << std::endl;
	showInstruction();

	std::cout << "Please, write your command:"; 
	while (!exitFlag && std::cin >> str)
	{
		std::cout << std::endl;
		if (str == "ADD")
		{
			phoneBook.add();
		}
		else if (str == "SEARCH")
		{
			phoneBook.search();
		}
		else if (str == "EXIT")
		{
			exitFlag = true;
		}
		else 
		{
			std::cout << "Didn't understand you. Try again" << std::endl;
		}
		if (!exitFlag)
		{
			std::cout << std::endl << "Please, write your command:";
		}
	}
	return 0;
}
