#include "Array.hpp"
#include <string>


int main(void)
{
	Array<int> emptyArray;
	std::cout << "Empty array of size : " << emptyArray.size() << " created" << std::endl;

	Array<int> intArray(5);
	std::cout << "\n*****Creation of an array of 5 elements*****\n" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	std::cout << "\n*****Assign i + 1 at this array*****\n" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		intArray[i] = i + 1;
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}

	Array<int> intArrayBis(intArray);
	std::cout << "\n*****Creation of an array by copy*****\n" << std::endl;
	for (unsigned int i = 0; i < intArrayBis.size(); i++)
		std::cout << "intArrayBis[" << i << "] = " << intArrayBis[i] << std::endl;
	std::cout << "\n*****Assign i - 1 at this arrayBis*****\n" << std::endl;
	for (unsigned int i = 0; i < intArrayBis.size(); i++)
	{
		intArrayBis[i] = i - 1;
		std::cout << "intArrayBis[" << i << "] = " << intArrayBis[i] << std::endl;
	}
	std::cout << "\n*****Value of the initial array are unchanged :*****\n" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;


	std::cout << "\n***** Catching OUTOFLIMITEXCEPTION *****\n" << std::endl;
	try
	{
		std::cout << "index = -1" << std::endl;
		std::cout << intArray[-1] <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "index = 200" << std::endl;
		std::cout << intArray[200] <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n***** TEST ARRAY OF STRINGS *****\n" << std::endl;
	
	
	std::string str[5] = {"Blue", "Red", "Orange", "Yellow", "Grey"};
	Array<std::string> emptyStr;
	std::cout << "Empty array of size : " << emptyStr.size() << " created" << std::endl;

	Array<std::string> string(5);
	std::cout << "\n*****Creation of a string array of 5 elements*****\n" << std::endl;
	for (unsigned int i = 0; i < string.size(); i++)
		std::cout << "String[" << i << "] = " << string[i] << std::endl;
	std::cout << "\n*****Assign value to the string array*****\n" << std::endl;
	for (unsigned int i = 0; i < string.size(); i++)
	{
		string[i] = str[i];
		std::cout << "intArray[" << i << "] = " << string[i] << std::endl;
	}

	Array<std::string> stringBis(string);
	std::cout << "\n*****Creation of a string array by copy*****\n" << std::endl;
	for (unsigned int i = 0; i < stringBis.size(); i++)
		std::cout << "stringBis[" << i << "] = " << stringBis[i] << std::endl;
	std::cout << "\n*****Assign other values to the stringbis*****\n" << std::endl;
	std::string str2[5] = {"Chocolate", "Vanilla", "Strawberry", "Lemon", "Cofee"};
	for (unsigned int i = 0; i < stringBis.size(); i++)
	{
		stringBis[i] = str2[i];
		std::cout << "stringyBis[" << i << "] = " << stringBis[i] << std::endl;
	}
	std::cout << "\n*****Value of the initial string array are unchanged :*****\n" << std::endl;
	for (unsigned int i = 0; i < string.size(); i++)
		std::cout << "string[" << i << "] = " << string[i] << std::endl;


	std::cout << "\n***** Catching OUTOFLIMITEXCEPTION *****\n" << std::endl;
	try
	{
		std::cout << "index = -1" << std::endl;
		std::cout << string[-1] <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "index = 200" << std::endl;
		std::cout << string[200] <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
