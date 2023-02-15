	/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 05:05:27 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 05:41:57 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>


HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl; // << this->weapon;
}

