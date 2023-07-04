/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/11 02:58:56 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	int *a = new int[8];
	std::cout << "test: " << a[0] << std::endl;

	try
	{
		Array<int> a(10);
		Array<int> b(15);
		// a[4] = "bornana";
		a[0] = 42;
		a[1] = 43;
		a[2] = 44;
		a[3] = 45;
		a[4] = 46;
		a[5] = 47;
		a[6] = 48;
		a[7] = 49;
		a[8] = 50;
		a[9] = 420;
		b = a;
		a[4] = 2421;
		std::cout << a[4] << std::endl;
		std::cout << b[4] << std::endl;
		// std::cout << a.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}