#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);	

	void	print_book(void);
	void	print_contact(void);
	void	add(int i);
	void	format_string(void);
	void	print_contact(int i);

private:

	int				_index;
	std::string		_lst_name;
	std::string		_fst_name;
	std::string		_nickname;
	std::string		_phone_nb;
	std::string		_dark_secret;
	std::string		_lst_name_f;
	std::string		_fst_name_f;
	std::string		_nickname_f;
};

#endif