#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = copy.getType();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miua Miau!" << std::endl;
}
