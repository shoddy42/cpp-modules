/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/28 00:35:51 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

e_types	ScalarConverter::special_cases(std::string &literal) const
{
	const std::string	special_doubles[] =
		{ "inf", "+inf", "-inf", "nan" };
	const std::string	special_floats[] =
		{ "inff", "+inff", "-inff", "nanf" };
		
	for (int i = 0; i < 4; i++)
	{
		if (special_doubles[i] == literal)
			return (DOUBLE);
		else if (special_floats[i] == literal)
			return (FLOAT);
	}
	return (NOTHING);
}

e_types ScalarConverter::find_type(std::string &literal) const
{
	size_t	i = 0;
	int		dot = 0;
	int		negative = 0;
	int		has_f = 0;

	if (literal.length() == 1 && !std::isdigit(literal[0]))
		return (CHAR);
	while (literal[i])
	{
		if (!std::isdigit(literal[i]) && literal[i] != '.' & literal[i] != '-' && literal[i] != 'f')
			return (NOTHING);
		if (literal[i] == '.')
		{
			if (!std::isdigit(literal[i - 1]) || !std::isdigit(literal[i + 1]))
				return (NOTHING);
			dot++;
		}
		else if (literal[i] == '-')
		{
			if (i != 0)
				return (NOTHING);
			negative++;
		}
		else if (literal[i] == 'f')
		{
			if (literal[i + 1] != 0)
				return (NOTHING);
			has_f++;
		}
		if (dot > 1 || negative > 1 || has_f > 1)
			return (NOTHING);
		i++;
	}
	if (literal[i - 1] == 'f' && dot > 0)
		return (FLOAT);
	if (literal[i - 1] == 'f' && dot == 0)
		return (NOTHING);
	if (dot > 0)
		return (DOUBLE);
	return (INT);
}

int ScalarConverter::set_type(std::string &literal)
{
	_type = NOTHING;
	_type = special_cases(literal);
	if (_type != NOTHING)
		return (true);
	_type = find_type(literal);
	if (_type == DOUBLE)
		std::cout << "DOUBLE" << std::endl;
	if (_type == CHAR)
		std::cout << "CHAR" << std::endl;
	if (_type == INT)
		std::cout << "INT" << std::endl;
	if (_type == FLOAT)
		std::cout << "FLOAT" << std::endl;
	if (_type == NOTHING)
		std::cout << "ERROR" << std::endl;
}

void ScalarConverter::convert_char(std::string &literal) const
{
	std::cout << "convert_char called" << std::endl;
}

void ScalarConverter::convert(std::string &literal)
{
	void (ScalarConverter::*functions[])(std::string &literal) const = 
	{
		NULL,
		&ScalarConverter::convert_char,
		&ScalarConverter::convert_char, //should be int
		&ScalarConverter::convert_char, //should be float
		&ScalarConverter::convert_char, //should be fouble
	};
	
	set_type(literal);
	(this->*functions[_type])(literal);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
