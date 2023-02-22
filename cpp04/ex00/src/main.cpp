/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 23:10:31 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 21:18:26 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/WrongDog.hpp"

void	wrong_tests(void)
{
	std::cout << std::endl << std::endl;

	const WrongAnimal* badmeta = new WrongAnimal();
	const WrongAnimal* baddog = new WrongDog();
	const WrongAnimal* badcat = new WrongCat();

	std::cout << baddog->getType() << " " << std::endl;
	std::cout << badcat->getType() << " " << std::endl;

	baddog->makeSound();
	badcat->makeSound();
	badmeta->makeSound();

	delete badmeta;
	delete baddog;
	delete badcat;
}

void	no_alloc_tests(void)
{
	std::cout << std::endl << std::endl;

	const Animal meta;
	const Dog dog;
	const Cat cat;

	std::cout << dog.getType() << " " << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	
	cat.makeSound();
	dog.makeSound();
	meta.makeSound();
}

void	wrong_no_alloc_tests(void)
{
	std::cout << std::endl << std::endl;

	const WrongAnimal meta;
	const WrongDog dog;
	const WrongCat cat;

	std::cout << dog.getType() << " " << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	
	cat.makeSound();
	dog.makeSound();
	meta.makeSound();
}

void	weird_test(void)
{
	std::cout << std::endl << std::endl;

	Animal joe;
	Cat garfield;

	joe.makeSound();
	joe = garfield;
	joe.makeSound();
}

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
	wrong_tests();
	no_alloc_tests();
	wrong_no_alloc_tests();
	weird_test();
	return (0);
}