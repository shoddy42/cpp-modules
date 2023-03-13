/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 20:16:32 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/14 00:36:16 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	if (this != &src)
		*this = src;

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(const Intern &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Intern &i)
{
	stream << "intern";
	(void)i;
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Intern::makeForm(const std::string &name, const std::string &target)
{
	const std::string form_types[3] = 
	{
		"presidential pardon", "shrubbery creation", "robotomy request"
	};

	Form *test;
	for (size_t i = 0; i < 3; i++)
		if (name == form_types[i])

			
	
	// return (test);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
