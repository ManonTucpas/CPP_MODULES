#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <iostream>
# include <iomanip>
# include <stdexcept>


template <typename T>
class Array
{
	class outOfLimitException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return "Out of limits";
			}
	};

	public :

		Array(void) : _nb(0), _elmts(NULL){};
		Array(unsigned int n) : _nb(n), _elmts(new T[n]()) {};
		Array(Array const& cpy) : _nb(0), _elmts(NULL)
		{
			*this = cpy;
			return ;
		};
		Array & operator=(Array const & a)
		{
			if (&a == this)
				return *this;
			if (this->size() > 0)
				delete [] _elmts;
			_elmts = new T[a.size()];
			for (unsigned int i = 0; i < a.size(); i++)
				_elmts[i] = a._elmts[i];
			_nb = a.size();
			return (*this);
		};
		~Array(void)
		{
			if (size() > 0)
				delete [] _elmts;
		};

		unsigned int size(void) const { return _nb; };
		
		T &		operator[](unsigned int index) const
		{
			if (index >= this->size())
				throw outOfLimitException();
			return _elmts[index];
		};
	
	private:

	   unsigned int _nb;
	   T*       	_elmts;

};

#endif