#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
	private:
		int					_value;
		static const int	_fraction_bits = 8;

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

		Fixed &operator = (const Fixed &A);
		
		bool	operator < (const Fixed &A) const;
		bool	operator > (const Fixed &A) const;
		bool	operator >= (const Fixed &A) const;
		bool	operator <= (const Fixed &A) const;
		bool	operator == (const Fixed &A) const;
		bool	operator != (const Fixed &A) const;
		Fixed	operator ++ (int);
		Fixed	&operator ++ (void);
		Fixed	operator -- (int);
		Fixed	&operator -- (void);

		Fixed	operator + (const Fixed &A);
		Fixed	operator - (const Fixed &A);
		Fixed	operator / (const Fixed &A);
		Fixed	operator * (const Fixed &A);

		static Fixed &min(Fixed &A, Fixed &B);
		static const Fixed &min(const Fixed &A, const Fixed &B);
		static Fixed &max(Fixed &A, Fixed &B);
		static const Fixed &max(const Fixed &A, const Fixed &B);
};

std::ostream &operator << (std::ostream &stream, const Fixed &instance);
#endif /* *********************************************************** FIXED_H */