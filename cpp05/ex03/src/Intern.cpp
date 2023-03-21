/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 20:16:32 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/15 20:42:30 by wkonings      ########   odam.nl         */
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

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	t_form_list forms[] = 
	{
		{ "presidential pardon", new Pardon(target) },
		{ "robotomy request", new Robotomy(target) },
		{ "shrubbery creation", new Shrubbery(target) },
		{ "", NULL }
	};
	Form	*form = NULL;

	for (int i = 0; forms[i].form_type != NULL; i++)
	{
		if (forms[i].form_name == name)
			form = forms[i].form_type;
		else
			delete forms[i].form_type;
	}
	if (form == NULL)
		std::cout << "Intern did not find the " << name << " form" << std::endl;
	else
		std::cout << "Intern creates " << name  << " form" << std::endl;
	return (form);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
