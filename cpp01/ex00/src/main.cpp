/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 05:43:07 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 18:53:48 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie *test_function(void)
{
	Zombie *joe = newZombie("joe");
	{
		Zombie steve("steve");
		steve.announce();
	}
	return (joe);
}

int	main(void)
{
	Zombie *joe = test_function();
	randomChump("chump");
	joe->announce();
	delete (joe);
	return (0);
}