/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 12:24:25 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 16:38:17 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN(void)
{
}

RPN::RPN(const RPN &src)
{
	if (this != &src)
		*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN(void)
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &RPN::operator=(RPN const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RPN::validate_input(std::string input)
{
	bool valid = true;
	bool last_was_number = false;

	int skip_initial_spaces = 0;
	while (input[skip_initial_spaces] == ' ')
		skip_initial_spaces++;
	if (!std::isdigit(input[skip_initial_spaces]))
	{
		std::cerr << RED << "Error: " << RESET << "Invalid notation" << std::endl;
		valid = false;
	}
	for (size_t i = skip_initial_spaces + 1; i < input.length() && valid == true; i++)
	{
		if (input[i] == ' ')
			continue;
		if (i == input.length() - 1 && (input[i] != '/' && input[i] != '-' && input[i] != '+' && input[i] != '*' && input[i] != ' '))
		{
			valid = false;
		}
		if (std::isdigit(input[i]) && last_was_number == false && valid == true)
			last_was_number = true;
		else if ((input[i] == '/' || input[i] == '-' || input[i] == '+' || input[i] == '*') && last_was_number == true && valid == true)
			last_was_number = false;
		else
		{
			std::cerr << RED << "Error: " << RESET << "Invalid notation." << std::endl;
			std::cerr << input.substr(0, i) << RED << input[i] << RESET << input.substr(i + 1, input.length()) << std::endl;
			for (size_t pad = 0; pad < i; pad++)
				std::cout << " ";
			
			std::cerr << RED << "^" << RESET << std::endl;
			if (std::isdigit(input[i]))
				std::cerr << "Notation cannot end on a number. It must end on an instruction!" << std::endl;
			valid = false;
		}
	}
	if (!valid)
		exit(1);
}

void RPN::do_math(char operation)
{
	int number = stack.top();
	stack.pop();
	// std::cout << "doing math operation: " << stack.top() << " " << operation << " " << number << " = ";
	if (operation == '+')
		stack.top() += number;
	else if (operation == '-')
		stack.top() -= number;
	else if (operation == '/')
		stack.top() /= number;
	else if (operation == '*')
		stack.top() *= number;

	// std::cout << stack.top() << std::endl;
	result = stack.top();
}

void RPN::calculate(std::string input)
{
	validate_input(input);

	if (input.length() == 1)
		result = input[0] - '0';
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			continue;
		else if (std::isdigit(input[i]))
			stack.push(input[i] - '0');
		else if (input[i] == '*' || input[i] == '+' || input[i] == '-' || input[i] == '/')
			do_math(input[i]);
	}
	std::cout << result << std::endl;
}


/* ************************************************************************** */