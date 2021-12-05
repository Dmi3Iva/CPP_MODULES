//
// Created by Shandy Mephesto on 9/2/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestsForm: public Form
{
public:
	RobotomyRequestsForm();
	RobotomyRequestsForm(std::string target);
	~RobotomyRequestsForm();
	RobotomyRequestsForm(RobotomyRequestsForm &form);
	RobotomyRequestsForm &operator = (const RobotomyRequestsForm &form);

	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif
