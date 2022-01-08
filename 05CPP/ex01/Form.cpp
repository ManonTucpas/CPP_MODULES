#include "Form.hpp"

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("ERROR: Grade too low");
}

Form::Form(const std::string name, const unsigned int gToSign, const unsigned int gToExec) : _formName(name), _gradeToExec(gToExec), _gradeToSign(gToSign)
{
    _signed = false;
    if (_gradeToSign < 1 || _gradeToExec < 1)
		throw GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << "Form created" << std::endl;
	return ;
}

Form::~Form()
{
    std::cout << "Form destrcuted" << std::endl;
	return ;
}

Form::Form(Form const& cpy)
{
	*this = cpy;
	std::cout << "Form created (constructor by copy)" << std::endl;
	return ;
}

Form& Form::operator=(const Form& a)
{
    //below : cast _grade to a non const unsigned int
	const_cast<unsigned int&>(_gradeToExec) = a.getGradeToExec();
    const_cast<unsigned int&>(_gradeToSign) = a.getGradeSign();
	//below : cast _name to a non const std::string
	const_cast<std::string&>(_formName) = a.getFormName();

    // voir ce qu'il faut faire pour le bool signed
	return *this;
}

unsigned int Form::getGradeSign(void) const
{
	return (_gradeToSign);
}

unsigned int Form::getGradeToExec(void) const
{
	return (_gradeToExec);
}

std::string const& Form::getFormName(void) const
{
	return (_formName);
}


std::ostream & operator<<(std::ostream & out, Form const & src)
{
	out << src.getFormName() << ", Form [....] " << src.getGradeSign() << std::endl;
	return (out);
}