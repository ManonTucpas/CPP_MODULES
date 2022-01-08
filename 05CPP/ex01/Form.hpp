#ifndef _FORM_HPP_
# define _FORM_HPP_

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form : public Bureaucrat
{

	class	GradeTooLowException : public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};

	class	GradeTooHighException : public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};
	public:
		Form(const std::string name, const unsigned int gToSign, const unsigned int gToExec);
		~Form();
		Form(Form const& cpy);
		Form&	operator=(const Form& a);
		unsigned int	getGradeSign(void) const;
		unsigned int	getGradeToExec(void) const;
		std::string const&		getFormName(void) const;
	
	private:
		
		const std::string     _formName;
		bool           		  _signed;
		const unsigned int    _gradeToSign;
		const unsigned int    _gradeToExec;

};

std::ostream & operator<<(std::ostream & out, Form const & src)

#endif