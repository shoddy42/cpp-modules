/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 05:21:03 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/16 19:41:45 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): _value(0)
{
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::Fixed(const int number)
{
	this->_value = number << this->_fraction_bits;
}

Fixed::Fixed(const float number)
{
	this->_value = number;
	this->_value = (int)(roundf(number * (1 << this->_fraction_bits)));
}

Fixed::~Fixed()
{

}

Fixed &	Fixed::operator = (const Fixed & src)
{
	this->_value = src._value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
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

bool Fixed::operator < (const Fixed &A) const
{
	return (this->_value < A._value);
}

bool Fixed::operator > (const Fixed &A) const
{
	return (this->_value > A._value);
}

bool Fixed::operator <= (const Fixed &A) const
{
	return (this->_value <= A._value);
}

bool Fixed::operator >= (const Fixed &A) const
{
	return (this->_value >= A._value);
}

bool Fixed::operator == (const Fixed &A) const
{
	return (this->_value == A._value);
}

bool Fixed::operator != (const Fixed &A) const
{
	return (this->_value != A._value);
}


Fixed Fixed::operator / (const Fixed &A)
{
	Fixed added;

	added._value = (this->_value << this->_fraction_bits) / A._value;
	return (added);
}

Fixed Fixed::operator * (const Fixed &A)
{
	Fixed added;

	added._value = (this->_value * A._value) >> this->_fraction_bits;
	return (added);
}

Fixed Fixed::operator - (const Fixed &A)
{
	Fixed added;

	added._value = this->_value - A._value;
	return (added);
}

Fixed Fixed::operator + (const Fixed &A)
{
	Fixed added;

	added._value = this->_value + A._value;
	return (added);
}

Fixed	&Fixed::operator ++ (void)
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator -- (void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed ret(*this);
	operator++();
	return (ret);
}

Fixed	Fixed::operator -- (int)
{
	Fixed ret(*this);
	operator--();
	return (ret);
}

Fixed &Fixed::min(Fixed &A, Fixed &B)
{
	return (A < B ? A : B);
}

const Fixed &Fixed::min(const Fixed &A, const Fixed &B)
{
	return (A < B ? A : B);
}

Fixed &Fixed::max(Fixed &A, Fixed &B)
{
	return (A > B ? A : B);
}

const Fixed &Fixed::max(const Fixed &A, const Fixed &B)
{
	return (A > B ? A : B);
}

std::ostream & operator << (std::ostream & stream, const Fixed & instance)
{
	stream << instance.toFloat();
	return (stream);
}