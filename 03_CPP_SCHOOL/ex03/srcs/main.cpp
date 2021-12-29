#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap warrior1("RT-FC");
    ClapTrap warrior2("CL4P-TP");
    ScavTrap scav1("FFPP");
    FragTrap frag1("Trap304G");
    DiamondTrap diam("Diamond 45T");

    std::cout << "-----------------------------" << std::endl;
   
    warrior1.attack("Triton Flats");
    warrior1.takeDamage(3);
    warrior1.beRepaired(10);
    std::cout << "----" << std::endl;
    scav1.attack("Saturne");
    scav1.takeDamage(34);
    scav1.beRepaired(20);
    scav1.guardGate();
    std::cout << "----" << std::endl;
    std::cout << "----" << std::endl;
    frag1.attack("Pluton");
    frag1.takeDamage(18);
    frag1.beRepaired(50);
    frag1.highFivesGuys();
    std::cout << "----" << std::endl;
    std::cout << "----" << std::endl;
    diam.whoAmI();
    diam.attack("Pluton");
    diam.takeDamage(18);
    diam.beRepaired(50);
    diam.highFivesGuys();
    diam.guardGate();
    std::cout << "----" << std::endl;
    warrior2.attack("Outlands Canyon");
    warrior2.takeDamage(8);
    warrior2.beRepaired(4);
    warrior2.takeDamage(2);
    warrior2.attack("Outlands Canyon again");
    std::cout << "-----------------------------" << std::endl;

    return (0);


}