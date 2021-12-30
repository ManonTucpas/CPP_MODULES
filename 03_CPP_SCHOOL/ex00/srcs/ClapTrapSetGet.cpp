#include "../includes/ClapTrap.hpp"

void			ClapTrap::setName(std::string name)
{
    _name = name;
    return ;
}

void			ClapTrap::setEP(unsigned int ep)
{
    _energyPoints = ep;
    return ;
}


void	ClapTrap::setHP(unsigned int hp)
{
    _hitPoints = hp;
    return ;
}

void	ClapTrap::setAD(unsigned int ad)
{
    _attackDamage = ad;
    return ;
}

unsigned int			ClapTrap::getHP(void) const
{
    return (_hitPoints);
}

std::string			ClapTrap::getName(void) const
{
    return (_name);
}

unsigned int			ClapTrap::getAD(void) const
{
    return (_attackDamage);
}

unsigned int	ClapTrap::getEP(void) const
{
    return (_energyPoints);
}
