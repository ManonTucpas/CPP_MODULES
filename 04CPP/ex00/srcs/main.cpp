#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

int main(void)
{
	Animal* meta = new Animal();
	const Animal* j = new Dog();
	Animal* i = new Cat();
	WrongAnimal* h = new WrongCat();


	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	std::cout << "-----------------------------" << std::endl;
	std::cout << "WrongAnimal et WrongCat TESTS" << std::endl;
	std::cout << "In the wrong class the makeSound function is not virtual " << std::endl;
	std::cout << h->getType() << " " << std::endl;	
	h->makeSound();

	delete h;
	delete i;
	delete j;
	delete meta;
	return (0);
}