#include "../includes/Animal.hpp"

Animal::Animal(void) : _type("")
{
	std::cout << "An animal is born (without type)" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "An animal of type: " << getType() << " is born" << std::endl;
}

Animal::~Animal(void)
{
	 std::cout << "An animal died" << std::endl;
}

Animal::Animal(Animal const& cpy)
{
	*this = cpy;
	std::cout << "An animal type: " << _type << " is born (copy)" << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
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

