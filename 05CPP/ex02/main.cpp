#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "----TEST SHRUBBERY CREATION FORM----" << std::endl;
	Bureaucrat Manon("Manon", 137);
	std::cout << Manon;
	Bureaucrat Tristan("Tristan", 146);
	std::cout << Tristan;
	ShrubberyCreationForm shru("SHRU");
	std::cout << shru;

	std::cout << "1" << std::endl;
	Manon.executeForm(shru);
	std::cout << "2" << std::endl;
	Tristan.signForm(shru);
	std::cout << "3" << std::endl;
	Manon.signForm(shru);
	std::cout << shru;
	Tristan.executeForm(shru);
	std::cout << "4" << std::endl;
	Manon.signForm(shru);
	Manon.executeForm(shru);
	return (0);
}
