#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
  	std::cout << "-------------------Subject's test--------------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* k = new Cat();

	delete j;
	delete k;
    std::cout << "\n-------------------Deep copy's test--------------------" << std::endl;

	Cat a;
	Cat b;
	Cat c(a);

	b = a;

	std::cout << "Brain A -> address : " << a.getBrain() << std::endl;
	std::cout << "Brain B -> address : " << b.getBrain() << std::endl;
	std::cout << "Brain C -> address : " << c.getBrain() << std::endl;
    std::cout << "\n-------------------Array's test--------------------" << std::endl;
	
	int 		count = 4;
	Animal*		animalTab[4];

	for(int i = 0; i < count; i++)
	{
		if ((i < (count / 2)) == 0)
		{
			std::cout << i << std::endl;
			animalTab[i] = new Cat();
			animalTab[i]->makeSound();
		}
		else
		{
			std::cout << i << std::endl;
			animalTab[i] = new Dog();
			animalTab[i]->makeSound();
		}
		std::cout << "-----------------------------" << std::endl;
	}
	std::cout << "\n------Destructor called from delete of animalTab------" << std::endl;
	for(int i = 0; i < count; i++)
		delete animalTab[i];
	std::cout << "\n------Destructor called from program's end------" << std::endl;
	return (0);
}