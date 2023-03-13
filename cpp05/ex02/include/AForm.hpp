/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 15:44:27 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		int					_sign_grade;
		int					_exec_grade;

	public:
		Form(void);
		explicit Form(const std::string &name, int sign_grade, int exec_grade);
		Form(const Form &src);
		virtual ~Form(void) = 0;

		class GradeTooHighException;
		class GradeTooLowException;
		class UnsignedFormException;

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int 				getSignGrade(void) const;
		int 				getExecGrade(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);
		virtual bool		execute(const Bureaucrat &executor) const = 0;
		Form &operator=(const Form &src);
};


std::ostream &operator<<(std::ostream &stream, const Form &i);

class Form::GradeTooHighException: public std::exception
{
	public:
		virtual const char* what() const throw();
};

class Form::GradeTooLowException: public std::exception
{
	public:
		virtual const char* what() const throw();
};

class Form::UnsignedFormException: public std::exception
{
	public:
		virtual const char* what() const throw();
};

#endif /* ****************************************************** FORM_H */