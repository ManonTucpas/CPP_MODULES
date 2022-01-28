#ifndef _Span_HPP_
# define _Span_HPP_

# include <stdexcept>
# include <iostream>
# include <string>
# include <vector>
# include <climits>
# include <algorithm>

class Span
{
	class	spanFullException : public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};
	
	class	notEnoughNbException : public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};

	public :

		Span(unsigned int N);
		~Span();
		Span(Span const& cpy);
		Span&				operator=(const Span& a);
		unsigned int        getN(void) const;
		void				addNumber(int nb);
		int					shortestSpan(void);
		int					longestSpan(void);
		void				fillRandSpan(void);

	private:

		unsigned int			_n;
		std::vector<int>		_contain;
};

#endif