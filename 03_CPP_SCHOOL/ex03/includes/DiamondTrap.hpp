#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include  "ScavTrap.hpp"  
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

	DiamondTrap(std::string name);
	~DiamondTrap(void);

	void    highFivesGuys(void);
	void   	guardGate(void);
	void	attack(std::string const & target);
	void 	whoAmI(void);

	private:
	
		std::string	_name;
};

#endif