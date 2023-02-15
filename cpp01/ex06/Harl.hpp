/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 08:44:40 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/10 10:03:43 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>
# define VIOLET	"\1\33[38;5;183m\2"
# define RESET	"\1\33[0m\2"
# define YELLOW	"\1\33[38;5;220m\2"
# define ORANGE	"\1\33[38;5;202m\2"
# define RED	"\1\33[38;5;196m\2"

class Harl
{
	public:
		Harl(void);
		~Harl();
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif
