#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	FragTrap::_hitPoints = 100;
	FragTrap::_energyPoints = 100;
	FragTrap::_attackDamage = 30;
	std::cout << "FragTrap "  << _name << " has been initialized" << std::endl;
	std::cout << "FragTrap "  << _name << " has " << _hitPoints << " hit points " << std::endl;
	std::cout << "FragTrap "  << _name << " has " << _energyPoints << " energy points " << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap "  << _name << " has been destructed" << std::endl;
	return ;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << "ScavTrap " << _name << " have done high fives to the others"  << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap "  << _name << " Hitpoints before attack : " << _hitPoints << std::endl;
	FragTrap::_hitPoints -= FragTrap::_attackDamage;
	std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage! " << std::endl;
	std::cout << "FragTrap "  << _name << " Hitpoints after attack : " << _hitPoints << std::endl;
	return ;
}