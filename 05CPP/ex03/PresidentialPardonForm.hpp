#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "Form.hpp"



class PresidentialPardonForm : public Form
{
	public :
	
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const & target);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const& cpy);
	PresidentialPardonForm & operator=(PresidentialPardonForm const& a);
	std::string	const& 		getTarget(void) const;
	virtual void			execute(const Bureaucrat& b) const;

	private: 

		std::string     _target;

};

#endif