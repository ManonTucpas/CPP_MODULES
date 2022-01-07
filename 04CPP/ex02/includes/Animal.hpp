#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <string>
# include <iostream>

class Animal
{
	public :

		Animal(void);
		Animal(std::string type);
		virtual ~Animal(void);

		/* Copy constructor */
		Animal(Animal const &cpy);

		/* Assignation overload operator */
		Animal&			operator=(const Animal& a);

		std::string		getType(void) const;
		void			setType(std::string type);
		virtual void	makeSound(void) const = 0;

	protected :

		std::string 	_type;
};

#endif