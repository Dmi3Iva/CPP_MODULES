//
// Created by Shandy Mephesto on 9/1/21.
//

#include "Form.hpp"

Form::Form() :
	_name("untitled"), _isSigned(false),
	_gradeToSign(75), _gradeToExecute(75)
{
	std::cout << "Created new form: " << *this << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
	_name(name), _isSigned(false),
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	std::cout << "Created new form: " << *this << std::endl;
}

Form::Form(const Form &form):
		_name(form.getName()), _isSigned(false),
		_gradeToSign(form.getGradeToSign()), _gradeToExecute(form.getGradeToExecute())
{
	std::cout << *this << " copy through copy constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Destructed form: " << *this << std::endl;
}

Form &Form::operator=(const Form &form)
{
	std::cout << "It's not possible to assign form's names, grades!" <<
	std::endl;
	std::cout << "But we can copy their isSigned properties" << std::endl;
	_isSigned = form.getIsSigned();
	std::cout << *this << std::endl;

	return *this;
}

const std::string Form::getName() const
{
	return _name;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
	{
		_isSigned = true;
		std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
	}
	else
	{
		throw GradeTooLowException();
	}
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade to sign the form is too low...";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade to sign the form is too high...";
}

const char *Form::NotSignedException::what() const throw()
{
	return "form is not signed...";
}

std::ostream& operator << (std::ostream &os, const Form& form)
{
	os << form.getName()
		<< ", form grade to sign " << form.getGradeToSign()
		<< ", grade to execute" << form.getGradeToExecute()
		<< ", is signed " << form.getIsSigned();
	return os;
}
