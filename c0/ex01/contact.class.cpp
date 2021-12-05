#include "header.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::set(std::string firstName, std::string lastName,
							std::string nickname, std::string phone,
							std::string darkestSecret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickname = nickname;
	_phone = phone;
	_darkestSecret = darkestSecret;
}

void Contact::printInfo(int i)
{
	// index|first name| last name|  nickname
	std::cout << std::setw(10) << i % 8 + 1;
	std::cout << "|";

	if (_firstName.length() > 10)
		std::cout << std::setw(9) << _firstName.substr(0,9) << ".";
	else
	std::cout << std::setw(10) << _firstName ;
	std::cout << "|";

	if (_lastName.length() > 10)
		std::cout << std::setw(9) << _lastName.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << _lastName ;
	std::cout << "|";

	if (_nickname.length() > 10)
		std::cout << std::setw(9) << _nickname.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << _nickname ;

	std::cout << std::endl;
}

void Contact::printSelfInfo(void)
{
	std::cout << "Contact's info" << std::endl;
	std::cout << "First name: " << _firstName <<std::endl;
	std::cout << "Last name: "  << _lastName <<std::endl;
	std::cout << "Nickname: "   << _nickname <<std::endl;
	std::cout << "Phone: " << _phone <<std::endl;
	std::cout << "Darkest secret: " << _darkestSecret <<std::endl;
}
