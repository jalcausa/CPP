#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = copy.getType();
	this->_brain = new Brain(*copy._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy.getType();
        delete this->_brain;
        this->_brain = new Brain(*copy._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miua Miau!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}