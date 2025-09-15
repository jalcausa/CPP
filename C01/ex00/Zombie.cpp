#include "Zombie.hpp"

Zombie::Zombie(void) {}

/*
Se puede usar también una lista de inicialización así:
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

void Zombie::announce() const
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
