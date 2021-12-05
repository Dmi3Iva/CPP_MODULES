#include "Fixed.hpp"
// ex00
Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

void Fixed::operator = (const Fixed &f)
{
	_value = f.getRawBits();
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}
// ex01

Fixed::Fixed(const int i)
{
	_value = i * (1 << _fract_bits);
}

Fixed::Fixed(const float f)
{
	_value = (int)(roundf(f * (1 << _fract_bits)));;
}


int Fixed::toInt(void) const{
	return _value >> _fract_bits;
}

float Fixed::toFloat(void) const{
	return ((float)_value / (float)(1 << _fract_bits));;
}


// ex02
bool Fixed::operator > (const Fixed &f)
{
	return _value > f.getRawBits();
}
bool Fixed::operator >= (const Fixed &f)
{
	return _value >= f.getRawBits();
}
bool Fixed::operator < (const Fixed &f)
{
	return _value < f.getRawBits();
}
bool Fixed::operator <= (const Fixed &f)
{
	return _value <= f.getRawBits();
}
bool Fixed::operator == (const Fixed &f)
{
	return _value == f.getRawBits();
}
bool Fixed::operator != (const Fixed &f)
{
	return _value != f.getRawBits();
}

Fixed Fixed::operator + (const Fixed &f)
{
	return this->toFloat() + f.toFloat();
}
Fixed Fixed::operator - (const Fixed &f)
{
	return this->toFloat() - f.toFloat();
}
Fixed Fixed::operator * (const Fixed &f)
{ 
	return f.toFloat() * this->toFloat();
}
Fixed Fixed::operator / (const Fixed &f)
{
	return this->toFloat() / f.toFloat();;
}

 // Prefix increment operator.
Fixed& Fixed::operator++()
{
	++_value;
	return *this;
}
// Postfix increment operator
Fixed Fixed::operator++(int)
{
   Fixed temp = *this;
   ++*this;
   return temp;
}
// Prefix decrement operator.
Fixed& Fixed::operator--()
{
	--_value;
	return *this;
}
// Postfix decrement operator.
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

const Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed const&  Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed const& Fixed::min( Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}