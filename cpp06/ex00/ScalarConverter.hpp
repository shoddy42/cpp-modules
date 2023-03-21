/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/03/21 20:51:17 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>

typedef enum t_types
{
	NOTHING,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
}	e_types;

class Bureaucrat;

class ScalarConverter
{
	public:
		void convert(std::string &literal);

	private:
		e_types	_type;
		// char	_char;
		// int		_int;
		// float	_float;
		// double	_double;
		// bool is_valid(std::string &literal) const;

		// bool is_char(std::string &literal) const;
		// bool is_int(std::string &literal) const;
		// bool is_float(std::string &literal) const;
		// bool is_double(std::string &literal) const;

		e_types	special_cases(std::string &literal) const;
		int		set_type(std::string &literal);
		e_types find_type(std::string &literal) const;
		// void convert_char(std::string &literal) const;
		// void convert_int(std::string &literal) const;
		// void convert_float(std::string &literal) const;
		// void convert_double(std::string &literal) const;

};

#endif /* ****************************************************** SCALARCONVERTER_H */
