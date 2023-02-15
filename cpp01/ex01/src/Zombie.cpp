/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 05:43:44 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 04:22:42 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Constructed zombie " << this->_name << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "(NULL)";
	std::cout << "Constructed zombie " << this->_name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructed zombie " << this->_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

