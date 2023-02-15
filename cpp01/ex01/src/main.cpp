/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 04:08:24 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 04:46:21 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	int		amount = 20;
	Zombie	*horde = zombieHorde(amount, "Jimbo");

	for (int i = 0; i < amount; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}