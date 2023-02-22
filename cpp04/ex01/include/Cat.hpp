/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:06 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 21:49:41 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat &src);
		~Cat(void);
		Cat &operator=(const Cat &src);
		virtual Brain *getBrain(void) const;
		virtual void makeSound(void) const;

	private:
		Brain* brain;
};

#endif /* ********************************************************** CAT_H */