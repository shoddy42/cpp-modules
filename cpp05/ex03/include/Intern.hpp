/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 20:43:50 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 23:16:12 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
// # include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &src);
		~Intern(void);
		void makeForm(const std::string &name, const std::string &target);
		Intern &operator=(const Intern &src);
};

std::ostream &operator<<(std::ostream &stream, const Intern &i);

#endif /* ****************************************************** INTERN_H */
