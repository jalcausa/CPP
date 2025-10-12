#include "Animal.hpp"

Animal::Animal() 
{
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Generic animal";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = copy.getType();
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

Animal::~Animal() 
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
	return (this->_type);
}

void Animal::setType(std::string const type) {
	this->_type = type;
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}