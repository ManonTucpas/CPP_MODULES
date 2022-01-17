#ifndef _CONVERT_HPP_
# define _CONVERT_HPP_

# include <iostream>
# include <string>
# include <climits>
# include <stdlib.h>     /* strtol */
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
		unsigned int	getSize(void) const;
		void	findType(void);
		void			convertChar(void);
		void			convertInt(void);
		void			convertFloat(void);
		void			convertDouble(void);

	private:

		std::string		_input;
		std::string		_type;
		unsigned int	_size;
};

#endif