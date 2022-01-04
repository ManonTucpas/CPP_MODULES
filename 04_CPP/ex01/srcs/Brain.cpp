#include "../includes/Brain.hpp"

Brain::Brain(void) : _ideas{0}
{
	std::cout << "A brain is born" << std::endl;
}

Brain::~Brain(void)
{
	 std::cout << " A brain died" << std::endl;
}

Brain::Brain(Brain const& cpy)
{
	*this = cpy;
	//std::cout << "A " << _type << " has been copied" << std::endl;
}

Brain& Brain::operator=(const Brain& a)
{
	//std::cout << "A " << a.getType() << " assignation operator called" << std::endl;
	//setType(a._type);
	return *this;
}
