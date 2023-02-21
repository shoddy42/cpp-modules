/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 01:20:21 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 01:33:48 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class WrongCat: public Animal
{
	protected:
		std::string type;

	public:
		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &src);
		virtual void makeSound(void);
};

#endif /* ********************************************************** WRONGCAT_H */