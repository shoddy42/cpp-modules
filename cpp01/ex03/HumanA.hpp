/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 05:05:41 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 06:01:52 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>


class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		// HumanA(void);
		~HumanA();
		void	attack();
		
	private:
		std::string	name;
		Weapon&		weapon;
};

#endif
