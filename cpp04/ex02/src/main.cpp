/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 23:10:31 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/22 23:05:24 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

void leak_check(void)
{
	system("leaks abstract");
}

int main(void)
{
	Animal *animals[10];
	
	Brain *brain;
	Brain *other_brain;

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	brain = animals[0]->getBrain();
	brain->ideas[0] = "Test string";
	brain->ideas[1] = "String two";
	brain->ideas[2] = "Electric Boogaloo";
	
	std::cout << "set brain: " << animals[0]->getBrain()->ideas[2] << std::endl;
	std::cout << "pre copied brain: " << animals[6]->getBrain()->ideas[2] << std::endl;

	*animals[6] = *animals[0];
	// *(animals[6]) = *(animals[0]);

	// animals[6]->makeSound();
	std::cout << "after copied brain: " << animals[6]->getBrain()->ideas[2] << std::endl;
	other_brain = animals[5]->getBrain();
	// delete animals[0];
	std::cout << "check brain: " << animals[6]->getBrain()->ideas[2] << std::endl;
	// *other_brain = *brain;
	// std::cout << "copied brain: " << animals[5]->getBrain()->ideas[2] << std::endl;
	// brain = NULL;
	// other_brain = NULL;
	for (int i = 0; i < 8; i++)
	{
		if (animals[i] && animals[i]->getBrain() != NULL)
			delete animals[i];
	}
		
	// while (true)
	// 	;
	// atexit(&leak_check);
	return (0);
}