#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : Form::Form("RobotomyRequestForm", 72, 45), _target("default") 
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :Form::Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) : Form(cpy.getFormName(), cpy.getGradeSign(), cpy.getGradeToExec())//, cpy.getSignedStatus(), cpy.getTarget())
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const& a)
{
	(void)a;
	return *this;
}


std::string	const& RobotomyRequestForm::getTarget(void) const
{
	return _target;
}

void		RobotomyRequestForm::execute(const Bureaucrat& b) const
{
    count++;
	Form::checkExecForm(b);
    if((count % 2) == 0)
        std::cout << "Drilling.... " << _target << " has been robotomized" << std::endl;
    else
        std::cout << "Drilling.... " << _target << " failed to robotomize" << std::endl;
}