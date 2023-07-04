/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:13:07 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/Base.hpp"
#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"

Base*	generate(void);
void	identify_pointer(Base* p);
void	identify_reference(Base& p);

void test(void)
{
	Base *pointer = generate();
	Base &reference = *pointer;
	
	identify_pointer(pointer);
	identify_reference(reference);
	delete pointer;
}

int	main(void)
{
	std::srand((std::time(nullptr)));

	test();
	test();
	test();
	test();
	test();
	return (0);
}