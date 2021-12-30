#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <string>
# include <iostream>

class   ClapTrap
{
	public :

		ClapTrap(std::string name);
		~ClapTrap(void);

		//constructeur par copie
		ClapTrap( ClapTrap const &copy);

		//overload d'operateur d'assignation
		ClapTrap& 				operator=(const ClapTrap& a);
		
		void			attack(std::string const& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			setName(std::string);
		void			getEP(void) const;
		void			getHP(void) const;
		void			getName(void) const;
		void			getAD(void) const;
		unsigned int	setEP(unsigned int ep);
		unsigned int	setHP(unsigned int hp);
		unsigned int	setAD(unsigned int ad);

	private :

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif