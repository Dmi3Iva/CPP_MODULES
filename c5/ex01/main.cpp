#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "Check for form with too low and too high grades" << std::endl;
	try{
		Form tooLow("TooLow", 151, 151);
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << "Unnable to create form with grade 151:" << e.what() <<
		std::endl;
	}
	std::cout << std::endl;

	try{
		Form tooHigh("TooHigh", 0, 0);
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cout << "Unnable to create form with grade 0:" << e.what() <<
		std::endl;
	}
	std::cout << std::endl;

	std::cout << "Check forms for ability to sign" << std::endl;

	Bureaucrat goodB("Good bureaucrat", 1);
	Bureaucrat midPlusB("Mid plus bureaucrat", 40);
	Bureaucrat midMinusB("Mid minus bureaucrat", 80);
	Bureaucrat lowestB("Lowest bureaucrat", 150);

	std::cout << std::endl << std::endl << "This bureaucrat signs form: " <<
		goodB << std::endl;
	{
		Form highForm("Top Form", 1, 1);
		Form midForm("Mid Form", 75, 75);
		Form lowForm("Low Form", 150, 150);
		goodB.signForm(highForm);
		goodB.signForm(midForm);
		goodB.signForm(lowForm);
	}

	std::cout << std::endl << std::endl << "This bureaucrat signs form: " <<
		midPlusB <<	std::endl;
	{
		Form highForm("Top Form", 1, 1);
		Form midForm("Mid Form", 75, 75);
		Form lowForm("Low Form", 150, 150);
		midPlusB.signForm(highForm);
		midPlusB.signForm(midForm);
		midPlusB.signForm(lowForm);
	}

	std::cout << std::endl << std::endl << "This bureaucrat signs form: " <<
		midMinusB << std::endl;
	{
		Form highForm("Top Form", 1, 1);
		Form midForm("Mid Form", 75, 75);
		Form lowForm("Low Form", 150, 150);
		midMinusB.signForm(highForm);
		midMinusB.signForm(midForm);
		midMinusB.signForm(lowForm);
	}

	std::cout << std::endl << std::endl << "This bureaucrat signs form: " <<
			  lowestB << std::endl;
	{
		Form highForm("Top Form", 1, 1);
		Form midForm("Mid Form", 75, 75);
		Form lowForm("Low Form", 150, 150);
		lowestB.signForm(highForm);
		lowestB.signForm(midForm);
		lowestB.signForm(lowForm);
	}


	return 0;
}