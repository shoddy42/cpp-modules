/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:03 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:36:17 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(void)
{
	std::cout << "CAT: Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &src)
{
	std::cout << "CAT: Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat(void)
{
	std::cout << "CAT: destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(const Cat &src)
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

void Cat::makeSound(void) const
{
	std::cout << "Meeeooooww" << std::endl;
}

/* ************************************************************************** */