#ifndef _ITER_HPP_
# define  _ITER_HPP_

#include <iostream>

template <typename T>
void iter(T const tab[], int lenght, void(*ptr_f)(T const & src))
{
    for(int i = 0; i < lenght; i++)
		(*ptr_f)(tab[i]);
	return ;
}

template<typename T>
void	print_f(T const & src)
{
	std::cout << src << std::endl;
	return ;
}

#endif