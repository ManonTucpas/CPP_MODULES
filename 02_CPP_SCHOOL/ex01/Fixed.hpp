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
		Fixed& operator=(const Fixed & right_value);

		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const; 

	private:

		int 				_fixedValue;
		static int const	_nbBits = 8;
};

int 			ft_power(int nb, int powers);
std::ostream & operator<<( std::ostream & flux, Fixed const & input);

#endif