#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public :
	
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const& cpy);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const& a);
	std::string	const& 		getTarget(void) const;
	void					execute(const Bureaucrat& b) const;

	private: 

		std::string     _target;

};

#endif