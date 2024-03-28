/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/11 19:18:37 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 12:51:49 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
// #include <map>
// #include <fstream>

int	main(int ac, char **av)
{
	RPN math;
	(void)av;
	if (ac != 2)
	{
		std::cerr << "usage: ./RPN \"(inverted Polish mathematical expression)\"" << std::endl;
		return (1);
	}
	// math.validate_input(std::string(av[1]));
	math.calculate(std::string(av[1]));
}