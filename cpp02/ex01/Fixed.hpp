#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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
		Fixed &	operator =  (const Fixed & A);

	private:
		int					_value;
		static const int	_fraction_bits = 8;
};

std::ostream & operator << (std::ostream & stream, const Fixed & instance);
#endif /* *********************************************************** FIXED_H */