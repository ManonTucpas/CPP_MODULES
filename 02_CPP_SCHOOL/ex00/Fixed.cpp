#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const& copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed& Fixed::operator=(Fixed const & right_value) {

	std::cout << "Assignation operator called" << std::endl;
	_fixed = right_value.getRawBits();
	return *this;
}

int     Fixed::getRawBits(void) const {

	    std::cout << "getRawBits member function called" << std::endl;
		return (_fixed);
}

void    Fixed::setRawBits(int const raw) {

	    std::cout << "setRawBits member function called" << std::endl;
		_fixed = raw;
		return ;
}