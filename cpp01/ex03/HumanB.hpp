/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 05:07:27 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 06:44:47 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>


class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon& weapon);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
