#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
// # include "Bureaucrat.hpp"

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
		~Form(void);

		class GradeTooHighException;
		class GradeTooLowException;

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int 				getSignGrade(void) const;
		int 				getExecGrade(void) const;
		void				beSigned(Bureaucrat &bureaucrat);
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

#endif /* ****************************************************** FORM_H */