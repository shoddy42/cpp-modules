/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 04:51:11 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/08 16:18:14 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Str address: " << &str << std::endl;
	std::cout << "Ptr address: " << ptr << std::endl;
	std::cout << "Ref address: " << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "Str: [" << str << "]" << std::endl;
	std::cout << "Ptr: [" << *ptr << "]" << std::endl;
	std::cout << "Ref: [" << ref << "]" << std::endl;
	return (0);
}