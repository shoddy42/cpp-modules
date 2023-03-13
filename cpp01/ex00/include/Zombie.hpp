/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 05:39:28 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 18:44:31 by wkonings      ########   odam.nl         */
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
		~Zombie(void);
		void	announce(void) const;

	private:
		std::string _name;
};

/**
 * @brief Creates and returns a heap zombie created by new
 * 
 * @param name The name to give to the zombie.
 * @return Zombie* 
 */
Zombie	*newZombie(std::string name);

/**
 * @brief Creates a zombie on the stack which will announce itself.
 * 
 * @param name The name to give to the zombie.
 */
void	randomChump(std::string name);

#endif
