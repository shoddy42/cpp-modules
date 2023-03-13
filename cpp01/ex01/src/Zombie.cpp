/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 05:43:44 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 19:07:53 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Constructed zombie " << this->_name << std::endl;
}

Zombie::Zombie(void): _name("Default")
{
	std::cout << "Constructed zombie " << this->_name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructed zombie " << this->_name << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

