#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Random")
{
	std::cout << "A " << _type << " WrongAnimal has born" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	 std::cout << "A " << _type << " WrongAnimal died" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& cpy)
{
	*this = cpy;
	std::cout << "A " << _type << " WrongAnimal has been copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	std::cout << "A " << a.getType() << " WrongAnimal assignation operator called" << std::endl;
	setType(a._type);
	return *this;
}

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Woooo, it is a none-define sound with this " << _type << " WrongAnimal class" <<std::endl; 
}