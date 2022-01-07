#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain connected" << std::endl;
}

Brain::Brain(Brain const & cpy)
{
	int i = 0;
	while(i < 100)
	{
		this->_ideas[i] = cpy._ideas[i];
		i++;
	}
	std::cout << "Brain connected (copy)" << std::endl;
}

Brain::~Brain(void)
{
	 std::cout << "Brain disonnected" << std::endl;
}


Brain& Brain::operator=(const Brain& a)
{
	int i = 0;

	while(i < 100)
	{
		this->_ideas[i] = a._ideas[i];
		i++;
	}
	return *this;
}
