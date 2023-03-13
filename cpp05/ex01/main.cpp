/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 00:10:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/06 18:35:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	start_sign_below_150(void)
{
	try
	{
		Form free_sun("free sunlight", 151, 42);
		std::cout << free_sun << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	start_exec_below_150(void)
{
	try
	{
		Form free_sun("free sunlight", 42, 151);
		std::cout << free_sun << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	start_sign_above_1(void)
{
	try
	{
		Form free_pizza("free pizza", 0, 42);
		std::cout << free_pizza << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	start_exec_above_1(void)
{
	try
	{
		Form free_pizza("free pizza", 42, 0);
		std::cout << free_pizza << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	sign_form_too_low(void)
{
	try
	{
		Bureaucrat obama("obama", 150);
		Form	   form("Demon summoning pact", 22, 24);

		std::cout << form << std::endl;
		obama.signForm(form);
		std::cout << form << std::endl;
		std::cout << obama << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	sign_form_success(void)
{
	try
	{
		Bureaucrat steve("steve jobs", 2);
		Form	   doi("Declaration of Independance", 22, 24);

		std::cout << doi << std::endl;
		steve.signForm(doi);
		std::cout << doi << std::endl;
		std::cout << steve << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


void	sign_form_egal(void)
{
	try
	{
		Bureaucrat clown("bozo", 1);
		Form	   form("Project Ascension", 1, 1);

		std::cout << form << std::endl;
		clown.signForm(form);
		std::cout << form << std::endl;
		std::cout << clown << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	std::cout << std::endl << "sign below 150:" << std::endl;
	start_sign_below_150();
	std::cout << std::endl << "exec below 150:" << std::endl;
	start_exec_below_150();
	std::cout << std::endl << "sign above 1:" << std::endl;
	start_sign_above_1();
	std::cout << std::endl << "exec above 1:" << std::endl;
	start_exec_above_1();
	std::cout << std::endl << "form too low:" << std::endl;
	sign_form_too_low();
	std::cout << std::endl << "form egal:" << std::endl;
	sign_form_egal();
	std::cout << std::endl << "success:" << std::endl;
	sign_form_success();
	return (0);
}