/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 05:07:48 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 06:34:43 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
