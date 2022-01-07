#include "Bureaucrat.hpp"
#include <iostream>

int main (void)
{
    std::cout << "\n-------------------------------------" << std::endl;
    std::cout << "--------------FIRST TRY--------------" << std::endl;
    std::cout << "-------------------------------------\n" << std::endl;
    try
    {
        Bureaucrat a("NiceGuy", 1);
        std::cout << a;
        Bureaucrat b = a;
        std::cout << b;
        b.downGrade();
        std::cout << b;
        std::cout << "NiceGuy upgrade: " << std::endl;
        a.upGrade();
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n-------------------------------------" << std::endl;
    std::cout << "--------------SECOND TRY-------------" << std::endl;
    std::cout << "-------------------------------------\n" << std::endl;
    try
    {
        Bureaucrat BigBoss("BigBoss", 150);
        std::cout << BigBoss;
        std::cout << "Upgrade" << std::endl;
        BigBoss.upGrade();
        std::cout << BigBoss;
        std::cout << "Upgrade" << std::endl;
        BigBoss.upGrade();
        std::cout << BigBoss;
        std::cout << "Upgrade" << std::endl;
        BigBoss.upGrade();
        std::cout << BigBoss;

    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n-------------------------------------" << std::endl;
    std::cout << "--------------THIRD TRY--------------" << std::endl;
    std::cout << "-------------------------------------\n" << std::endl;
    try
    {
        Bureaucrat Junior("Junio", 149);
        std::cout << Junior;
        std::cout << "Downgrade" << std::endl;
        Junior.downGrade();
        std::cout << Junior;
        std::cout << "Downgrade" << std::endl;
        Junior.downGrade();
        std::cout << Junior;

    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n-------------------------------------" << std::endl;
    std::cout << "--------------FOURTH TRY---------------" << std::endl;
    std::cout << "-------------------------------------\n" << std::endl;
    try
    {
        Bureaucrat BadGuy("BadGuy", 10);
        std::cout << BadGuy;
        std::cout << "downgrade" << std::endl;
        BadGuy.downGrade();
        std::cout << BadGuy;
        std::cout << "downgrade" << std::endl;
        BadGuy.downGrade();
        std::cout << BadGuy;
        std::cout << "downgrade" << std::endl;
        BadGuy.downGrade();
        std::cout << BadGuy;

    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);

}