/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 04:09:58 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 04:38:01 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);	
}
