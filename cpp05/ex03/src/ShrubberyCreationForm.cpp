/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 19:59:29 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Shrubbery::Shrubbery(): Form("ShrubberyCreationForm", 145, 137), _target("Default")
{
}

Shrubbery::Shrubbery(const Shrubbery &src):
	Form(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
}

Shrubbery::Shrubbery(const std::string &target): 
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Shrubbery::~Shrubbery()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Shrubbery &Shrubbery::operator=(const Shrubbery &src)
{
	if (this != &src)
	{
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Shrubbery &i)
{
	stream << "Shrubbery: " << i.getName() << ", is signed?: " << i.getSigned()
		<< ", sign grade: " << i.getSignGrade() << ", exec grade: " << i.getExecGrade();
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool Shrubbery::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	if (getSigned() == false)
		throw UnsignedFormException();
	std::ofstream file(getTarget() + "_shrubbery");
	if (file.fail())
		std::cerr << "Failed to open file." << std::endl;
	if (file.is_open())
	{
		file << "ASCII trees" << std::endl;
		file.close();
	}
	return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Shrubbery::getTarget(void) const
{
	return (_target);
}


/* ************************************************************************** */