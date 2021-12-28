#ifndef PHONEBOOK_H
# define PHONEBOOK_H


# include <string>
# include "contact.hpp"

class Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);
	
	Contact		contact[8];
	void		add(void);
	int			search(void);
	int			search_one(void);
	int			checkInput(std::string input);

	int getNbAdded(void);
	
private:
	int	 nbAdded;
	int	_printCounter;
};

#endif
