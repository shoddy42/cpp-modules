#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(): _hp(10), _damage(0), _energy(10), _name("Default")
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hp(10), _damage(0), _energy(10), _name(name)
{
	std::cout << "String creator constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this == &src)
		return (*this);
	this->_damage = src._damage;
	this->_energy = src._energy;
	this->_name = src._name;
	this->_hp = src._hp;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0 || this->_energy <= 0)
		return;
	this->_energy--;
	std::cout << this->_name << " atacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= amount;
	std::cout << this->_name << " took " << amount <<  " points of damage and has " << this->_hp << " hp remaining!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0 || this->_energy <= 0)
		return;
	this->_energy--;
	this->_hp += amount;
	std::cout << this->_name << " has healed " << amount <<  " hp and now has " << this->_hp << " hp remaining!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */