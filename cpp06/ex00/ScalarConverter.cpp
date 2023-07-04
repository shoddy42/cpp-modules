/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/04/21 21:29:54 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

e_types ScalarConverter::_type = NOTHING;


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

e_types	ScalarConverter::special_cases(std::string &literal)
{
	const std::string	special_doubles[] =
		{ "inf", "+inf", "-inf", "nan" };

	const std::string	special_floats[] =
		{ "inff", "+inff", "-inff", "nanf" };
		
	for (int i = 0; i < 4; i++)
	{
		if (special_doubles[i] == literal)
			return (SPECIAL_DOUBLE);
		else if (special_floats[i] == literal)
			return (SPECIAL_FLOAT);
	}
	return (NOTHING);
}

e_types ScalarConverter::regular_cases(std::string &literal)
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
	_type = regular_cases(literal);
	return (true);
}

e_types	ScalarConverter::get_type(void)
{
	return (_type);
}

void ScalarConverter::convert_char(std::string &literal)
{
	std::cout << "convert_char called" << std::endl;
	char c = literal[0];

	if (c < 32 || c > 126)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << c << '\'' << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convert_float(std::string &literal)
{
	std::cout << "convert_float called" << std::endl;
	float f;
	try
	{
		f = std::stof(literal);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: number too large to be an integer" << std::endl;
	}
	if (_type == SPECIAL_FLOAT)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (std::fabs(f) < 31 || std::fabs(f) > 126)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(std::fabs(f)) << '\'' << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;		
	}		
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convert_double(std::string &literal)
{
	std::cout << "convert_double called" << std::endl;
	double d;
	
	try
	{
		d = std::stod(literal);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: number too large to be a double" << std::endl;
		return;
	}
	if (_type == SPECIAL_DOUBLE)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (std::fabs(d) < 31 || std::fabs(d) > 126)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(std::fabs(d)) << '\'' << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;		
	}		
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert_int(std::string &literal)
{
	std::cout << "convert_int called" << std::endl;
	int i;
	try
	{
		i = std::stoi(literal);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: number too large to be an integer" << std::endl;
		return;
	}
	if (i < 32 || i > 126)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(std::fabs(i)) << '\'' << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void ScalarConverter::convert(std::string &literal)
{
	void (*functions[])(std::string &literal) = 
	{
		NULL,
		&ScalarConverter::convert_char,
		&ScalarConverter::convert_int,
		&ScalarConverter::convert_float,
		&ScalarConverter::convert_double,
		&ScalarConverter::convert_float,
		&ScalarConverter::convert_double,
	};
	set_type(literal);
	std::cout << std::fixed << std::setprecision(1);
	if (get_type() != 0)
		(*functions[get_type()])(literal);
	else
		std::cout << "Error: invalid input" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
