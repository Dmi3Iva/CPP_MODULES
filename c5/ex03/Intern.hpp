//
// Created by Shandy Mephesto on 9/6/21.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

enum formType
{
	PresidentialPardonFormType,
	RobotomyRequestsFormType,
	ShrubberyCreationFormType,
	UnknownType
};

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern &operator= (const Intern& intern);

	Form *makeForm(std::string formName, std::string target);

	class UnknownFormException: public std::exception
	{
		public:
			virtual const char * what () const throw ();
	};

private:
	formType hashForm(std::string formName);
};


#endif
