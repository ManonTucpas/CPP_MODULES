#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	public :

		Dog(void);
		virtual ~Dog(void);
		Dog( Dog const& cpy);
		Dog & operator=(Dog const& a);

		void	makeSound(void) const;
};

#endif