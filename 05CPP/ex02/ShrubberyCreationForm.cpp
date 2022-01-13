#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form::Form("ShrubberyCreationForm", 145, 137), _target("default") 
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :Form::Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : Form(cpy.getFormName(), cpy.getGradeSign(), cpy.getGradeToExec(), cpy.getSignedStatus(), cpy.getTarget())
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const& a)
{
	return *this;
}


std::string	const& ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}

void		ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
	std::string filename = _target + "_shruberry";
	std::ofstream outfile(filename);
	outfile << "					@\n
                              @ @ @  @ @ @\n
                            @  @\/@ @ /__@\n
                            @@@ @\ / @/  @ @\n
                           @\  \/@| @ | @\n
                          @__\@ \ |/ \| / @\n
                             __\|@|  ||/__/@\n
                            /  \ \\  / /__\n
                           @    \  \/ /   @\n
                                 |"" |\n
                                 |"" |\n
                                 |"" |\n
                                ~|"" |~\n
                            ~~~~       ~~~~\n
                          ~~               ~~~\n" <<std::endl;

	outfile.close();

}