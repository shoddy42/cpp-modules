/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 20:39:42 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/21 20:45:08 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &src);

		const std::string &getType(void) const;
		void makeSound(void) const;
};

#endif /* ********************************************************** ANIMAL_H */