#include "../includes/Cat.hpp"

Cat::Cat(void)
{
    _type = "Cat";
	std::cout << "A " << _type << " has born" << std::endl;
}

Cat::~Cat(void)
{
	 std::cout << "A " << _type << " died" << std::endl;
}

Cat::Cat(Cat const& cpy)
{
	*this = cpy;
	std::cout << "A " << _type << " has been copied" << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
	std::cout << "A " << a.getType() << " assignation operator called" << std::endl;
	setType(a._type);
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Miiiiiiiiiiaou"  <<std::endl; 
}