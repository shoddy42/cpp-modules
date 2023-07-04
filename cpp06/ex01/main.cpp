/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 20:55:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/04/21 03:22:25 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void regular_case(void)
{
	Data joe;

	Data *also_joe;
	uintptr_t ptr;

	ptr = Serializer::serialize(&joe);
	also_joe = Serializer::deserialize(ptr);

	joe.name = "regular joe";
	joe.number = 42;

	//print pointers
	std::cout << "joe:      " << &joe << std::endl;
	std::cout << "also_joe: " << &also_joe->name << std::endl;
	
	//print name
	std::cout << "joe:      " << also_joe->name << std::endl;
	std::cout << "also_joe: " << joe.name << std::endl;
	joe.name = "joe";
	std::cout << "joe:      " << also_joe->name << std::endl;
	std::cout << "also_joe: " << joe.name << std::endl;

	//print number
	std::cout << "joe:      " << also_joe->number << std::endl;
	std::cout << "also_joe: " << joe.number << std::endl;	
	also_joe->number = 420;
	std::cout << "joe:      " << also_joe->number << std::endl;
	std::cout << "also_joe: " << joe.number << std::endl;	
}

int	main(void)
{
	regular_case();
	return (0);
}