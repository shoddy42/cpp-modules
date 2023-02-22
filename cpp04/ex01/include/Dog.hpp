/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:01 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 22:27:42 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog &src);
		~Dog(void);
		Dog &operator=(const Dog &src);
		virtual Brain *getBrain(void) const;
		virtual void makeSound(void) const;
	
	private:
		Brain* brain;
};

#endif /* ********************************************************** DOG_H */