/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 20:11:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/20 22:56:32 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	{
		DiamondTrap joe("Psycho");
		joe.whoAmI();
		joe.attack("Dumbo");
		joe.beRepaired(70);
		joe.takeDamage(100);
	}
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	FragTrap frag("Fraggy");
		
	// 	frag.highFivesGuys();
	// 	frag.attack("Shaggy");
	// 	frag.takeDamage(50);
	// 	frag.beRepaired(49);
	// }
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ScavTrap salvador("Salvador");
	// 	salvador.beRepaired(5);
	// 	salvador.attack("Handsome Jack");
	// 	salvador.guardGate();
	// }
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ClapTrap krieg("Krieg");
	// 	krieg.beRepaired(4);
	// 	krieg.takeDamage(5);
	// 	krieg.attack("Axton");
	// }
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ClapTrap axton("Axton");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// 	axton.attack("Jeff");
	// }
	// //copying claptrap
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ClapTrap real("joe");
	// 	real.takeDamage(8);
	// 	ClapTrap copy(real);
	// 	copy.beRepaired(0);
	// 	ClapTrap standard;
	// 	standard.beRepaired(0);
	// 	standard = copy;
	// 	standard.beRepaired(0);
	// }
	// //copying scavtrap
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ScavTrap real("scav-joe");
	// 	real.takeDamage(8);
	// 	ScavTrap copy(real);
	// 	copy.beRepaired(0);
	// 	ScavTrap standard;
	// 	standard.beRepaired(0);
	// 	standard = copy;
	// 	standard.beRepaired(0);
	// }
	// //copying fragtrap
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	FragTrap real("frag-joe");
	// 	real.takeDamage(8);
	// 	FragTrap copy(real);
	// 	copy.beRepaired(0);
	// 	FragTrap standard;
	// 	standard.beRepaired(0);
	// 	standard = copy;
	// 	standard.beRepaired(0);
	// }
	// //out of health claptrap
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ClapTrap dead("dead");

	// 	dead.takeDamage(999);
	// 	dead.attack("Noone");
	// 	dead.beRepaired(1000);
	// }
	// //out of health scavtrap
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	ScavTrap dead("scav-dead");

	// 	dead.takeDamage(999);
	// 	dead.attack("Noone");
	// 	dead.beRepaired(1000);
	// 	dead.guardGate();
	// }
	// //out of health fragtrap
	// std::cout << "----------------------------------------------" << std::endl;
	// {
	// 	FragTrap dead("frag-dead");

	// 	dead.takeDamage(999);
	// 	dead.attack("Noone");
	// 	dead.beRepaired(1000);
	// 	dead.highFivesGuys();
	// }
	// return (0);
}