/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 20:07:52 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Robotomy::Robotomy(): Form("RobotomyRequestForm", 72, 45), _target("Default")
{
}

Robotomy::Robotomy(const Robotomy &src):
	Form(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
}

Robotomy::Robotomy(const std::string &target): 
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Robotomy::~Robotomy()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Robotomy &Robotomy::operator=(const Robotomy &src)
{
	if (this != &src)
	{
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Robotomy &i)
{
	stream << "Robotomy: " << i.getName() << ", is signed?: " << i.getSigned()
		<< ", sign grade: " << i.getSignGrade() << ", exec grade: " << i.getExecGrade();
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


bool Robotomy::execute(const Bureaucrat &executor) const
{
	if (getSigned() == false)
		throw UnsignedFormException();
	if (executor.getGrade() > getExecGrade())
		return (false);
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << "'s robotomy has failed." << std::endl;
	return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Robotomy::getTarget(void) const
{
	return (_target);
}


/* ************************************************************************** */