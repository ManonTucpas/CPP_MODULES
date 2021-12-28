#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedValue(0) {

	return ;
}

Fixed::Fixed(const int ivalue) : _fixedValue( ivalue * ft_power(2, _nbBits)) {

	return ;
}

Fixed::Fixed(const float fvalue) : _fixedValue(roundf(fvalue * ft_power(2, _nbBits))) {

	return ;
}

Fixed::~Fixed(void) {

	return ;
}

Fixed::Fixed( Fixed const& copy) {

	*this = copy;
	return ;
}

Fixed& Fixed::operator=(Fixed const & right_value) {

	_fixedValue = right_value.getRawBits();
	return *this;
}

int     Fixed::getRawBits(void) const {

		return (_fixedValue);
}

void    Fixed::setRawBits(int const raw) {

		_fixedValue = raw;
		return ;
}

int ft_power(int nb, int powers)
{
	int i;

	i = 0;
	while(i < (powers - 1))
	{
		nb = nb * 2;
		i++;
	}
	return (nb);
}

int Fixed::toInt(void) const {

	float	convertNb;

	convertNb = _fixedValue / ft_power(2, _nbBits);
	return (convertNb);
	
}

float Fixed::toFloat(void) const {

	float	convertNb;

	convertNb = (float)_fixedValue / ft_power(2, _nbBits);
	return (convertNb);
}

std::ostream & operator<<( std::ostream & flux, Fixed const & value)
{
    /*put float representation into specified output stream*/
    flux << value.toFloat();
    return flux;
}
