//
// Created by Shandy Mephesto on 9/2/21.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <fstream>  

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &form);
	PresidentialPardonForm &operator = (const PresidentialPardonForm &form);

	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif
