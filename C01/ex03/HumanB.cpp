#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {};

HumanB::~HumanB(void){};

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << "No weapon" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
}