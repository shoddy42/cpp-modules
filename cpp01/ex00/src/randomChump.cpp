/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 06:01:55 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 04:07:00 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie chump = Zombie(name);
	chump.announce();
}