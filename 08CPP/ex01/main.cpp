#include "Span.hpp"

void	testException(void)
{
	Span sp = Span(1);
	
	sp.addNumber(1);
	std::cout << "\n***** Adding number at a full's span *****\n" << std::endl;
	try
	{
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n***** Shortest span is :  *****\n" << std::endl;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n***** Longest span is :  *****\n" << std::endl;
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(28);
	sp.addNumber(30);
	sp.addNumber(53);
	sp.addNumber(50);
		
	std::cout << "************** EXCEPTION TESTS ***************\n" << std::endl;
	testException();
	std::cout << std::endl;
	std::cout << "\n**********************************************\n" << std::endl;

	std::cout << "********** SHORTEST & LONGEST TESTS **********\n" << std::endl;
	std::cout << "***** SPAN(5)  *****" << std::endl;
	std::cout << "\n***** Shortest span is :  *****\n" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "\n***** Longest  span is :  *****\n" << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "\n**********************************************\n" << std::endl;

	Span sp2(500);
	sp2.fillRandSpan();
	std::cout << "***** SPAN(500)  *****" << std::endl;
	std::cout << "\n***** Shortest span is :  *****\n" << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << "\n***** Longest  span is :  *****\n" << std::endl;
	std::cout << sp2.longestSpan()<< std::endl;

	Span sp3(1000);
	sp3.fillRandSpan();
	std::cout << "***** SPAN(10000)  *****" << std::endl;
	std::cout << "\n***** Shortest span is :  *****\n" << std::endl;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << "\n***** Longest  span is :  *****\n" << std::endl;
	std::cout << sp3.longestSpan()<< std::endl;
	
	Span sp4(10000);
	sp4.fillRandSpan();
	std::cout << "***** SPAN(100000)  *****" << std::endl;
	std::cout << "\n***** Shortest span is :  *****\n" << std::endl;
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << "\n***** Longest  span is :  *****\n" << std::endl;
	std::cout << sp4.longestSpan()<< std::endl;
	return (0);
}