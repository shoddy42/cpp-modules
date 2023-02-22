/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongDog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:06 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:34:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(const WrongDog &src);
		~WrongDog(void);
		WrongDog &operator=(const WrongDog &src);

		void makeSound(void) const;
};

#endif /* ********************************************************** WRONGDOG_H */