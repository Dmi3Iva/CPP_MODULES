#include "header.hpp"

PhoneBook::PhoneBook(void)
{
	_notes = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phone Book is closed and removed" << std::endl;
	return;
}

void PhoneBook::_setContact(std::string firstName, std::string lastName,
						   std::string nickname, std::string phone,
						   std::string darkestSecret)
{
	this->_contacts[_notes % 8].set(
			firstName, lastName, nickname, phone, darkestSecret);
	this->_notes += 1;
}

int PhoneBook::add(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phone;
	std::string	darkestSecret;

	std::cout << "Please fill required fields" << std::endl;
	std::cout << "first name: ";
	std::cin >> firstName;
	if (firstName == "")
	{
		std::cout << std::endl << "The field can't be empty" << std::endl;
		return 1;
	}
	std::cout << "last name: ";
	std::cin >> lastName;
	if (lastName == "")
	{
		std::cout << std::endl << "The field can't be empty" << std::endl;
		return 1;
	}
	std::cout << "nickname: ";
	std::cin >> nickname;
	if (nickname == "")
	{
		std::cout << std::endl << "The field can't be empty" << std::endl;
		return 1;
	}
	std::cout << "phone: ";
	std::cin >> phone;
	if (phone == "")
	{
		std::cout << std::endl << "The field can't be empty" << std::endl;
		return 1;
	}
	std::cout << "darkest secret: ";
	std::cin >> darkestSecret;
	if (darkestSecret == "")
	{
		std::cout << std::endl << "The field can't be empty" << std::endl;
		return 1;
	}
	this->_setContact(firstName, lastName, nickname, phone, darkestSecret);
	return 0;
}

void	PhoneBook::search(void)
{
	int index = 0;
	int wantedIndex;

	if (_notes == 0)
	{
		std::cout << "Looks like you phone book is empty, add someone"<< std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	for (
			int i = _notes - 8 >= 0 ? _notes - 8 : 0;
			i < _notes;
			++i
		)
	{
		_contacts[i % 8].printInfo(index);
		++index;
	}

	std::cout << std::endl << "Please, input index of interested contact or ";
	std::cout << "something else to quit" << std::endl;
	std::cout << ">";
	std::cin >> wantedIndex;
	if (wantedIndex < 1 || wantedIndex > 8 || wantedIndex > _notes)
	{
		std::cout << "Quit"<< std::endl;
		return;
	}
	if (_notes < 9)
		_contacts[wantedIndex - 1].printSelfInfo();
	else
		_contacts[(_notes - 9 + wantedIndex) % 8].printSelfInfo();
}
