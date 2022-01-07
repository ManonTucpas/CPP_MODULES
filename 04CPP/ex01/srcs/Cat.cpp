#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat"), _brain(new Brain())
{
	std::cout << "A " << getType() << " is born" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "A " << getType() << " died" << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat const& cpy) : Animal(cpy)
{
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	this->_type = cpy._type;
	std::cout << "A " << getType() << " is born (copy)" << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
	this->_type = a.getType();
	delete this->_brain;
	this->_brain = new Brain (*(a._brain));
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Miiiiiiiiiiaou"  <<std::endl; 
}

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}
