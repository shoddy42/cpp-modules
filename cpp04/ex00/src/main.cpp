/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 23:10:31 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 01:44:00 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	// j->makeSound();
	meta->makeSound();

	// delete meta;
	// delete i;
	return 0;
}