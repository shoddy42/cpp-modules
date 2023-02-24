/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 00:10:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/24 01:21:16 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


void	decrease_below_150(void)
{
	try
	{
		Bureaucrat joe("joe", 150);
		std::cout << joe << std::endl;
		joe.decreaseGrade(999);
		std::cout << joe << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	increase_above_1(void)
{
	try
	{
		Bureaucrat bill("bill gates", 1);
		std::cout << bill << std::endl;
		bill.increaseGrade(999);
		std::cout << bill << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	start_below_150(void)
{
	try
	{
		Bureaucrat sam("sam", 151);
		std::cout << sam << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	start_above_1(void)
{
	try
	{
		Bureaucrat steve("steve jobs", 0);
		std::cout << steve << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	start_below_150();
	start_above_1();
	decrease_below_150();
	increase_above_1();
	return (0);
}