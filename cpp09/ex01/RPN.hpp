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

class RPN
{
	public:
		RPN(void);
		RPN(const RPN &src);
		~RPN(void);
		RPN &operator=(RPN const &src);
		void	validate_input(std::string input);
		void	build_stack(std::string input);
		void	do_math(char operation);
		
	private:
		std::stack<int> stack;
		int result;
		// std::map<std::string, float> database;
};


#endif /* ********************************************* MUTATED_STACK_HPP */
