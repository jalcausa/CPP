#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap defaultClap;
    ClapTrap clap1("Clap-1");
    ClapTrap clap2("Clap-2");
    ClapTrap clap3(clap1);
    
    std::cout << "\n--- Assigment Operator ---" << std::endl;
    ClapTrap clap4;
    clap4 = clap2;
    
    std::cout << "\n--- Attack ---" << std::endl;
    clap1.attack("Clap-2");
    clap2.attack("Clap-1");
    
    std::cout << "\n--- Take Damage ---" << std::endl;
    clap1.takeDamage(3);
    clap2.takeDamage(5);
    
    std::cout << "\n--- Repair ---" << std::endl;
    clap1.beRepaired(2);
    clap2.beRepaired(3);
    
    std::cout << "\n--- With no hit points ---" << std::endl;
    clap4.takeDamage(10);
    clap4.attack("Enemy");
    clap4.beRepaired(5);
    clap4.takeDamage(5);
    
    std::cout << "\n--- Destructors ---" << std::endl;
    return (0);
}