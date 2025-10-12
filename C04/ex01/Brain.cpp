#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	return ("");
}

void Brain::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}