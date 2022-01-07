#include "../includes/Animal.hpp"

Animal::Animal(void) : _type("Random")
{
	std::cout << "A " << _type << " animal has born" << std::endl;
}

Animal::~Animal(void)
{
	 std::cout << "A " << _type << " animal died" << std::endl;
}

Animal::Animal(Animal const& cpy)
{
	*this = cpy;
	std::cout << "A " << _type << " animal has been copied" << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
	std::cout << "A " << a.getType() << " animal assignation operator called" << std::endl;
	setType(a._type);
	return *this;
}

void	Animal::setType(std::string type)
{
	_type = type;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void		Animal::makeSound(void) const
{
	std::cout << "Woooo, it is a none-define sound with this " << _type << " animal class" <<std::endl; 
}