/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                               	    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:24:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator ret = find(container.begin(), container.end(), value);

	if (ret == container.end())
		throw std::out_of_range("Number not found");
	return (ret);
}

#endif /* ****************************************************** EASYFIND_HPP */
