#include "../include/WrongDog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongDog::WrongDog(void)
{
	std::cout << "WRONGDOG: Default constructor called" << std::endl;
	type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &src)
{
	std::cout << "WRONGDOG: Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongDog::~WrongDog(void)
{
	std::cout << "WRONGDOG: destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongDog &WrongDog::operator=(const WrongDog &src)
{
	if (this != &src)
	{
		// this->_value = rhs.getValue();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongDog::makeSound(void)
{
	std::cout << type << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */