/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 20:11:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/20 20:03:53 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
		ScavTrap salvador("Salvador");
		salvador.beRepaired(5);
		salvador.attack("Handsome Jack");
		salvador.guardGate();
	}
	std::cout << "----------------------------------------------" << std::endl;
	{
		ClapTrap krieg("Krieg");
		krieg.beRepaired(4);
		krieg.takeDamage(5);
		krieg.attack("Axton");
	}
	std::cout << "----------------------------------------------" << std::endl;
	{
		ClapTrap axton("Axton");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
		axton.attack("Jeff");
	}
	//copying claptrap
	std::cout << "----------------------------------------------" << std::endl;
	{
		ClapTrap real("joe");
		real.takeDamage(8);
		ClapTrap copy(real);
		copy.beRepaired(0);
		ClapTrap standard;
		standard.beRepaired(0);
		standard = copy;
		standard.beRepaired(0);
	}
	//copying scavtrap
	std::cout << "----------------------------------------------" << std::endl;
	{
		ScavTrap real("scav-joe");
		real.takeDamage(8);
		ScavTrap copy(real);
		copy.beRepaired(0);
		ScavTrap standard;
		standard.beRepaired(0);
		standard = copy;
		standard.beRepaired(0);
	}
	//out of health claptrap
	std::cout << "----------------------------------------------" << std::endl;
	{
		ClapTrap dead("dead");

		dead.takeDamage(999);
		dead.attack("Noone");
		dead.beRepaired(1000);
	}
	//out of health scavtrap
	std::cout << "----------------------------------------------" << std::endl;
	{
		ScavTrap dead("scav-dead");

		dead.takeDamage(999);
		dead.attack("Noone");
		dead.beRepaired(1000);
		dead.guardGate();
	}
	return (0);
}