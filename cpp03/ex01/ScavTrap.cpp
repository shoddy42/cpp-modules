#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	// this->_damage = src._damage;
	// this->_energy = src._energy;
	// this->_name = src._name;
	// this->_hp = src._hp;
	// if (src.)
	// 	return (*this);
	return (*this);
}

std::ostream &			operator<<( std::ostream &stream, ScavTrap const &i)
{
	stream << i << std::endl;
	return (stream);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */