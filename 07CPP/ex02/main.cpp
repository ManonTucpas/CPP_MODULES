#include "Array.hpp"
#include <string>


int main(void)
{
    //int *a = new int();
    //std::cout << *a << std::endl;
    Array<int> emptyArray;
    std::cout << "Empty array of size : " << emptyArray.size() << " created" << std::endl;

    Array<int> intArray(5);
    std::cout << "Creation of an array of 5 elements" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
}