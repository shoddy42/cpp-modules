/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:13 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:34:13 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(void)
{
	std::cout << "ANIMAL: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "ANIMAL: Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal(void)
{
	std::cout << "ANIMAL: Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "ANIMAL: Assignment operator called" << std::endl;
	if (this != &src)
	{
		type = src.type;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound(void) const
{
	std::cout << "*indistinguishable noises*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &Animal::getType(void) const
{
	return (type);
}

/* ************************************************************************** */