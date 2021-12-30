#include "ClapTrap.hpp"

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << std::endl;
	std::cout << "ClapTrap "  << _name << " Hitpoints before attack : " << _hitPoints << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	std::cout << "ClapTrap "  << _name << " has taken " << amount << " points of damage! "  << std::endl;
	_attackDamage = amount;
	_hitPoints -= _attackDamage;
	std::cout << "ClapTrap "  << _name << " Hitpoints after attack : " << _hitPoints << std::endl;
	return ;	
}

void	ClapTrap::beRepaired(unsigned int amount)
{	
	_energyPoints += amount;
	std::cout << "ClapTrap " << _name << " has been charged and has " << _energyPoints << " energy points" << std::endl;
	return ;
}