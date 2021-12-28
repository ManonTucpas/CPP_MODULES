#include "Karen.hpp"

int main()
{
    Karen sentence;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Test for DEBUG" << std::endl;
    sentence.complain("DEBUG");
    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Test for INFO" << std::endl;
    sentence.complain("INFO");
    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Test for WARNING" << std::endl;
    sentence.complain("WARNING");
    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Test for ERROR" << std::endl;
    sentence.complain("ERROR");
    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Test for something else" << std::endl;
    sentence.complain("something");
    std::cout << std::endl;
    return (0);
}