/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                               		    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:24:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <cstddef>
# include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*function)(T &a))
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
};

template <typename T>
void print(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void add_one(T &a)
{
	a++;
}

#endif /* ****************************************************** ITER_H */
