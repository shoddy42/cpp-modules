/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/20 13:01:44 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	// float value;
	std::string test = ".f";
	ScalarConverter a;

	a.convert(test);
	// value = std::strtod(test, NULL);
	// std::cout << static_cast<float>(value) << std::endl;
	return (0);
}