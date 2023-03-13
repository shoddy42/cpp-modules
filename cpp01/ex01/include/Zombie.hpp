/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 05:39:28 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 19:10:54 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void) const;

	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
