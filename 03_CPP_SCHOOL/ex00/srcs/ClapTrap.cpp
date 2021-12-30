#include "../includes/ClapTrap.hpp"

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

ClapTrap::ClapTrap( ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << _name << " has been copied" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& a)
{
	std::cout << "ClapTrap assignation operator called : ";
	std::cout << getName() << " is : " << a.getName() <<  std::endl;
	setName(a._name);
	setHP(a._hitPoints);
	setAD(a._attackDamage);
	setEP(a._energyPoints);
	return *this;
}

