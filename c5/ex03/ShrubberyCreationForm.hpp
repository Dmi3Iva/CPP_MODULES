//
// Created by Shandy Mephesto on 9/2/21.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &form);
	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &form);

	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif
