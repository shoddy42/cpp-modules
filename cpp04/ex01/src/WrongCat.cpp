/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:03 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:34:04 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(void)
{
	std::cout << "WRONGCAT: Default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WRONGCAT: Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat(void)
{
	std::cout << "WRONGCAT: destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &WrongCat::operator=(const WrongCat &src)
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

void WrongCat::makeSound(void) const
{
	std::cout << "Meeeooooww but wrong" << std::endl;
}

/* ************************************************************************** */