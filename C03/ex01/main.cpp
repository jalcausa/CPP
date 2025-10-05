#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "--- Constructors ---" << std::endl;
    ClapTrap clap("CL4P-TP");
    ScavTrap firstRobot;
    ScavTrap secondRobot("Scav3000");
    ScavTrap thirdRobot(secondRobot);
    
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
    
    std::cout << "\n--- Guard gate ---" << std::endl;
    firstRobot.guardGate();
    secondRobot.guardGate();
	thirdRobot.guardGate();
    
    std::cout << "\n--- With no hit point ---" << std::endl;
    firstRobot.takeDamage(100);
    firstRobot.attack("traitors");
    firstRobot.beRepaired(50);
    firstRobot.takeDamage(5);
    firstRobot.guardGate();

    std::cout << "\n--- Destructor ---" << std::endl;
    return (0);
}
