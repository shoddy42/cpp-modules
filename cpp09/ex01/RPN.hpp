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
# include <fstream>
# include <string>
# include <stack>
# include <cstdlib>

// colours
# define RED	"\1\33[38;5;196m\2"	
# define RESET	"\1\33[0m\2"

class RPN
{
	public:
		RPN(void);
		RPN(const RPN &src);
		~RPN(void);
		RPN &operator=(RPN const &src);
		void	calculate(std::string input);
		
	private:
		void	validate_input(std::string input);
		void	do_math(char operation);
		std::stack<int> stack;
		int result;
};

#endif
