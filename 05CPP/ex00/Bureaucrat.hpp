#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <stdexcept>
# include <iostream>
# include <string>

class Bureaucrat
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

	public :

		Bureaucrat(std::string name, unsigned int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const& cpy);
		Bureaucrat&				operator=(const Bureaucrat& a);

		std::string const &		getName(void) const;
		unsigned int			getGrade(void) const;
		void					upGrade(void);
		void					downGrade(void);

	private:

		const std::string		_name;
		unsigned int			_grade;

};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & src);

#endif