/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/28 00:27:08 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	// float value;
	if (!av[1] || !av[1][0])
	{
		std::cout << "Error: empty input" << std::endl;
		return (1);
	}
	
	std::string test = av[1];
	ScalarConverter a;

	a.convert(test);
	// value = std::strtod(test, NULL);
	// std::cout << static_cast<float>(value) << std::endl;
	return (0);
}