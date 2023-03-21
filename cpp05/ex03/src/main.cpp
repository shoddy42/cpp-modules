/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 00:10:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/15 20:41:34 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

void leak(void)
{
	system("leaks forms_4");
}

void fail_to_create_shrubbery(void)
{
	Intern someRandomIntern;
	Form* scf;
	scf = someRandomIntern.makeForm("no shrubbery creation", "tree");
	delete scf;
}

void fail_to_create_robotomy(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("no robotomy request", "Bender");
	delete rrf;
}


void fail_to_create_pardon(void)
{
	Intern someRandomIntern;
	Form* ppf;
	ppf = someRandomIntern.makeForm("no presidential pardon", "joe");
	delete ppf;
}

void create_shrubbery(void)
{
	Intern someRandomIntern;
	Form* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "tree");
	delete scf;
}

void create_robotomy(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
}

void create_pardon(void)
{
	Intern someRandomIntern;
	Form* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "joe");
	delete ppf;
}

int	main(void)
{
	// atexit(&leak);

	create_shrubbery();
	create_robotomy();
	create_pardon();

	std::cout << std::endl;

	fail_to_create_shrubbery();		
	fail_to_create_robotomy();		
	fail_to_create_pardon();	
	return (0);
}
