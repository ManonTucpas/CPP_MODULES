#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog"), _brain(new Brain())
{
    std::cout << "A " << getType() << " is born" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "A " << getType() << " died" << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const& cpy) : Animal(cpy)
{
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	this->_type = cpy._type;
	std::cout << "A " << getType() << " is born (copy)" << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
	this->_type = a.getType();
	delete this->_brain;
	this->_brain = new Brain (*(a._brain));
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf"  <<std::endl; 
}

Brain*	Dog::getBrain(void) const
{
	return this->_brain;
}