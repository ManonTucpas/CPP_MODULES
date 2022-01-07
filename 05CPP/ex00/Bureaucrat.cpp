#include "Bureaucrat.hpp"
#include <iostream>

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR: Grade too low");
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat created" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destrcuted" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& cpy)
{
	*this = cpy;
	std::cout << "Breaucrat created (constructor by copy)" << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& a)
{
	_grade = a.getGrade();
	//below : cast _name to a non const std::string
	const_cast<std::string&>(_name) = a.getName();
	return *this;
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::string	const & Bureaucrat::getName(void) const
{
	return (_name);
}

void	Bureaucrat::downGrade(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	else
		_grade += 1;
}

void	Bureaucrat::upGrade(void)
{
	if (_grade -1 < 1)
		throw GradeTooHighException();
	else
		_grade -= 1;
}

std::ostream & operator<<(std::ostream & out, Bureaucrat const & src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (out);
}