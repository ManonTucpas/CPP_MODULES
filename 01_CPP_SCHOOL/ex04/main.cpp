#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int error(std::string input)
{
	std::cout << input << std::endl;
	return (1);
}

std::string	replace_filename(std::string tmp)
{
	int i;
	std::string to_add = ".replace";
	
	i = 0;
	while(tmp[i])
	{
		tmp[i] = (char)toupper(tmp[i]);
		i++;
	}
	tmp.insert(i, to_add);
	return (tmp);
}

int	find_n_replace(std::string s1, std::string s2, std::string infile, std::string outfile)
{
	std::ifstream   ifs;
	std::ofstream   ofs;
	std::string		line;
	std::size_t 	found;
	
	ifs.open(infile, std::ifstream::in);
	if (!ifs.good())
		return (error("Empty file"));
	ofs.open(outfile, std::ofstream::trunc);
	if (!ofs.good())
		return (error("Error creating output file"));
	while (!ifs.eof())
	{
		getline(ifs, line);
		if (s1 != s2)
		{
			found = line.find(s1);
			while (found != std::string::npos)
			{
				line.erase(found, s1.length());
				line.insert(found, s2);
				found = line.find(s1);
			}
		}
		if (ifs.peek() == EOF)
			ofs << line;
		else
			ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();	
	return (0);
}

int main(int argc, char **argv)
{
	std::string 	s1;
	std::string 	s2;
	std::string 	tmp;
	std::string 	new_filename;
	
	if (argc != 4)
		return (error("Bad numbers of arguments"));
	s1 = argv[2];
	s2 = argv[3];
	tmp = argv[1];
	new_filename = replace_filename(tmp);
	if (s1.size() == 0 || s2.size() == 0)
		return (error("Empty string"));
	if (find_n_replace(s1, s2, tmp, new_filename) == 1)
		return (1);
	return (0);
}
