/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 20:11:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/16 21:13:13 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap axton("Axton");
	ClapTrap krieg("Krieg");

	axton.attack("Krieg");
	krieg.takeDamage(5);
	krieg.attack("Axton");
	axton.takeDamage(0);
	krieg.beRepaired(3);
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");
	krieg.attack("Axton");


	return (0);
}