#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap "  << _name << " has been initialized" << std::endl;
	std::cout << "ClapTrap "  << _name << " has " << _hitPoints << " hit points " << std::endl;
	std::cout << "ClapTrap "  << _name << " has " << _energyPoints << " energy points " << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap "  << _name << " has been destructed" << std::endl;
	return ;
}

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
