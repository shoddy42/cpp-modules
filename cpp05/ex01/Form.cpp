#include "Form.hpp"

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
	_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	// if (_grade < 1)
	// 	throw GradeTooHighException();
	// if (_grade > 150)
	// 	throw GradeTooLowException();
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
		_sign_grade = src.getSignGrade();
		_exec_grade = src.getExecGrade();
		_signed = src.getSigned();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Form &i)
{
	stream << "Form: " << i.getName() << ", is signed?: " << i.getSigned()
		<< ", sign grade: " << i.getSignGrade() << ", exec grade: ", i.getExecGrade();
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


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
	return ("Form grade set too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade set too low!");
}

/* ************************************************************************** */