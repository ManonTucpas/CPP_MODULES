#ifndef _SCAVTRAP_HPP 
#define _SCAVTRAP_HPP 

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap
{
	public :

	ScavTrap(std::string name);
	~ScavTrap(void);

	void    		guardGate();
	virtual void    attack(std::string const & target);
};

#endif