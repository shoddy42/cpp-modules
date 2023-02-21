#include "../include/Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(void)
{
	std::cout << "ANIMAL: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "ANIMAL: Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal(void)
{
	std::cout << "ANIMAL: Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		type = src.type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound(void) const
{
	std::cout << type << std::endl;
}

const std::string &Animal::getType(void) const
{
	return (type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */