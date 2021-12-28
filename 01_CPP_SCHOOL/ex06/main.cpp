#include "Karen.hpp"

int main(int argc, char **argv)
{
	int         index;
	Karen       sentence;
	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	index = sentence.getLevel(argv[1]);
	switch(index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			sentence.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			sentence.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			sentence.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			sentence.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
		break;
	}
	return (0);
}