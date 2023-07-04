/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 20:11:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/04 21:49:33 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iomanip>
#include <iostream>


//todo: add tests for not enough capacity. test for maximum capacity
//todo: think of more tests.
void big_range(void)
{
	Span joe(10000000);
	try
	{
		Span joe_two = Span(5);

		joe.addRange(100, 10000000);
		joe.addNumber(1);
		for (size_t i = 0; i < joe._data.size(); i++)
		{
			std::cout << " " << joe._data[i];
		}
		std::cout << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << joe.shortestSpan() << std::endl;
	std::cout << joe.longestSpan() << std::endl;
}

void default_test(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	main(void)
{
	big_range();
	return (0);
}