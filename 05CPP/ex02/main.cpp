#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "----TEST SHRUBBERY CREATION FORM----\n" << std::endl;
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

	std::cout << "\n----TEST ROBOTMY REQUEST FORM----\n" << std::endl;
	Bureaucrat Man("Man", 72);
	std::cout << Man;
	Bureaucrat Tri("Tri", 44);
	std::cout << Tri;
	RobotomyRequestForm robot("Robot");
	std::cout << robot;

	std::cout << "1" << std::endl;
	Man.executeForm(robot);
	std::cout << "2" << std::endl;
	Tri.signForm(robot);
	std::cout << "3" << std::endl;
	Man.signForm(robot);
	std::cout << robot;
	Tri.executeForm(robot);
	Tri.executeForm(robot);
	Tri.executeForm(robot);
	Tri.executeForm(robot);
	Tri.executeForm(robot);
	std::cout << "4" << std::endl;
	Man.signForm(robot);
	Man.executeForm(robot);

	std::cout << "\n----TEST PREIDENTIAL PARDON FORM----\n" << std::endl;
	Bureaucrat Ma("Ma", 10);
	std::cout << Ma;
	Bureaucrat Tr("Tr", 3);
	std::cout << Tr;
	PresidentialPardonForm pres("pres");
	std::cout << pres;

	std::cout << "1" << std::endl;
	Ma.executeForm(pres);
	std::cout << "2" << std::endl;
	Tr.signForm(pres);
	std::cout << "3" << std::endl;
	Ma.signForm(pres);
	std::cout << pres;
	Tr.executeForm(pres);
	std::cout << "4" << std::endl;
	Ma.signForm(pres);
	Ma.executeForm(pres);

	return (0);
}
