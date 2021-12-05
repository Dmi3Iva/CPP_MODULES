//
// Created by Shandy Mephesto on 9/6/21.
//

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	(void)intern;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	std::cout << "Intern assignment operator" << std::endl;
	return *this;
}

formType Intern::hashForm(std::string formName)
{
	if (formName == "presidental pardon") return PresidentialPardonFormType;
	if (formName == "robotomy request") return RobotomyRequestsFormType;
	if (formName == "shrubbery creation") return  ShrubberyCreationFormType;
	return UnknownType;
}

const char *Intern::UnknownFormException::what() const throw()
{
	return "Unknown form...";
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	switch (hashForm(formName))
	{
		case PresidentialPardonFormType:
			std::cout << "Intern creates " << formName << std::endl;
			return new PresidentialPardonForm(target);
		case RobotomyRequestsFormType:
			std::cout << "Intern creates " << formName << std::endl;
			return new RobotomyRequestsForm(target);
		case ShrubberyCreationFormType:
			std::cout << "Intern creates " << formName << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			throw UnknownFormException();
	}
}