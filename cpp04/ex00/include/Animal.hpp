/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:39:42 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:45:08 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &src);
		virtual ~Animal(void);
		Animal &operator=(const Animal &src);

		const std::string &getType(void) const;
		virtual void makeSound(void) const;
};

#endif /* ********************************************************** ANIMAL_H */