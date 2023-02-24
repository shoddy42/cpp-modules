#include "Bureaucrat.hpp"

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
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

/* ************************************************************************** */