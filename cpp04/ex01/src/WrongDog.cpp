/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongDog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:03 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:34:04 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
		type = src.type;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongDog::makeSound(void) const
{
	std::cout << "Woooooof but wrong" << std::endl;
}

/* ************************************************************************** */