#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const int ivalue);
		Fixed(const float fvalue);
		~Fixed(void);
		//constructeur par copie
		Fixed( Fixed const &copy);

		//overload d'operateur d'assignation
		Fixed& 				operator=(const Fixed & right_value);

		// Operateurs de comparaison
		bool				operator==(Fixed const& a);
		bool				operator!=(Fixed const& a);
		bool				operator>(Fixed const& a);
		bool				operator<(Fixed const& a);
		bool				operator<=(Fixed const& a);
		bool				operator>=(Fixed const& a);

		// Operateurs arithmetiques
		Fixed				operator+(Fixed const& a);
		Fixed				operator-(Fixed const& a);
		Fixed				operator*(Fixed const& a);
		Fixed				operator/(Fixed const& a);

		// Post incrementation
		Fixed& 				operator++(void);
		Fixed&				operator--(void);
		// Pre incrementation
		Fixed				operator++(int);
		Fixed				operator--(int);

		// Min && Max
		static Fixed& 		min(Fixed& fp1, Fixed& fp2);
		static Fixed& 		max(Fixed& fp1, Fixed& fp2);
		static Fixed const&	min(Fixed const& fp1, Fixed const& fp2);
		static Fixed const&	max(Fixed const& fp1, Fixed const& fp2);


		int     			getRawBits(void) const;
		void    			setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const; 

	private:

		int 				_fixedValue;
		static int const	_nbBits = 8;
};

int							ft_power(int nb, int powers);
std::ostream &				operator<<( std::ostream & flux, Fixed const & input);

#endif
