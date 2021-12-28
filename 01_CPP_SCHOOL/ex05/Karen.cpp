#include "Karen.hpp"

Karen::Karen    (void) {

	myFunction[0] = &Karen::debug;
	myFunction[1] = &Karen::info;
	myFunction[2] = &Karen::warning;
	myFunction[3] = &Karen::error;
	return ;
}

Karen::~Karen	(void) {

	return ;
}

void	Karen::debug(void) {

	std::cout << "I love to get extra pickles for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::info(void) {

	std::cout << "I cannot believe adding extra pickles cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning(void) {

	std::cout << "I think I deserve to have some extra pickles for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error(void) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

int	Karen::getLevel(std::string level) {

	int i;

	i = 0;
	std::string indexLevel[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (level == indexLevel[i])
			return (i);
		i++;
	}
	return (-1);
}

void	Karen::complain(std::string level) {

	int levelIndex;
	
	levelIndex = getLevel(level);
	if (levelIndex != -1)
		(this->*(myFunction[levelIndex]))();
	else
		std::cout << "Karen called something else than she uses to, maybe not a complain" << std::endl;
	return;
}

