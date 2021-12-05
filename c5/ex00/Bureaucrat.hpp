#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator= (const Bureaucrat& bureaucrat);

	const std::string	getName() const;
	int				getGrade() const;
	void			incGrade();
	void			decGrade();

	class GradeTooHighException: public std::exception
			{
			public:
				virtual const char * what () const throw ();
			};

	class GradeTooLowException: public std::exception
			{
			public:
				virtual const char * what () const throw ();
			};

private:
	static void checkIsGradeTooLow(int grade);
	static void checkIsGradeTooHigh(int grade);
	const std::string _name;
	int _grade;


};

std::ostream& operator << (std::ostream &os, const Bureaucrat& bureaucrat);

#endif
