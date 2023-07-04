/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 19:23:25 by wkonings      #+#    #+#                 */
/*   Updated: 2023/05/25 19:29:18 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed 	&operator= (const Fixed &A);

	private:
		static const int	_fraction_bits = 8;
		int					_value;
};

std::ostream &operator<< (std::ostream &stream, const Fixed &instance);

#endif /* *********************************************************** FIXED_H */