#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <string>
# include <iostream>

class Brain
{
	public :

		Brain(void);
		virtual ~Brain(void);

		/* Copy constructor */
		Brain(Brain const &cpy);

		/* Assignation overload operator */
		Brain&			operator=(const Brain& a);

		// std::string		getIdeas(void) const;
		// void			    setIdeas(std::string type);

	protected :

		std::string 	_ideas[100];
};

#endif