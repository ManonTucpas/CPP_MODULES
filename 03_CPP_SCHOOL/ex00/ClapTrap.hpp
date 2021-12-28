#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <string>
# include <iostream>

class   ClapTrap
{
	public :

		ClapTrap(std::string name);
		~ClapTrap(void);
		
		void			attack(std::string const& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		// int				getDamage(void);
		// void			setDamage(unsigned int damage);
		// void			printMessage(void) const;

	private :

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif