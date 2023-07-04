/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 15:07:35 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:13:14 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/Base.hpp"
#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"

Base* generate(void)
{
	int number = rand();

	if (number % 3 == 0)
	{
		std::cout << "created A" << std::endl;
		return (new A);
	}
	else if (number % 3 == 1)
	{
		std::cout << "created B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "created C" << std::endl;
		return (new C);
	}
}

void identify_pointer(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "ptr: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "ptr: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "ptr: C" << std::endl;
}

void identify_reference(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "ref: A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "ref: B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "ref: C" << std::endl;
}