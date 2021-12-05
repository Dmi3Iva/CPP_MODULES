//
// Created by Shandy Mephesto on 9/2/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestsForm::RobotomyRequestsForm():
	Form("Robotomy request form", 72, 45), _target("in the air")
{
	std::cout << *this << " created" << std::endl;
}

RobotomyRequestsForm::RobotomyRequestsForm(std::string target):
	Form("Robotomy request form", 72, 45), _target(target)
{
	std::cout << *this << " created" << std::endl;
}

RobotomyRequestsForm::~RobotomyRequestsForm()
{
	std::cout << *this << " destructed" << std::endl;
}

RobotomyRequestsForm::RobotomyRequestsForm(RobotomyRequestsForm &form):
	Form("Robotomy request form", 72, 45), _target(form.getTarget())
{
	std::cout << *this << " copy through copy constructor" << std::endl;
}

RobotomyRequestsForm &
RobotomyRequestsForm::operator=(const RobotomyRequestsForm &form)
{
	std::cout << "It's not possible to assign anything, except target and isSigned values!" <<
	std::endl;
	_isSigned = form.getIsSigned();
	_target = form.getTarget();
	std::cout << *this << std::endl;

	return *this;
}


std::string RobotomyRequestsForm::getTarget() const
{
	return _target;
}

void RobotomyRequestsForm::execute(Bureaucrat const &executor) const
{
	if (_isSigned == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw Form::GradeTooLowException();

    std::srand(std::time(NULL));
    std::cout << " * DRILLING NOISES * " << std::endl;
    if (std::rand() % 2 == 0)
    {
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << _target << " has not been robotomized, failure!" << std::endl;
    }
}