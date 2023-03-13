/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 20:16:36 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/13 20:16:37 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName()), _grade(src.getGrade())
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		_grade = src.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &i)
{
	stream << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (form.getSigned())
		std::cout << getName() << " signed form: " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn't sign form: " << form.getName() 
			<< ", because their bureaucrat grade is too low" <<  std::endl;
}

void Bureaucrat::executeForm(const Form &form)
{
	try
	{
		if (form.execute(*this))
			std::cout << getName() << " has executed " << form.getName() << std::endl;
		else
			std::cout << getName() << " has failed to execute" << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::increaseGrade(int amount)
{
	_grade -= amount;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::decreaseGrade(int amount)
{
	_grade += amount;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Buteaucrat grade too low!");
}

/* ************************************************************************** */