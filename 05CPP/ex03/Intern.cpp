#include "Intern.hpp"

const char*	Intern::NotFormException::what() const throw()
{
	return ("ERROR: The form doesn't exists");
}

Intern::Intern    (void) {

	_myFunction[0] = &Intern::makeShruberry;
	_myFunction[1] = &Intern::makeRobotomy;
	_myFunction[2] = &Intern::makePresidential;

	return ;
}

Intern::Intern(Intern const & cpy)
{
   *this = cpy;
}

Intern & Intern::operator=(Intern const& a)
{
	_myFunction[0] = a._myFunction[0];
	_myFunction[1] = a._myFunction[1];
	_myFunction[2] = a._myFunction[2];
	return (*this);
}

Intern::~Intern	(void) {

	return ;
}

Form*           Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*           Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*           Intern::makeShruberry(std::string target)
{
	return (new ShrubberyCreationForm(target));

}

int     Intern::getLevel(std::string level)
{
	int i;
	std::string index[4] = {"shruberry creation", "robotomy request", "presidential pardon"};
	for(i = 0; i < 3; i++)
	{
		if (index[i] == level)
			return (i);
	}
	return (-1);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	Form*	form;
	int 	index;
	
	index = getLevel(name);
	if (index != -1)
	{
		form = (this->*(_myFunction[index]))(target);
		std::cout << "Intern creates " << form->getFormName() << std::endl;
	}
	else
		throw NotFormException();
	return (form);
}
