#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input), _size(_input.size())
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
	_size = a.getSize();
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

unsigned int		Convert::getSize(void) const
{
	return (_size);
}

void			Convert::findType(void)
{
	unsigned int	count = 0;
	unsigned int	i = 0;
	unsigned int	dot = 0;
	unsigned int	f = 0;
 
	if (_size == 1 && std::isdigit(_input[0]) == 0 && std::isprint(_input[0]))
		_type = "CHAR";
		//convertChar();
	if (_input == "-inff" || _input == "+ inff" || _input == "nanf")
		_type = "FLOAT";
		//convertFloat();
	if (_input == "-inf" || _input == "+inf" || _input == "nan")
		_type = "DOUBLE";
		//onvertDouble();
	if (_input[0] == '-' || isdigit(_input[0]))
	{
		if (_input[0] == '-')
			i = 1;
		while (i < _size)
		{
			if (!isdigit(_input[i]))
			{
				if (_input[i] == '.')
					dot = i;
				if (_input[i] == 'f')
					f = i;
				count++;
			}
			i++;
		}
		if (count == 0)
			_type = "INT";
			//convertInt();
		else if (dot > 0 && dot < (_size - 1) && count == 1)
			_type = "DOUBLE";
			//convertDouble();
		
		else if (dot > 0 && dot < (_size - 2) && count == 2 && f == _size - 1)
			_type = "FLOAT";
			//convertFloat();
		else
			_type = "NONE";
		
	}

	return  ;
}

unsigned int	Convert::getIndex(void)
{
	char 	tab[5] = {"CHAR", "INT", "FLOAT", "DOUBLE", "NONE"};
	int		index = 0;

	while(index < 4)
	{
		if (_type == tab[index])
			return (index + 1);
		index++;
	}
	return (-1);
}

void			Convert::whatType(void)
{

}


void			Convert::convertChar(void)
{
	char c = (_input.c_str()[0]);
	std::cout << "CHAR  : " << c << std::endl;
	std::cout << "INT   : " << static_cast<int>(c) << std::endl;
	std::cout << "FLOAT : " << static_cast<float>(c) << std::endl;
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
			std::cout << c << std::endl;
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
			std::cout << c << std::endl;
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
			std::cout << c << std::endl;
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
