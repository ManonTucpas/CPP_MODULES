#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form::Form("ShrubberyCreationForm", 145, 137), _target("default") 
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :Form::Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : Form(cpy.getFormName(), cpy.getGradeSign(), cpy.getGradeToExec())//, cpy.getSignedStatus(), cpy.getTarget())
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const& a)
{
	(void)a;
	return *this;
}


std::string	const& ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}

void		ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
	Form::checkExecForm(b);
	std::string filename = _target + "_shruberry";
	std::ofstream outfile(filename.c_str());
	outfile <<  "         .     .  .      +     .      .          .\n"
				   "     .       .      .     #       .           .\n"
				   "        .      .         ###            .      .      .\n"
				   "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
				   "          .      . \"####\"###\"####\"  .\n"
				   "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				   "  .             \"#########\"#########\"        .        .\n"
				   "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				   "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				   "                .\"##\"#####\"#####\"##\"           .      .\n"
				   "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				   "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
				   "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
				   "            .     \"      000      \"    .     .\n"
				   "       .         .   .   000     .        .       .\n"
				   ".. .. ..................O000O........................ ...... ... " <<std::endl;

	outfile.close();
	return ;
}