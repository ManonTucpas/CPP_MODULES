#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <stack>
# include <vector>
# include <iostream>
# include <algorithm>


template <typename T>
class MutantStack : public  std::stack<T>
{
	public :
		MutantStack() {};
		MutantStack(const MutantStack<T>& src) {*this = src;}
		MutantStack<T>& operator=(const MutantStack<T>& rhs)
		{
			this->c = rhs.c;
			return *this;
		}
		~MutantStack() {}
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;

		/* std::deque<T> == std::stack<T>::conainer_type */

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }
};

#endif