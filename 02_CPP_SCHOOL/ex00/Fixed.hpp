#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	public:

		Fixed(void);
		~Fixed(void);
		//constructeur par copie
		Fixed( Fixed const &copy);

		//overload d'operateur d'assignation
		Fixed & operator=(const Fixed & right_value);

		int     getRawBits(void) const;
		void    setRawBits(int const raw);

	private:

		int 				_fixed;
		static int const	_nbBits = 8;
};

#endif