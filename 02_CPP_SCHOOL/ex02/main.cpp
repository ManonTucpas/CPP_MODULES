#include <iostream>
#include "Fixed.hpp"


void	comparisonTests(void)
{
	Fixed a;
	Fixed  b(10);
	Fixed  c(42.42f);
	Fixed  d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout <<  "=============> IS EQUAL TESTS <=============" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	else
		std::cout << "a != b" << std::endl;
	if (b == d)
		std::cout << "d == b" << std::endl;
	else
		std::cout << "d != b" << std::endl;
	if (c == d)
		std::cout << "c == d" << std::endl;
	else
		std::cout << "c != d" << std::endl;
	if (a == c)
		std::cout << "a == c" << std::endl;
	else
		std::cout << "a != c" << std::endl;
	std::cout << std::endl;
	std::cout <<  "===========> IS DIFFERENT TESTS <===========" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	else
		std::cout << "a == b" << std::endl;
	if (b != d)
		std::cout << "d != b" << std::endl;
	else
		std::cout << "d == b" << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;
	else
		std::cout << "c == d" << std::endl;
	if (a != c)
		std::cout << "a != c" << std::endl;
	else
		std::cout << "a == c" << std::endl;
	std::cout << std::endl;
	std::cout <<  "============> IS GREATER TESTS <============" << std::endl;
	if (a > b)
		std::cout << "a > b" << std::endl;
	else
		std::cout << "a is not greater than b" << std::endl;
	if (b > d)
		std::cout << "b > d" << std::endl;
	else
		std::cout << "b is not greater than d" << std::endl;
	if (c > d)
		std::cout << "c > d" << std::endl;
	else
		std::cout << "c is not greater than d" << std::endl;
	if (a > c)
		std::cout << "a > c" << std::endl;
	else
		std::cout << "a is not greater than c" << std::endl;
	if (d > c)
		std::cout << "d > c" << std::endl;
	else
		std::cout << "d is not greater than c" << std::endl;
	std::cout << std::endl;
	std::cout <<  "============> IS LESSER TESTS <=============" << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	else
		std::cout << "a is not lesser than b" << std::endl;
	if (b < d)
		std::cout << "b < d" << std::endl;
	else
		std::cout << "b is not lesser than d" << std::endl;
	if (c < d)
		std::cout << "c < d" << std::endl;
	else
		std::cout << "c is not lesser than d" << std::endl;
	if (a < c)
		std::cout << "a < c" << std::endl;
	else
		std::cout << "a is not lesser than c" << std::endl;
	if (d < c)
		std::cout << "d < c" << std::endl;
	else
		std::cout << "d is not lesser than c" << std::endl;
	std::cout << std::endl;
	std::cout <<  "========> IS GREATER OR EQUAL TESTS <=====" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	else
		std::cout << "a is not greater or equal to b" << std::endl;
	if (b >= d)
		std::cout << "b >= d" << std::endl;
	else
		std::cout << "b is not greater or equal to d" << std::endl;
	if (c >= d)
		std::cout << "c >= d" << std::endl;
	else
		std::cout << "c is not greater or equal to d" << std::endl;
	if (a >= c)
		std::cout << "a >= c" << std::endl;
	else
		std::cout << "a is not greater or equal to c" << std::endl;
	if (d >= c)
		std::cout << "d >= c" << std::endl;
	else
		std::cout << "d is not greater or equal to c" << std::endl;
	std::cout << std::endl;
	std::cout <<  "========> IS LESSER OR EQUAL TESTS <=====" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	else
		std::cout << "a is not lesser or equal to b" << std::endl;
	if (b <= d)
		std::cout << "b <= d" << std::endl;
	else
		std::cout << "b is not lesser or equal to d" << std::endl;
	if (c <= d)
		std::cout << "c <= d" << std::endl;
	else
		std::cout << "c is not lesser or equal to d" << std::endl;
	if (a <= c)
		std::cout << "a <= c" << std::endl;
	else
		std::cout << "a is not lesser or equal to c" << std::endl;
	if (d <= c)
		std::cout << "d <= c" << std::endl;
	else
		std::cout << "d is not lesser or equal to c" << std::endl;

	std::cout << std::endl;
	return ;
}

void	arithmeticTests(void)
{
	
	Fixed  a(20.78f);
	Fixed b(10);
	std::cout <<  "==========> ARITHMETIC TESTS <============" << std::endl;
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;
	std::cout << a << " / " << b << " = " << (a / b) << std::endl;
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
	std::cout << std::endl;
	return ;
}

void	incrementationTests(void)
{
	Fixed a;

	std::cout <<  "===============INCREMENTATION TESTS=============" << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;

	return ;
}

void	minmaxTests(void)
{
	Fixed a(98.7f);
	Fixed b(5.05f);
	Fixed c(546.768f);
	Fixed const d(5.05f);
	Fixed const e(12.43f);

	std::cout <<  "===============MIN && MAX TESTS=============" << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "Min(a,b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "Max(a,b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "Min(a,c) = " << Fixed::min(a, c) << std::endl;
	std::cout << "Max(a,c) = " << Fixed::max(a, c) << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "Min(d,e) = " << Fixed::min(d, e) << std::endl;
	std::cout << "Max(d,e) = " << Fixed::max(d, e) << std::endl;
	std::cout << std::endl;
	
}

int main(void) {

	comparisonTests();
	arithmeticTests();
	incrementationTests();
	minmaxTests();
	return (0);

}