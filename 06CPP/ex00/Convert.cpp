#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input)
{
	return ;
}

Convert::~Convert(void)
{
	return ;
}
	
Convert::Convert(Convert const& cpy)
{
	*this = cpy;
	return ;
}

Convert&			Convert::operator=(const Convert& a)
{
	_input = a.getInput();
	_type = a.getType();
	return *this;
}	

std::string			Convert::getInput(void) const
{
	return (_input);
}

std::string			Convert::getType(void) const
{
	return (_type);
}

std::string			Convert::findType(void)
{
	std::string 	input = _input;
	unsigned int	count = 0;
	unsigned int	i = 0;
	unsigned int	dot = 0;
	unsigned int	f = 0;
	unsigned int 	size  = input.size();

	if (size == 1 && std::isdigit(input[0]) == 0 && std::isprint(input[0]))
		return (_type = "CHAR");
	if (input[0] == '-' || input[0] == '+')
		input.erase(0, 1);
 	if (input == " inf" || input == " inff")
		input.erase(0, 1);
	if (input == "inff" || input == "nanf")
		return (_type = "FLOAT");
	if (input == "inf" || input == "nan")
		return (_type = "DOUBLE");
	size  = input.size();
	while (i < size)
	{
		if (!isdigit(input[i]))
		{
			if (input[i] == '.')
				dot = i;
			if (input[i] == 'f')
				f = i;
			count++;
		}
		i++;
	}
	if (count == 0)
		return (_type = "INT");
	else if (dot > 0 && dot < (size - 1) && count == 1)
		return (_type = "DOUBLE");
	else if (dot > 0 && dot < (size - 2) && count == 2 && f == size - 1)
		return (_type = "FLOAT");
	return (NULL);
}

unsigned int	Convert::getIndex(void)
{
	std::string tab[6] = {"CHAR", "INT", "FLOAT", "DOUBLE", "NONE"};
	int			i;
	
	for (i = 0; i < 5; i++)
	{
		if (_type == tab[i])
			return (i + 1);
	}
	return (-1);
}

void			Convert::whatType(void)
{
	findType();
	int i = getIndex();
	if (i != -1)
	{
		switch(i)
		{
			case 1:
				convertChar();
				break;
			case 2:
				convertInt();
				break;
			case 3:
				convertFloat();
				break;
			case 4:
				convertDouble();
				break;
			default:
				std::cout << "Wrong argument for conversion" << std::endl;
		}
		return ;
	}
}

void			Convert::convertChar(void)
{
	char c = (_input.c_str()[0]);
	std::cout << "CHAR  : \'" << c << "\'" << std::endl;
	std::cout << "INT   : " << static_cast<int>(c) << std::endl;
	std::cout << "FLOAT : " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(c) << std::endl;
}
void			Convert::convertInt(void)
{
	long int li = strtol(_input.c_str(), NULL, 10);
	if (li < INT_MIN || li > INT_MAX)
	{
		std::cout << "INT: overflow or underflow" << std::endl;
		return ;
	}
	std::cout << "CHAR   : ";
	if (li < static_cast<int>(CHAR_MIN) || li > static_cast<int>(CHAR_MAX))
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(li);
		if (isprint(c))
			std::cout << "\'" << c << "\'" << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	std::cout << "INT   : " << li << std::endl;
	std::cout << "FLOAT : " << static_cast<float>(li) << "f" << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(li) << std::endl;
}

void			Convert::convertFloat(void)
{
	float f = strtof(_input.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "FLOAT: overflow or underflow" << std::endl;
		return ;
	}
	std::cout << "CHAR  : ";
	if (f < static_cast<float>(CHAR_MIN) || f > static_cast<float>(CHAR_MAX) || _input == "nanf")
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << "\'" << c << "\'" << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	std::cout << "INT   : ";
	if (static_cast<long int>(f) < INT_MIN || static_cast<long int>(f) > INT_MAX || _input == "nanf")
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "FLOAT : " << f << "f" << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(f) << std::endl;
}

void			Convert::convertDouble(void)
{
	double d = strtod(_input.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "DOUBLE: overflow or underflow" << std::endl;
		return ;
	}
	std::cout << "CHAR  : ";
	if (d < static_cast<double>(CHAR_MIN) || d > static_cast<double>(CHAR_MAX) || _input == "nan")
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "\'" << c << "\'" << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	std::cout << "INT   : ";
	if (static_cast<long int>(d) < INT_MIN || static_cast<long int>(d) > INT_MAX || _input == "nan")
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "FLOAT : ";
	if (_input != "-inf" && _input != "+inf" 
	&& (d < static_cast<double>(-FLT_MAX) || d > static_cast<double>(FLT_MAX)))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << "DOUBLE: " << d << std::endl;
}
