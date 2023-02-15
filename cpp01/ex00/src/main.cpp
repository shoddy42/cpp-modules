/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 05:43:07 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/08 06:06:41 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	Zombie *joe;
		
	joe = newZombie("sauce");
	joe->announce();
	joe->~Zombie();
	randomChump("joeseph");
	return (0);
}