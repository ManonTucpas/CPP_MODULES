#include "Fixed.hpp"

Fixed   Fixed::operator+(Fixed const& a)
{
	return (this->toFloat() + a.toFloat());
}

Fixed   Fixed::operator-(Fixed const& a)
{
	return (this->toFloat() -a.toFloat());
}

Fixed   Fixed::operator/(Fixed const& a)
{
	return (this->toFloat() / a.toFloat());
}

Fixed   Fixed::operator*(Fixed const& a)
{
	return (this->toFloat() * a.toFloat());
}