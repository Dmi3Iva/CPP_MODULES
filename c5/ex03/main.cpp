#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat high("high", 1);
	Intern intern;

	{
		std::cout << std::endl << "Intern creates forms" << std::endl;

		Form *presidentalForm = intern.makeForm("presidental pardon" ,"sand");
		Form *roboForm = intern.makeForm("robotomy request","bird");
		Form *shruForm = intern.makeForm("shrubbery creation","Human");

		try {
			std::cout << "intern try to make unknown form" << std::endl;
			Form *unknownForm = intern.makeForm("unknown form", "target");
			(void)unknownForm;
		}
		catch (Intern::UnknownFormException &e)
		{
			std::cout << "Unnable to create form cause: " << e.what() <<
			std::endl;
		}

		std::cout << std::endl << "execute presidental form" << std::endl;

		high.executeForm(*presidentalForm);
		high.signForm(*presidentalForm);
		high.executeForm(*presidentalForm);

		std::cout << std::endl << "execute robo form" << std::endl;
		high.executeForm(*roboForm);
		high.signForm(*roboForm);
		high.executeForm(*roboForm);

		std::cout << std::endl << "execute shru form" << std::endl;
		high.executeForm(*shruForm);
		high.signForm(*shruForm);
		high.executeForm(*shruForm);

		std::cout << std::endl;

		delete presidentalForm;
		delete roboForm;
		delete shruForm;
	}
	return 0;
}
