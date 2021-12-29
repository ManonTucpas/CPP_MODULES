#ifndef _FRAGTRAP_HPP 
#define _FRAGTRAP_HPP 

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap
{
	public :

	FragTrap(std::string name);
	~FragTrap(void);

	void    highFivesGuys(void);
	virtual void	attack(std::string const & target);
};

#endif