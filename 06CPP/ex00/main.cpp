#include <iostream>
#include <string>
#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		std::cout << "Only one and not empty argument required" << std::endl;
		return (0);
	}
	else
	{
		Convert arg(av[1]);
		arg.findType();
		// if (arg.getType() == "impossible")
		// 	std::cout << "Impossible to convert this string" << std::endl;
	}
	return (0);
}