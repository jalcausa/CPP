#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "--- Contructors ---" << std::endl;
    ClapTrap clap("Clap-1");
    FragTrap firstRobot;
    FragTrap secondRobot("Frag-2");
    FragTrap thirdRobot(secondRobot);
    
    std::cout << "\n--- Attacks ---" << std::endl;
    clap.attack("Bandit");
    firstRobot.attack("invasors");
    secondRobot.attack("monsters");
    thirdRobot.attack("traitors");
    
    std::cout << "\n--- Taking damage ---" << std::endl;
    clap.takeDamage(3);
    firstRobot.takeDamage(9);
    secondRobot.takeDamage(78);
    thirdRobot.takeDamage(25);
    
    std::cout << "\n--- Repair ---" << std::endl;
    clap.beRepaired(2);
    firstRobot.beRepaired(5);
    secondRobot.beRepaired(89);
    thirdRobot.beRepaired(15);
    
    std::cout << "\n--- High five ---" << std::endl;
    firstRobot.highFivesGuys();
    secondRobot.highFivesGuys();
    thirdRobot.highFivesGuys();
    
    std::cout << "\n--- With no hit points ---" << std::endl;
    firstRobot.takeDamage(100);
    firstRobot.attack("traitors");
    firstRobot.beRepaired(50);
    firstRobot.takeDamage(5);
    firstRobot.highFivesGuys();

    std::cout << "\n--- With no energy points ---" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        thirdRobot.attack("traitors");
    }
    thirdRobot.attack("traitors");
    thirdRobot.beRepaired(5);
    thirdRobot.highFivesGuys();
    
    std::cout << "\n--- Destructors ---" << std::endl;
    return (0);
}
