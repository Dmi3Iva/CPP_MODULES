//
// Created by Shandy Mephesto on 9/2/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("Presidential pardon form", 145, 137), _target("in the air")
{
	std::cout << *this << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("Presidential pardon form", 145, 137), _target(target)
{
	std::cout << *this << " created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << *this << " destructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &form):
	Form("Presidential pardon form", 145, 137), _target(form.getTarget())
{
	std::cout << *this << " copy through copy constructor" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	std::cout << "It's not possible to assign anything, except target and isSigned values!" <<
	std::endl;
	_isSigned = form.getIsSigned();
	_target = form.getTarget();
	std::cout << *this << std::endl;

	return *this;
}


std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (_isSigned == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw Form::GradeTooLowException();
	
	std::ofstream outfile (_target.c_str());

	outfile
	<< "      /\\" << std::endl
	<< "     /\\*\\"<< std::endl
	<< "    /\\O\\*\\"<< std::endl
	<< "   /*/\\/\\/\\"<< std::endl
	<< "  /\\O\\/\\*\\/\\"<< std::endl
	<< " /\\*\\/\\*\\/\\/\\"<< std::endl
	<< "/\\O\\/\\/*/\\/O/\\"<< std::endl
	<< "      ||"<< std::endl
	<< "      ||"<< std::endl
	<< "      ||"<< std::endl
	<< "      ||";
}
