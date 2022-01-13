#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    int HIGH_GRADE = 1;
    int LOW_GRADE = 150;

	std::cout << "HIGH_GRADE = " << HIGH_GRADE << " | LOW_GRADE = " << LOW_GRADE << std::endl;
	Bureaucrat Jessica("Jessica", LOW_GRADE);
	std::cout << Jessica;
	Bureaucrat John("John", HIGH_GRADE);
	std::cout << John;


	std::cout << "\n=== Test Paperasse ===" << std::endl;
	try
	{
		Form Paperasse("Paperasse", LOW_GRADE, LOW_GRADE);
		std::cout << Paperasse;
		Jessica.signForm(Paperasse);
		John.signForm(Paperasse);
		std::cout << Paperasse;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n=== Test Important Doc ===" << std::endl;
	try
	{
		Form Important("Important Doc", HIGH_GRADE, HIGH_GRADE);
		std::cout << Important;
		Jessica.signForm(Important);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{	
		Form Important("Important Doc", HIGH_GRADE, HIGH_GRADE);
		std::cout << Important;
		John.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n===Test with upgrade ===" << std::endl;
	try
	{
		Form Important("Important Doc", HIGH_GRADE , HIGH_GRADE);
		std::cout << Important;
		Bureaucrat Claude("Claude", HIGH_GRADE + 1);
		std::cout << Claude;
		Claude.upGrade();
		std::cout << Claude;
		Claude.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n===Test with downgrade ===" << std::endl;
	try
	{
		Form Important("Important Doc", HIGH_GRADE , HIGH_GRADE);
		std::cout << Important;
		Bureaucrat Albert("Albert", HIGH_GRADE);
		std::cout << Albert;
		Albert.downGrade();
		std::cout << Albert;
		Albert.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===Test Form HIGH_GRADE - 1 ===" << std::endl;
	try
	{
		Form TooHigh("TooHigh", HIGH_GRADE, HIGH_GRADE - 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n=== Test FORM LOW_GRADE + 1 ===" << std::endl;
	try
	{
		Form TooLow("TowLow", LOW_GRADE + 1, LOW_GRADE);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
