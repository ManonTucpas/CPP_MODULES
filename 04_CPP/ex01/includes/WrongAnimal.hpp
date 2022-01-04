#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

# include <string>
# include <iostream>

class WrongAnimal
{
	public :

		WrongAnimal(void);
		virtual ~WrongAnimal(void);

		/* Copy constructor */
		WrongAnimal(WrongAnimal const &cpy);

		/* Assignation overload operator */
		WrongAnimal&			operator=(const WrongAnimal& a);

		std::string		getType(void) const;
		void			setType(std::string type);

		void			makeSound(void) const;

	protected :

		std::string 	_type;
};

#endif