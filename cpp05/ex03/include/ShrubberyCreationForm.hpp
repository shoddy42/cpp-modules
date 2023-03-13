/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 15:43:00 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP
# include <iostream>
# include <string>
# include "AForm.hpp"

class Bureaucrat;

class Shrubbery: public Form
{
	private:
		const std::string _target;

	public:
		Shrubbery(void);
		explicit Shrubbery(const std::string &target);
		Shrubbery(const Shrubbery &src);
		virtual ~Shrubbery(void);

		const std::string	getTarget(void) const;
		virtual bool		execute(const Bureaucrat &executor) const;
		Shrubbery &operator=(const Shrubbery &src);
};

std::ostream &operator<<(std::ostream &stream, const Shrubbery &i);

#endif /* ****************************************************** SHRUBBERY_H */