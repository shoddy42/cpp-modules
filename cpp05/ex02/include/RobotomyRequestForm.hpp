/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/09 20:47:11 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP
# include <iostream>
# include <string>
# include "AForm.hpp"

class Bureaucrat;

class Robotomy: public Form
{
	private:
		const std::string _target;

	public:
		Robotomy(void);
		explicit Robotomy(const std::string &target);
		Robotomy(const Robotomy &src);
		virtual ~Robotomy(void);

		const std::string	getTarget(void) const;
		virtual bool		execute(const Bureaucrat &executor) const;
		Robotomy &operator=(const Robotomy &src);
};

std::ostream &operator<<(std::ostream &stream, const Robotomy &i);

#endif /* ****************************************************** SHRUBBERY_H */