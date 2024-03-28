/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 12:24:51 by wkonings      #+#    #+#                 */
/*   Updated: 2023/07/19 13:10:55 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <stack>

# define RED	"\1\33[38;5;196m\2"	
# define RESET	"\1\33[0m\2"

class RPN
{
	public:
		RPN(void);
		~RPN(void);
		RPN &operator=(RPN const &src);
		void	calculate(std::string input);
		
	private:
		RPN(const RPN &src);
		bool	validate_input(std::string input);
		void	do_math(char operation);
		void	beautiful_error(std::string error_msg);

		std::stack<long long>	_stack;
		std::string				_input;
		long long				_result;
		size_t 					_i;
		bool 					_valid;
};

#endif