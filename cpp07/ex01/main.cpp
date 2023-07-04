/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 17:08:47 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cmath>

void test_int_array(void)
{
	int array[] = {1, 2, 3, 4, 5};
	
	std::cout << "Int array test: " << std::endl;
	::iter(array, 5, &print);
	std::cout << std::endl;
	::iter(array, 5, &add_one);
	::iter(array, 5, &print);
}

void test_double_array(void)
{
	double array[] = {1.5, 2.5, 3.5, 4.5, 5.5};
	
	std::cout << "Double array test: " << std::endl;
	::iter(array, 5, &print);
	std::cout << std::endl;
	::iter(array, 5, &add_one);
	::iter(array, 5, &print);
}

void test_char_array(void)
{
	char array[] = {'a', 'b', 'c', 'd', 'e'};
	
	std::cout << "Char array test: " << std::endl;
	::iter(array, 5, &print);
	std::cout << std::endl;
	::iter(array, 5, &add_one);
	::iter(array, 5, &print);
}

void test_string_array(void)
{
	std::string array[] = {"hello", "world", "!", "bye", "world"};
	
	std::cout << "String array test: " << std::endl;
	::iter(array, 5, &print);
}

int main(void)
{
	test_int_array();
	test_double_array();
	test_char_array();
	test_string_array();
	return (0);
}