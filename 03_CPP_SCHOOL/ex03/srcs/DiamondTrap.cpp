#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	DiamondTrap::_hitPoints = FragTrap::_hitPoints;
	DiamondTrap::_energyPoints = ScavTrap::_energyPoints;
	DiamondTrap::_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap "  << _name << " has been initialized" << std::endl;
	std::cout << "DiamondTrap "  << _name << " has " << _hitPoints << " hit points " << std::endl;
	std::cout << "DiamondTrap "  << _name << " has " << _energyPoints << " energy points " << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap "  << _name << " has been destructed" << std::endl;
	return ;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	return ;
}

void 	DiamondTrap::whoAmI(void)
{
    std::cout << "Name from DiamondTrap class : " << _name << std::endl;
    std::cout << "Name from ClassTrap class : " << ClapTrap::_name << std::endl;
    return;
}

void    DiamondTrap::highFivesGuys(void)
{
    FragTrap::highFivesGuys();
    return ;
}

void   	DiamondTrap::guardGate(void)
{
    ScavTrap::guardGate();
    return ;
}
