#ifndef _CONVERT_HPP_
# define _CONVERT_HPP_

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include <climits>
# include <cerrno>
# include <cfloat>

class Convert
{
	public :

		Convert(std::string input);
		~Convert(void);
		Convert(Convert const& cpy);
		Convert&		operator=(const Convert& a);

		std::string		getInput(void) const;
		std::string		getType(void) const;
		std::string		findType(void);
		void			convertChar(void);
		void			convertInt(void);
		void			convertFloat(void);
		void			convertDouble(void);
		unsigned int	getIndex(void);
		void			whatType(void);

	private:

		std::string		_input;
		std::string		_type;
};

#endif