/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 20:09:25 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
// #include <fstream>
// #include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Pardon::Pardon(): Form("PresidentialPardonForm", 25, 5), _target("Default")
{
}

Pardon::Pardon(const Pardon &src):
	Form(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
}

Pardon::Pardon(const std::string &target): 
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Pardon::~Pardon()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Pardon &Pardon::operator=(const Pardon &src)
{
	if (this != &src)
	{
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Pardon &i)
{
	stream << "Pardon: " << i.getName() << ", is signed?: " << i.getSigned()
		<< ", sign grade: " << i.getSignGrade() << ", exec grade: " << i.getExecGrade();
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool Pardon::execute(const Bureaucrat &executor) const
{
	if (getSigned() == false)
		throw UnsignedFormException();
	if (executor.getGrade() > getExecGrade())
		return (false);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Pardon::getTarget(void) const
{
	return (_target);
}


/* ************************************************************************** */