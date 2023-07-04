/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp          		                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:24:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T a, T b)
{
	T tmp;
	tmp = b;
	b = a;
	a = tmp;
};

template <typename T>
T max(const T a, const T b)
{
	return (a > b ? a : b);
};

template <typename T>
T min(const T a, const T b)
{
	return (a < b ? a : b);
};

#endif /* ****************************************************** WHATEVER_H */
