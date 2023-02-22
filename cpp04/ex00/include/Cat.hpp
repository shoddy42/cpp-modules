/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:06 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:34:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat &src);
		~Cat(void);
		Cat &operator=(const Cat &src);

		virtual void makeSound(void) const;
};

#endif /* ********************************************************** CAT_H */