#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA(std::string name, Weapon& weapon); //ici aussiii
		~HumanA(void);
		
        void    attack(void) const;

	private:

		std::string _name;
		// ca doit etre une strref ici
		Weapon& _weapon;
};

#endif