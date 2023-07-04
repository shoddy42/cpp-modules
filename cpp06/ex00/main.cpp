/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/04/21 21:31:29 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (!av[1] || !av[1][0] || ac < 2)
	{
		std::cout << "Error: empty input" << std::endl;
		return (1);
	}
	
	std::string test = av[1];
	std::string tes2 = "45.6f";
	ScalarConverter a;

	a.convert(test);
	a.convert(test);
	a.convert(test);
	a.convert(tes2);
	return (0);
}