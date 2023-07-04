/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 20:11:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/04 19:57:37 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iomanip>
#include <iostream>
#include <typeinfo>

#include <list>
#include <vector>
#include <deque>

template <typename T>
void	case_first(T &container)
{
	std::cout << "case first: ";
	try
	{
		std::cout << *easyfind(container, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

template <typename T>
void	case_eol(T &container)
{
	std::cout << "case eol: ";
	try
	{
		std::cout << *easyfind(container, 100) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

template <typename T>
void	not_in_list(T &container)
{
	std::cout << "not in list: ";
	try
	{
		std::cout << *easyfind(container, -10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

template <typename T>
void	success_case(T &container)
{
	std::cout << "success case: ";
	try
	{
		std::cout << *easyfind(container, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	std::list<int> int_list;
	std::deque<double> double_deque;
	std::vector<size_t> sizet_vector;

	for (size_t i = 0; i <= 100; i++)
	{
		int_list.push_back(i);
		double_deque.push_back(i);
		sizet_vector.push_back(i);
	}
	
	std::cout << "int tests" << std::endl;
	success_case(int_list);
	not_in_list(int_list);
	case_eol(int_list);
	case_first(int_list);
	
	std::cout << std::endl << "double tests" << std::endl;
	success_case(double_deque);
	not_in_list(double_deque);
	case_eol(double_deque);
	case_first(double_deque);

	std::cout << std::endl << "size_t tests" << std::endl;
	success_case(sizet_vector);
	not_in_list(sizet_vector);
	case_eol(sizet_vector);
	case_first(sizet_vector);
	return (0);
}