/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 05:14:41 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/15 14:58:46 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	my_tests(void)
{
	Fixed a(2.5f);
	Fixed b(10.5f);

	std::cout << "A + A = " << a + a << std::endl;
	std::cout << "B - A = " << b - a << std::endl;
	std::cout << "B * A = " << b * a << std::endl;
	std::cout << "B / A = " << b / a << std::endl;
	
}

int main(void)
{
	Fixed		a;
	// Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	my_tests();
	return (0);
}