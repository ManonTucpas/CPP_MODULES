#include "Base.hpp"
#include <time.h>
#include <iostream>
#include <cstdlib>

Base	*generate(void)
{
	//Instancie de facon aléatoire A, B ou C et retourne un pointeur de l’instance Base
	srand(time(NULL));
	int i = rand() % 3;
	switch(i)
	{
		case 0:
			std::cout << "Instance A created" << std::endl;
			return new A;
		case 1:
			std::cout << "Instance B created" << std::endl;
			return new B;
		case 2:
			std::cout << "Instance C created" << std::endl;
			return new C;
	}
	std::cout << "Error while generating Base's instance" << std::endl;
	return (NULL);
}

void	identify_ptr(Base* p)
{
	//qui affiche "A", "B" ou "C" selon le type réel de p
	A *aptr = dynamic_cast<A*>(p);
	B *bptr = dynamic_cast<B*>(p);
	C *cptr = dynamic_cast<C*>(p);
	if (aptr != NULL)
	{
		std::cout << "Type is A" << std::endl;
		return ;
	}
	else if (bptr != NULL)
	{
		std::cout << "Type is B" << std::endl;
		return ;
	}
	else if (cptr != NULL)
	{
		std::cout << "Type is C" << std::endl;
		return ;
	}
	else
		std::cout << "Eror : no type found" << std::endl;
	return ;
}

void	identify_ref(Base& p)
{
	//Vous ne devez jamais utiliser un pointeur dans cette fonction. 
	// Cette fonction affiche "A", "B" ou "C" selon le type réel de p.
	try
	{
		A & aptr = dynamic_cast<A&>(p);
		static_cast<void>(aptr);
		std::cout << "Type is A" << std::endl;
		return ;
	}
	catch (...)
	{
		std::cout << "Type is not A" << std::endl;
	}
		try
	{
		B & bptr = dynamic_cast<B&>(p);
		static_cast<void>(bptr);
		std::cout << "Type is B" << std::endl;
		return ;
	}
	catch (...)
	{
		std::cout << "Type is not B" << std::endl;
	}
		try
	{
		C & cptr = dynamic_cast<C&>(p);
		static_cast<void>(cptr);
		std::cout << "Type is C" << std::endl;
		return ;
	}
	catch (...)
	{
		std::cout << "Type is not C" << std::endl;
	}

}

int main(void)
{
	Base * base = generate();
	Base &ref = *base;
	Base *ptr = base;
	identify_ptr(ptr);
	identify_ref(ref);

	delete base;
	return (0);
}