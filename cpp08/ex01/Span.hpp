/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp 		                              	    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:24:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>

//todo: move _data to private section??
class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src); //finish define
		~Span(void);
		void addNumber(int number);
		void addRange(int start, int end);
		int  shortestSpan(void);
		int  longestSpan(void);
		Span &operator= (const Span &A);
		std::vector<int>	_data;

	private:
		unsigned int 		_capacity;
};

#endif /* ****************************************************** SPAN_HPP */
