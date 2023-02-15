/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 05:08:00 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 05:23:33 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		const std::string&	getType(void);
		void				setType(std::string type);

	private:
		std::string	type;
};



#endif
