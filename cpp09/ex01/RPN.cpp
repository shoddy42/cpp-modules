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

void RPN::validate_input(std::string input)
{
	bool valid = true;

	for (size_t i = 0; i < input.length() && valid == true; i++)
	{
		if (input[i] != '/' && input[i] != '-' && input[i] != '+' && input[i] != '*' && !std::isdigit(input[i]))
			valid = false;
		i++;
		if (i == input.length())
			break;
		if (input[i] != ' ')
			valid = false;
	}
	if (!valid)
	{
		std::cerr << "Error" << std::endl;
		exit(1);
	}
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

void RPN::build_stack(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			continue;
		else if (std::isdigit(input[i]))
			stack.push(input[i] - '0');
		else
			do_math(input[i]);
			
	}
	std::cout << result << std::endl;
}




/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */