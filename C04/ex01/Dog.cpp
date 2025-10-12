#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = copy.getType();
	this->_brain = new Brain(*copy._brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(Dog const &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy.getType();
		delete this->_brain;
		this->_brain = new Brain(*copy._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau Guau!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}
