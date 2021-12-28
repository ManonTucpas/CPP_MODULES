#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap warrior1("RT-FC");
    ClapTrap warrior2("CL4P-TP");

    std::cout << "-----------------------------" << std::endl;
    warrior1.takeDamage(3);
    warrior1.attack("Triton Flats");
    warrior1.beRepaired(10);

    warrior2.takeDamage(8);
    warrior2.attack("Outlands Canyon");
    warrior2.beRepaired(4);
    warrior2.takeDamage(2);
    warrior2.attack("Outlands Canyon again");
    std::cout << "-----------------------------" << std::endl;
    return (0);

}