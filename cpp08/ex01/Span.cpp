/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                			:+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:23:26 by wkonings      #+#    #+#                 */
/*   Updated: 2023/04/21 00:55:50 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(void): _data(0), _capacity(0)
{
}

Span::Span(unsigned int n): _data(0), _capacity(n)
{
}

Span::Span(Span const &src): _data(src._data), _capacity(src._capacity)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span(void)
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int number)
{
	if (_data.size() >= _capacity)
		throw std::out_of_range("cannot add more numbers");
	_data.push_back(number);
}

void Span::addRange(int start, int end)
{
	if (_data.size() >= _capacity)
		throw std::out_of_range("cannot add more numbers");
	for (int i = start; i <= end && _data.size() < _capacity; i++)
		addNumber(i);
}

int Span::shortestSpan(void)
{
	if (_data.size() < 2)
		throw std::out_of_range("no valid span");

	std::vector<int> tmp = _data;
	sort(tmp.begin(), tmp.end());

	int shortest = INT_MAX;

	for (size_t i = 1; i < tmp.size(); i++)
		if (tmp[i] - tmp[i - 1] < shortest)
			shortest = tmp[i] - tmp[i - 1];
	return (shortest);
}

int Span::longestSpan(void)
{
	if (_data.size() < 2)
		throw std::out_of_range("no valid span");

	std::vector<int> tmp = _data;
	sort(tmp.begin(), tmp.end());

	return (tmp[tmp.size() - 1] - tmp[0]);
}

Span &Span::operator=(const Span &A)
{
	_data = A._data;
	return (*this);
} 

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
