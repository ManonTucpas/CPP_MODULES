#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <string>
# include <iostream>

class   ClapTrap
{
	public :

		ClapTrap(std::string name);
		~ClapTrap(void);

		/* constructeur par copie */
		ClapTrap( ClapTrap const &copy);

		/* overload d'operateur d'assignation */
		ClapTrap& 				operator=(const ClapTrap& a);
		
		void			attack(std::string const& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		/* SET && GET */
		void			setName(std::string name);
		void			setEP(unsigned int ep);
		void			setHP(unsigned int hp);
		void			setAD(unsigned int ad);
		std::string		getName(void) const;
		unsigned int	getEP(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getAD(void) const;

	private :

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif