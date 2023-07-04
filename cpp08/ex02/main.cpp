/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 20:11:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/24 21:19:54 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutatedStack.hpp"
#include <iomanip>
#include <iostream>

int	main(void)
{
	MutatedStack<int> test;
	test.push(10);
	test.push(50);
	test.push(500);
	test.push(5000);
	test.push(50000);
	test.push(500000);
	test.push(5000000);
	test.push(50000000);
	test.push(500000000);

	MutatedStack<int>::iterator e;
	e = test.begin();

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << *e << std::endl;
		e++;
	}
	
	return (0);
}