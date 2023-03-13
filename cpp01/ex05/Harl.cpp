/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 08:44:32 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/09 18:48:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complaints[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	const std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
		
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*complaints[i])();
}

void	Harl::debug(void)
{
	std::cout << VIOLET << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << ORANGE << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month.";
	std::cout << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "This is unacceptable! I want to speak to the manager, NOW!";
	std::cout << RESET << std::endl;
}
