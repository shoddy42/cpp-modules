/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/07 15:44:44 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name("Default"), _signed(false), _sign_grade(150), _exec_grade(150)
{
}

Form::Form(const Form &src): _name(src.getName()), _signed(src.getSigned()),
	_sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
}

Form::Form(const std::string &name, int sign_grade, int exec_grade):
	_name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		_signed = src.getSigned();
		_sign_grade = src.getSignGrade();
		_exec_grade = src.getExecGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Form &i)
{
	stream << "Form: " << i.getName() << ", is signed?: " << i.getSigned()
		<< ", sign grade: " << i.getSignGrade() << ", exec grade: " << i.getExecGrade();
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getSignGrade())
		throw GradeTooLowException();
	_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getSignGrade(void) const
{
	return (_sign_grade);
}

int Form::getExecGrade(void) const
{
	return (_exec_grade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low!");
}

const char* Form::UnsignedFormException::what() const throw()
{
	return ("Form is not signed.");
}
/* ************************************************************************** */