#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:
		Fixed();
		Fixed( Fixed const & src );
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed &	operator =  (Fixed const & A);

	private:
		static const int	_literal = 8;
		int					_value;

};

#endif /* *********************************************************** FIXED_H */