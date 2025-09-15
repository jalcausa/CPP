#include "Zombie.hpp"

Zombie::Zombie(void) {}

/*
You can use an initialization list this way too:
Zombie::Zombie(std::string name) : _name(name) {}
*/

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce() const
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
