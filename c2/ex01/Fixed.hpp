#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		// ex00
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		void operator = (const Fixed &f);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// ex01
		Fixed(const int i);
		Fixed(const float f);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		// ex00
		static const int _fract_bits = 8;
		int _value;

		//ex01
};

std::ostream &operator << (std::ostream& os, const Fixed& f);

#endif
