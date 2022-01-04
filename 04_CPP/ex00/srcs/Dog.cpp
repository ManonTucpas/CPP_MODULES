#include "../includes/Dog.hpp"

Dog::Dog(void)
{
    _type = "Dog";
	std::cout << "A " << _type << " has born" << std::endl;
}

Dog::~Dog(void)
{
	 std::cout << "A " << _type << " died" << std::endl;
}

Dog::Dog(Dog const& cpy)
{
	*this = cpy;
	std::cout << "A " << _type << " has been copied" << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
	std::cout << "A " << a.getType() << " assignation operator called" << std::endl;
	setType(a._type);
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf"  <<std::endl; 
}