#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat high("high", 1);
	Bureaucrat middle("middle", 75);
	Bureaucrat junior("junior", 150);

	{
		std::cout << std::endl << std::endl << "Check form for high b" <<
		std::endl;
		std::cout << std::endl << "Create forms" << std::endl;
		PresidentialPardonForm presidentalForm("sand");
		RobotomyRequestsForm roboForm("bird");
		ShrubberyCreationForm shruForm("Human");

		std::cout << std::endl << "execute presidental form" << std::endl;

		high.executeForm(presidentalForm);
		high.signForm(presidentalForm);
		high.executeForm(presidentalForm);

		std::cout << std::endl << "execute robo form" << std::endl;
		high.executeForm(roboForm);
		high.signForm(roboForm);
		high.executeForm(roboForm);

		std::cout << std::endl << "execute shru form" << std::endl;
		high.executeForm(shruForm);
		high.signForm(shruForm);
		high.executeForm(shruForm);

		std::cout << std::endl;
	}

	{
		std::cout << std::endl << std::endl << "Check form for middle b" <<
		std::endl;
		std::cout << std::endl << "Create forms" << std::endl;
		PresidentialPardonForm presidentalForm("earth");
		RobotomyRequestsForm roboForm("bird");
		ShrubberyCreationForm shruForm("Human");

		std::cout << std::endl << "execute presidental form" << std::endl;

		middle.executeForm(presidentalForm);
		middle.signForm(presidentalForm);
		middle.executeForm(presidentalForm);

		std::cout << std::endl << "execute robo form" << std::endl;
		middle.executeForm(roboForm);
		middle.signForm(roboForm);
		middle.executeForm(roboForm);

		std::cout << std::endl << "execute shru form" << std::endl;
		middle.executeForm(shruForm);
		middle.signForm(shruForm);
		middle.executeForm(shruForm);

		std::cout << std::endl;
	}

	{
		std::cout << std::endl << std::endl << "Check form for junior b" <<
		std::endl;
		std::cout << std::endl << "Create forms" << std::endl;
		PresidentialPardonForm presidentalForm("earth");
		RobotomyRequestsForm roboForm("bird");
		ShrubberyCreationForm shruForm("Human");

		std::cout << std::endl << "execute presidental form" << std::endl;

		junior.executeForm(presidentalForm);
		junior.signForm(presidentalForm);
		junior.executeForm(presidentalForm);

		std::cout << std::endl << "execute robo form" << std::endl;
		junior.executeForm(roboForm);
		junior.signForm(roboForm);
		junior.executeForm(roboForm);

		std::cout << std::endl << "execute shru form" << std::endl;
		junior.executeForm(shruForm);
		junior.signForm(shruForm);
		junior.executeForm(shruForm);

		std::cout << std::endl;
	}

	return 0;
}
