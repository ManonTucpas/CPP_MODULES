#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <iostream>
# include <algorithm>
# include <vector>

class notFindException : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return "Element not find";
		}
};

template<typename T>
typename T::const_iterator	easyfind(T const & container , int const i)
{
    typename T::const_iterator it = find(container.begin(), container.end(), i);
    if (it == container.end())
        throw  notFindException();
	else
		return (it);
};

#endif
