/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 12:24:25 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 13:19:56 by wkonings      ########   odam.nl         */
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

/**
 * @brief Outputs a more helpful and coloured error message.
 * 	Displays a red arrow where the error occured.
 * 
 * @param error_msg 
 */
void	RPN::beautiful_error(std::string error_msg)
{
	std::cerr << RED << "Error: " << RESET << error_msg << std::endl;
	std::cerr << _input.substr(0, _i) << RED << _input[_i] << RESET << _input.substr(_i + 1, _input.length()) << std::endl;
	for (size_t pad = 0; pad < _i; pad++)
		std::cout << " ";
	std::cerr << RED << "^" << RESET << std::endl;
}

/**
 * @brief Detects invalid characters, and guarantees spaces.
 * 
 * @return @b false if any mistake is found.
 * @return @b true in any other case.
 */
bool RPN::validate_input(std::string input)
{
	bool	has_space = true;
	size_t	skip_initial_spaces = 0;

	while (input[skip_initial_spaces] == ' ')
		skip_initial_spaces++;
	if (!std::isdigit(input[skip_initial_spaces]) && !(input[skip_initial_spaces] == '-' && skip_initial_spaces + 1 < input.length() && std::isdigit(input[skip_initial_spaces + 1])))
	{
		std::cerr << RED << "Error: " << RESET << "Must start on a number!" << std::endl;
		return (false);
	}
	for (_i = skip_initial_spaces + 1; _i < input.length(); _i++)
	{
		if (input[_i] == ' ')
		{
			has_space = true;
			continue;
		}
		if (has_space == false && !(_i - 1 > 0 && input[_i - 1] == '-' && std::isdigit(input[_i]) != 0))
		{
			beautiful_error("Ensure a space between every character. (except negative numbers)");
			return (false);
		}
		if (input[_i] != '/' && input[_i] != '-' && input[_i] != '+' && input[_i] != '*')
		{
			if (!std::isdigit(input[_i]))
			{
				beautiful_error("Invalid character.");
				return (false);
			}
		}
		has_space = false;
	}
	_valid = true;
	return (true);
}

void RPN::do_math(char operation)
{
	if (_stack.size() < 2)
	{
		beautiful_error("Stack too small at this operator.");
		_valid = false;
	}

	int number = _stack.top();
	if (_stack.size() > 1)
		_stack.pop();
	
	// std::cout << "doing math operation: " << _stack.top() << " " << operation << " " << number << " = ";
	if (operation == '+')
		_stack.top() += number;
	else if (operation == '-')
		_stack.top() -= number;
	else if (operation == '/')
	{
		if (number == 0)
		{
			beautiful_error("Dividing by zero!");
			_valid = false;
		}
		else
			_stack.top() /= number;
	}
	else if (operation == '*')
		_stack.top() *= number;
	// std::cout << _stack.top() << std::endl;
}

void RPN::calculate(std::string input)
{
	_input = input;
	if (!validate_input(input))
		return;
	if (input.length() == 1)
		_result = input[0] - '0';
	for (_i = 0; _i < input.length() && _valid; _i++)
	{
		if (input[_i] == ' ')
			continue;
		if (input[_i] == '-' && _i + 1 < input.size() && std::isdigit(input[_i + 1]))
		{
			_stack.push((input[_i + 1] - '0') * -1);
			_i++;
		}	
		else if (std::isdigit(input[_i]))
			_stack.push(input[_i] - '0');
		else
			do_math(input[_i]);
	}
	if (_stack.size() > 1 && _valid)
	{
		std::cerr << RED << "Error: " << RESET << _stack.size() - 1 << " Numbers without operators!" << std::endl;
		return;
	}
	if (_valid == false)
		return;
	_result = _stack.top();
	std::cout << _result << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */