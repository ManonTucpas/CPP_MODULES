#include "PresidentialPardonForm.hpp"
#include <ctime>

PresidentialPardonForm::PresidentialPardonForm(void) : Form::Form("PresidentialPardonForm", 25, 5), _target("default") 
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :Form::Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpy) : Form(cpy.getFormName(), cpy.getGradeSign(), cpy.getGradeToExec())//, cpy.getSignedStatus(), cpy.getTarget())
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const& a)
{
	(void)a;
	return *this;
}


std::string	const& PresidentialPardonForm::getTarget(void) const
{
	return _target;
}

void		PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	Form::checkExecForm(b);
    std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}