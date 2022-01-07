#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
	public :

		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat( WrongCat const& cpy);
		WrongCat & operator=(WrongCat const& a);

		void	makeSound(void) const;
};

#endif