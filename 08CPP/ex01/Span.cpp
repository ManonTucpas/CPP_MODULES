#include "Span.hpp"

const char*	Span::spanFullException::what() const throw()
{
	return ("ERROR: Span is full");
}

const char*	Span::notEnoughNbException::what() const throw()
{
	return ("ERROR: Missing numbers for comparison");
}

Span::Span(unsigned int N) : _n(N)
{
	return ;
}

Span::~Span()
{
	return ;
}

Span::Span(Span const& cpy)
{
	*this = cpy;
	return ;
}

Span& Span::operator=(const Span& a)
{
	_n = a.getN();
	_contain = a._contain;
	return *this;
}

unsigned int Span::getN(void) const
{
	return (_n);
}

void	Span::addNumber(int nb)
{
	if (_contain.size() < getN())
		_contain.push_back(nb);
	else
		throw spanFullException();
}

int		Span::shortestSpan(void)
{
	std::vector<int>::iterator 			i = _contain.begin();
	std::vector<int>::iterator 			j = _contain.begin();
	std::vector<int>::const_iterator	end = _contain.end();
	unsigned int 						min = UINT_MAX;
	unsigned int 						current;

	if (_contain.size() <= 1)
		throw notEnoughNbException();

	while (i != end)
	{
		j = i + 1;
		while (j != end)
		{
			if (*j < *i)
				current  = *i - *j;
			else
				current = *j - *i;
			if (current < min)
				min = current;
			j++;
		}
		i++;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	if (_contain.size() <= 1)
		throw notEnoughNbException();

	std::vector<int>::iterator max = std::max_element(_contain.begin(), _contain.end());
	std::vector<int>::iterator min = std::min_element(_contain.begin(), _contain.end());

	return (*max - *min);
}

void				Span::fillRandSpan(void)
{
	srand(time(NULL));
	while (_contain.size() < getN())
	{
		_contain.push_back(std::rand());
	}
	/* std::cout << "SIZE = " << _contain.size() <<std::endl; */
}
