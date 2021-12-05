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

		// ex02
		bool operator > (const Fixed &f);
		bool operator >= (const Fixed &f);
		bool operator < (const Fixed &f);
		bool operator <= (const Fixed &f);
		bool operator == (const Fixed &f);
		bool operator != (const Fixed &f);

		Fixed operator + (const Fixed &f);
		Fixed operator - (const Fixed &f);
		Fixed operator * (const Fixed &f);
		Fixed operator / (const Fixed &f);
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed const &min(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed &a, Fixed &b);
		static Fixed const &min( Fixed const &a,  Fixed const &b);
		static Fixed const &max(Fixed const  &a,  Fixed const &b);
	private:
		// ex00
		static const int _fract_bits = 8;
		int _value;
};

std::ostream &operator << (std::ostream& os, Fixed const &f);

#endif
