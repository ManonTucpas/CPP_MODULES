#include "Fixed.hpp"

Fixed&  Fixed::operator++(void)
{
    this->_fixedValue++;
    return *this;
}

Fixed&  Fixed::operator--(void)
{
    this->_fixedValue--;
    return *this;
}

Fixed  Fixed::operator++(int)
{
    Fixed tmp;
    tmp = *this;
    this->_fixedValue++;
    return (tmp);
}

Fixed  Fixed::operator--(int)
{
    Fixed tmp;
    tmp = *this;
    this->_fixedValue--;
    return (tmp);
}