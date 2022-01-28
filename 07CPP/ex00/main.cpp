#include <iostream>
#include "Whatever.hpp"

int main(void)
{
	std::cout << "****TEST FROM SUBJECT****" << std::endl;
	int   l = 2;
	int m = 3;
	::swap( l, m );
	std::cout << "l = " << l << ", m = " << m << std::endl;
	std::cout << "min( l, m ) = " << ::min( l, m ) << std::endl;
	std::cout << "max( l, m ) = " << ::max( l, m ) << std::endl;
	std::string ce = "chaine1";
	std::string de = "chaine2";
	::swap(ce, de);
	std::cout << "ce = " << ce << ", de = " << de << std::endl;
	std::cout << "min( ce, de ) = " << ::min( ce, de ) << std::endl;
	std::cout << "max( ce, de ) = " << ::max( ce, de ) << std::endl;


	std::cout << "****TEST FOR DOUBLE****" << std::endl;
	double a = 343.5;
	double b = 21.21;
	std::cout << "A : " << a << std::endl; 
	std::cout << "B : " << b << std::endl; 
	std::cout << "Max is : " << max<double>(a, b) << std::endl;
	std::cout << "Min is : " << min<double>(a, b) << std::endl;
	std::cout << "Swap : " << std::endl;
	swap(a, b);
	std::cout << "A : " << a << std::endl; 
	std::cout << "B : " << b << std::endl; 

	std::cout << "****TEST FOR INT****" << std::endl;
	int c = 12;
	int d = 42;
	std::cout << "C : " << c << std::endl; 
	std::cout << "D : " << d << std::endl; 
	std::cout << "Max is : " << max<int>(c, d) << std::endl;
	std::cout << "Min is : " << min<int>(c, d) << std::endl;
	std::cout << "Swap : " << std::endl;
	swap(c, d);
	std::cout << "C : " << c << std::endl; 
	std::cout << "D : " << d << std::endl; 

	std::cout << "****TEST FOR FLOAT****" << std::endl;
	float e = 12.34f;
	float f = 42.4546f;
	std::cout << "E : " << e << std::endl; 
	std::cout << "F : " << f << std::endl; 
	std::cout << "Max is : " << max<float>(e, f) << std::endl;
	std::cout << "Min is : " << min<float>(e, f) << std::endl;
	std::cout << "Swap : " << std::endl;
	swap(e, f);
	std::cout << "E : " << e << std::endl; 
	std::cout << "F : " << f << std::endl; 
	
	std::cout << "****TEST FOR CHAR****" << std::endl;
	std::string i = "H";
	std::string j = "B";
	std::cout << "I : " << i << std::endl; 
	std::cout << "J : " << j << std::endl; 
	std::cout << "Max is : " << ::max(i, j) << std::endl;
	std::cout << "Min is : " << ::min(i, j) << std::endl;
	std::cout << "Swap : " << std::endl;
	swap(i, j);
	std::cout << "I : " << i << std::endl; 
	std::cout << "J : " << j << std::endl; 

	std::cout << "****TEST FOR STD::STRING****" << std::endl;
	std::string str = "Hellooooo";
	std::string str1 = "Bonjour";
	std::cout << "STR : " << str << std::endl; 
	std::cout << "STR1 : " << str1 << std::endl; 
	std::cout << "Max is : " << ::max(str, str1) << std::endl;
	std::cout << "Min is : " << ::min(str, str1) << std::endl;
	std::cout << "Swap : " << std::endl;
	swap(str, str1);
	std::cout << "STR : " << str << std::endl; 
	std::cout << "STR1 : " << str1 << std::endl; 
}
