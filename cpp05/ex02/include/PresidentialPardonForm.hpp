/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 20:00:54 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDON_HPP
# define PARDON_HPP
# include <iostream>
# include <string>
# include "AForm.hpp"

class Bureaucrat;

class Pardon: public Form
{
	private:
		const std::string _target;

	public:
		Pardon(void);
		explicit Pardon(const std::string &target);
		Pardon(const Pardon &src);
		virtual ~Pardon(void);

		const std::string	getTarget(void) const;
		virtual bool		execute(const Bureaucrat &executor) const;
		Pardon &operator=(const Pardon &src);
};

std::ostream &operator<<(std::ostream &stream, const Pardon &i);

#endif /* ****************************************************** SHRUBBERY_H */