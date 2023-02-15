/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 05:21:03 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/15 14:26:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = number << this->_fraction_bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = number;
	this->_value = (int)(roundf(number * (1 << this->_fraction_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator = (Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = src._value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return ((int)this->_value >> this->_fraction_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fraction_bits));
}

std::ostream & operator << (std::ostream & stream, const Fixed & instance)
{
	stream << instance.toFloat() << std::endl;
	return (stream);
}