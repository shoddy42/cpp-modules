/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:39:42 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 21:48:12 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &src);
		virtual ~Animal(void);
		virtual Animal &operator=(const Animal &src);
		virtual Brain *getBrain(void) const;
		const std::string &getType(void) const;
		virtual void makeSound(void) const;
};

#endif /* ********************************************************** ANIMAL_H */