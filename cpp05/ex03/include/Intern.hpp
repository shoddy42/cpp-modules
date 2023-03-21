/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 20:43:50 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/15 20:42:23 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

typedef struct	s_form_list
{
	std::string	form_name;
	Form		*form_type;
}				t_form_list;

class Form;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &src);
		~Intern(void);
		Form *makeForm(const std::string &name, const std::string &target);
		Intern &operator=(const Intern &src);
};

std::ostream &operator<<(std::ostream &stream, const Intern &i);

#endif /* ****************************************************** INTERN_H */
