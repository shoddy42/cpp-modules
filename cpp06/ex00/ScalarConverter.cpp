/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/21 20:50:59 by wkonings      ########   odam.nl         */
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

// bool ScalarConverter::is_char(std::string &literal) const
// {
// 	if (literal.length() > 1 || std::isdigit(literal[0]))
// 		return (false);
// 	return (true);
// }

// bool ScalarConverter::is_int(std::string &literal) const
// {
// 	literal.erase();
// 	return (true);
// }

// bool ScalarConverter::is_float(std::string &literal) const
// {
// 	size_t pos = literal.find('.');

// 	if (literal.back() == 'f' && pos != std::string::npos)
// 		return (false);
// 	return (true);
// }

// bool ScalarConverter::is_double(std::string &literal) const
// {
// 	literal.erase();
// 	return (true);	
// }

// void ScalarConverter::convert_int(std::string &literal) const
// {
// 	int value = std::stoi(literal);

// 	std::cout << "char: "   << static_cast<char>(value) << std::endl;
// 	std::cout << "int: "    << static_cast<int>(value) << std::endl;
// 	std::cout << "float: "  << static_cast<float>(value) << std::endl;
// 	std::cout << "double: " << static_cast<double>(value) << std::endl;
	
// }

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
	
}

int ScalarConverter::set_type(std::string &literal)
{
	_type = NOTHING;
	_type = special_cases(literal);
	if (_type != NOTHING)
		return (true);
	_type = find_type(literal);
		
	
}

void ScalarConverter::convert(std::string &literal)
{
	if (literal.empty())
		return ; //todo: error, empty
	set_type(literal);
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
