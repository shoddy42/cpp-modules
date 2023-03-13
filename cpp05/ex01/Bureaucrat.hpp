/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 20:44:00 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 20:44:01 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		explicit Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);

		class GradeTooHighException;
		class GradeTooLowException;

		const std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(int amount);
		void decreaseGrade(int amount);
		void signForm(Form &form) const;

		Bureaucrat &operator=(const Bureaucrat &src);

};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &i);

class Bureaucrat::GradeTooHighException: public std::exception
{
	public:
		virtual const char* what() const throw();
};

class Bureaucrat::GradeTooLowException: public std::exception
{
	public:
		virtual const char* what() const throw();
};

#endif /* ****************************************************** BUREAUCRAT_H */