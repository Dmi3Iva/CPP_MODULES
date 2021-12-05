//
// Created by Shandy Mephesto on 9/2/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("Shrubbery creation form", 25, 5), _target("in the air")
{
	std::cout << *this << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("Shrubbery creation form", 25, 5), _target(target)
{
	std::cout << *this << " created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << *this << " destructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &form):
	Form("Shrubbery creation form", 25, 5), _target(form.getTarget())
{
	std::cout << *this << " copy through copy constructor" << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	std::cout << "It's not possible to assign anything, except target and isSigned values!" <<
	std::endl;
	_isSigned = form.getIsSigned();
	_target = form.getTarget();
	std::cout << *this << std::endl;

	return *this;
}


std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (_isSigned == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw Form::GradeTooLowException();

    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}