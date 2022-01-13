#ifndef _ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include "Form.hpp"

static int  count;

class RobotomyRequestForm : public Form
{
	public :
	
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const & target);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const& cpy);
	RobotomyRequestForm & operator=(RobotomyRequestForm const& a);
	std::string	const& 		getTarget(void) const;
	virtual void			execute(const Bureaucrat& b) const;

	private: 

		std::string     _target;

};

#endif