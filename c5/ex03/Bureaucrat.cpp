#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Untitiled"), _grade(150)
{
	std::cout << *this << " created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	checkIsGradeTooLow(grade);
	checkIsGradeTooHigh(grade);
	_grade = grade;
	std::cout << *this << " created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << *this << " destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat):
	_name(bureaucrat.getName()),
	_grade(bureaucrat.getGrade())
{

	std::cout << *this << " copy through copy constructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	std::cout << "It's not possible to assign bureaucrat's names!" << std::endl;
	std::cout << "But we can copy their grades" << std::endl;
	_grade = bureaucrat.getGrade();
	std::cout << *this << std::endl;

	return *this;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incGrade()
{
	std::cout << "Increment grade " << *this << std::endl;
	checkIsGradeTooHigh(_grade - 1);
	_grade -= 1;
}

void Bureaucrat::decGrade()
{
	std::cout << "Decrement grade " << *this << std::endl;
	checkIsGradeTooLow(_grade + 1);
	_grade += 1;
}

void Bureaucrat::checkIsGradeTooHigh(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::checkIsGradeTooLow(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade is too high...";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is too low...";
}

std::ostream& operator << (std::ostream &os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName()
	<< ", bureaucrat grade "
	<< bureaucrat.getGrade();
	return os;
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
	}
	catch (const Form::GradeTooLowException &e){
		std::cout << _name << " cannot sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}


void Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
		std::cout << _name << " executes "<< form.getName() << std::endl;
	}
	catch(const Form::NotSignedException &e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << " cause: " << e.what() << std::endl; 
	}
	catch(const Form::GradeTooLowException &e){
		std::cout << _name << " couldn't execute " << form.getName() << " cause: " << e.what() << std::endl; 
	}
}