#ifndef _SCAVTRAP_HPP 
#define _SCAVTRAP_HPP 

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
    public :

    ScavTrap(std::string name);
    ~ScavTrap(void);

    void    guardGate();
    void	attack(std::string const & target);
};

#endif