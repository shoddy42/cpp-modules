/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 05:08:00 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/08 16:37:37 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
