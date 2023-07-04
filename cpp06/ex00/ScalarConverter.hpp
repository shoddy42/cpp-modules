/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/04/21 22:02:00 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

typedef enum t_types
{
	NOTHING,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL_FLOAT,
	SPECIAL_DOUBLE,
}	e_types;

class ScalarConverter
{
	public:
		static void convert(std::string &literal);

	private:
		static e_types	_type;

		static int		set_type(std::string &literal);
		static e_types	get_type(void);
		static e_types	special_cases(std::string &literal);
		static e_types	regular_cases(std::string &literal);
		static void 	convert_char(std::string &literal);
		static void 	convert_int(std::string &literal);
		static void 	convert_float(std::string &literal);
		static void 	convert_double(std::string &literal);
};

#endif /* ****************************************************** SCALARCONVERTER_H */
