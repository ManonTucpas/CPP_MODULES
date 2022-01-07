#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	public :

		Cat(void);
		virtual ~Cat(void);
		Cat( Cat const& cpy);
		Cat & operator=(Cat const& a);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;

	
	private : 
		
		Brain*		_brain;
};

#endif