/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:34:06 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:34:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &src);

		void makeSound(void) const;
};

#endif /* ********************************************************** WRONGCAT_H */