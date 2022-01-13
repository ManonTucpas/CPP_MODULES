#ifndef Intern_HPP
# define Intern_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Form;

class   Intern
{
	class	NotFormException : public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};
	public:

		typedef Form* (Intern::*ptrToFunction)(std::string target);
		Intern(void);
		~Intern(void);
		Intern(Intern const& cpy);
		Intern &        operator=(Intern const& a);
		Form*		    makeForm(std::string name, std::string target);
		int				getLevel(std::string level);
		Form*           makeRobotomy(std::string target);
		Form*           makePresidential(std::string target);
		Form*           makeShruberry(std::string target);

	private:
		
		ptrToFunction	_myFunction[3];
};

#endif