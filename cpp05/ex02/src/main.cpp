/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 00:10:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 20:45:09 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

void	shrubbery_bureaucrat_cant_exe(void)
{
	std::cout << std::endl << "shrubbery: bureaucrat too low to execute" << std::endl;
	Bureaucrat	joe("joe", 138);
	Shrubbery	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	shrubbery_bureaucrat_too_low(void)
{
	std::cout << std::endl << "shrubbery: bureaucrat too low to sign" << std::endl;
	Bureaucrat	joe("joe", 150);
	Shrubbery	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	shrubbery_success(void)
{
	std::cout << std::endl << "shrubbery: success" << std::endl;
	Bureaucrat	joe("joe", 130);
	Shrubbery	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	robotomy_bureaucrat_cant_exe(void)
{
	std::cout << std::endl << "robotomy: bureaucrat too low to execute" << std::endl;
	Bureaucrat	joe("joe", 138);
	Robotomy	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	robotomy_bureaucrat_too_low(void)
{
	std::cout << std::endl << "robotomy: bureaucrat too low to sign" << std::endl;
	Bureaucrat	joe("joe", 150);
	Robotomy	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	robotomy_success(void)
{
	std::cout << std::endl << "robotomy: success" << std::endl;
	Bureaucrat	joe("joe", 5);
	Robotomy	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
	joe.executeForm(plant);
}

void	pardon_bureaucrat_cant_exe(void)
{
	std::cout << std::endl << "pardon: bureaucrat too low to execute" << std::endl;
	Bureaucrat	joe("joe", 6);
	Pardon	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	pardon_bureaucrat_too_low(void)
{
	std::cout << std::endl << "pardon: bureaucrat too low to sign" << std::endl;
	Bureaucrat	joe("joe", 150);
	Pardon	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

void	pardon_success(void)
{
	std::cout << std::endl << "pardon: success" << std::endl;
	Bureaucrat	joe("joe", 5);
	Pardon	plant("bush");

	joe.signForm(plant);
	joe.executeForm(plant);
}

int	main(void)
{
	shrubbery_success();
	shrubbery_bureaucrat_too_low();
	shrubbery_bureaucrat_cant_exe();

	robotomy_bureaucrat_cant_exe();
	robotomy_bureaucrat_too_low();
	robotomy_success();

	pardon_success();
	pardon_bureaucrat_too_low();
	pardon_bureaucrat_cant_exe();
	
	return (0);
}