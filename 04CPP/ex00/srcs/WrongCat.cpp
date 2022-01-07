#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    _type = "WrongCat";
	std::cout << "A " << _type << " has born" << std::endl;
}

WrongCat::~WrongCat(void)
{
	 std::cout << "A " << _type << " died" << std::endl;
}

WrongCat::WrongCat(WrongCat const& cpy)
{
	*this = cpy;
	std::cout << "A " << _type << " has been copied" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
	std::cout << "A " << a.getType() << " assignation operator called" << std::endl;
	setType(a._type);
	return *this;
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Miiiiiiiiiiaou"  <<std::endl; 
}