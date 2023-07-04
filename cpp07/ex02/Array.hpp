/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                               		    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 18:42:23 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/02 15:24:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstddef>
# include <iostream>

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;

	public:
		Array(int n): _array(NULL), _size(n)
		{
			if (n <= 0)
				throw std::range_error("Negative allocation");
			_array = new T[n];
		};

		Array(void): _array(new T[0]), _size(0) {};

		Array(Array &src): _array(NULL), _size(src.size())
		{
			if (this == &src || src.size() < 1)
				return;
			_array = new T[src.size()];
				std::cout << "huh: " << src.size() << std::endl;
			for (size_t i = 0; i < _size; i++)
				_array[i] = src._array[i];
		};

		~Array(void) { delete[] _array; };
		size_t size(void) const { return (_size); };

		Array<T> &operator=(const Array &src)
		{
			std::cout << "equalling!" << std::endl;
			if (this == &src || src.size() < 1)
				return (*this);
			for (size_t i = 0; i < _size && i < src.size(); i++)
				_array[i] = src._array[i];
			return (*this);
		};

		const T& operator[](unsigned int idx) const
		{
			if (idx >= _size)
        		throw std::out_of_range("Index out of range");
    		return _array[idx];
		};

		T& operator[](unsigned int idx)
		{
			if (idx >= _size)
				throw std::out_of_range("Index out of range");
			return _array[idx];
		};
};

#endif /* ****************************************************** ARRAY_H */
