#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class   Karen
{
	public:

		typedef void (Karen::*ptrToFunction)();
		Karen(void);
		~Karen(void);
		void	complain(std::string level);

	private:

		int				getLevel(std::string level);
		ptrToFunction	myFunction[4];
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
};

#endif