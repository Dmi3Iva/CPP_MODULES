#include "Bureaucrat.hpp"

int main()
{
	const Bureaucrat b;
	std::cout << std::endl;

	const Bureaucrat okay("Ok", 75);
	std::cout << std::endl;

	std::cout << "copy of Ok bureaucrat" << std::endl;
	const Bureaucrat copyOkay = okay;
	std::cout << std::endl;

	std::cout << "assign of Ok bureaucrat" << std::endl;
	Bureaucrat assignOkay("Assigned", 22);
	assignOkay = okay;
	std::cout << std::endl;

	std::cout << "Try to create bureaucrat with grade 151" << std::endl;
	try{
		const Bureaucrat tooLow("Low", 151);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Exception catch:" << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Try to create bureaucrat with grade 0" << std::endl;
	try{
		const Bureaucrat tooHigh("High", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Exception catch:" << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat top("Top", 1);
	try{
		top.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Exception catch:" << e.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat lowest("lowest", 150);
	try {
		lowest.decGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Exception catch:" << e.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}