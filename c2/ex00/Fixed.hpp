#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		void operator = (const Fixed &f);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		static const int _fract_bits = 8;
		int _value;
};

#endif
