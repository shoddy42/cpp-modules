/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 21:28:37 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 22:05:05 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:
		Brain(void);
		Brain(const Brain &src);
		~Brain(void);

		Brain &operator=(const Brain &src);
		std::string ideas[100];

	private:

};

#endif /* *********************************************************** BRAIN_H */