#include "Fixed.hpp"

bool    Fixed::operator==(Fixed const& a)
{
   if (_fixedValue == a._fixedValue)
        return (true);
    else
        return (false);
}

bool    Fixed::operator!=(Fixed const& a)
{
    if (_fixedValue == a._fixedValue)
        return (false);
    if (_fixedValue == a._fixedValue)
        return (false);
    else
        return (true);
}

bool    Fixed::operator>(Fixed const& a)
{
    if (_fixedValue > a._fixedValue)
        return (true);
    else
        return (false);
}

bool    Fixed::operator<(Fixed const& a)
{
    if (_fixedValue == a._fixedValue)
        return (false);
    else if (_fixedValue > a._fixedValue)
        return (false);
    else
        return (true);
}

bool    Fixed::operator>=(Fixed const& a)
{
    if (_fixedValue == a._fixedValue || _fixedValue > a._fixedValue)
        return (true);
    else
        return (false);
}

bool    Fixed::operator<=(Fixed const& a)
{
    if (_fixedValue == a._fixedValue || _fixedValue < a._fixedValue)
        return (true);
    else
        return (false);
}