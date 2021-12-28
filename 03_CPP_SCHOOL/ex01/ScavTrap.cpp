#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    ScavTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    ScavTrap::_attackDamage = 20;
	std::cout << "ScavTrap "  << _name << " has been initialized" << std::endl;
	std::cout << "ScavTrap "  << _name << " has " << _hitPoints << " hit points " << std::endl;
	std::cout << "ScavTrap "  << _name << " has " << _energyPoints << " energy points " << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap "  << _name << " has been destructed" << std::endl;
	return ;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode"  << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage! " << std::endl;
	std::cout << "ScavTrapTrap "  << _name << " Hitpoints after attack : " << _hitPoints << std::endl;
	return ;
}