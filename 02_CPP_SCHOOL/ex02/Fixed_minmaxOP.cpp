#include "Fixed.hpp"

Fixed& 		Fixed::min(Fixed& fp1, Fixed& fp2)
{
	if (fp1 < fp2)
		return (fp1);
	else
		return (fp2);
}


Fixed& 		Fixed::max(Fixed& fp1, Fixed& fp2)
{
	if (fp1 > fp2)
		return (fp1);
	else
		return (fp2);
}

Fixed const& 		Fixed::min(Fixed const& fp1, Fixed const& fp2)
{
	if (fp1.getRawBits() < fp2.getRawBits())
		return (fp1);
	else
		return (fp2);
}

Fixed const& 		Fixed::max(Fixed const& fp1, Fixed const& fp2)
{
	if (fp1.getRawBits() > fp2.getRawBits())
		return (fp1);
	else
		return (fp2);

}