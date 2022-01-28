#include "easyfind.hpp"
#include <vector>
#include <list>

void   test_vector(void)
{
	std::vector<int> 					vect;
	std::vector<int>::const_iterator 	it;
	std::vector<int>::const_iterator 	end;
	
	std::cout <<  "\n***** Creation d'un vector<int> , value de 1 a 5 ******\n" << std::endl;
	for(int i = 0; i < 5; i++)
		vect.push_back(i+1);
	
	std::cout <<  "\n***** Affichage ******\n" << std::endl;
	for(it = vect.begin(), end = vect.end(); it != end; it++)
		std::cout << *it<< std::endl;

	std::cout <<  "\n***** Test de la fonction Easyfind ******\n" << std::endl;
	try
	{
		std::cout << "Find 1 : " << *easyfind<std::vector<int> >(vect, 1) << std::endl;
		std::cout << "Find 2 : " << *easyfind<std::vector<int> >(vect, 2) <<std::endl;
		std::cout << "find 3 : " << *easyfind<std::vector<int> >(vect, 3) <<std::endl;
		std::cout << "find 4 : " << *easyfind<std::vector<int> >(vect, 4) <<std::endl;
		std::cout << "find 5 : " << *easyfind<std::vector<int> >(vect, 5) <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Find 6 : " << *easyfind<std::vector<int> >(vect, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Find 0 : " << *easyfind<std::vector<int> >(vect, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}

void	test_list(void)
{
	std::list<int> lst;
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator end;

	std::cout <<  "\n***** Creation d'une liste<int> , value de 0 a 4 ******\n" << std::endl;
	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	std::cout <<  "\n***** Affichage ******\n" << std::endl;
	for(it = lst.begin(), end = lst.end(); it != end; it++)
		std::cout << *it << std::endl;
	
	std::cout <<  "\n***** Test de la fonction Easyfind ******\n" << std::endl;
	try
	{
		std::cout << "Find 0 : " << *easyfind<std::list<int> >(lst, 0) << std::endl;
		std::cout << "Find 1 : " << *easyfind<std::list<int> >(lst, 1) << std::endl;
		std::cout << "Find 2 : " << *easyfind<std::list<int> >(lst, 2) << std::endl;
		std::cout << "Find 3 : " << *easyfind<std::list<int> >(lst, 3) << std::endl;
		std::cout << "Find 4 : " << *easyfind<std::list<int> >(lst, 4) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Find -1 : " << *easyfind<std::list<int> >(lst, -1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Find 10 : " << *easyfind<std::list<int> >(lst, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	test_vector();
	test_list();
	return (0);
}