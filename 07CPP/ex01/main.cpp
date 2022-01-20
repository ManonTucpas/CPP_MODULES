#include "Iter.hpp"

int main(void)
{
	int			tab[5] = {1, 2, 3, 4, 5};
	char		tab2[4] = {'a', 'b', 'c', 'd'};
	std::string	tab3[3] = {"abc", "def", "hij"};
 
	std::cout << "****TEST INT ARRAY 5****\n" << std::endl;
	iter(tab, 5, &print_f);
	std::cout << "\n****TEST CHAR ARRAY 4****\n" << std::endl;
	iter(tab2, 4, print_f);
	std::cout << "\n****TEST STR ARRAY 3****\n" << std::endl;
	iter(tab3, 3, print_f);
}