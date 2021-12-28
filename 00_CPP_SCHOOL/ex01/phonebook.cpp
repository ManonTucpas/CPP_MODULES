/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:21:58 by mlecuyer          #+#    #+#             */
/*   Updated: 2021/12/08 17:20:08 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include "phonebook.hpp"
#include "contact.hpp"


Phonebook::Phonebook(void) :  nbAdded(-1), _printCounter(0) {
    return ;
}

Phonebook::~Phonebook(void) {
    return ;
}

int	Phonebook::checkInput(std::string input) {
	if (input.size() > 1 || !isdigit(input[0]))
	{
		return (0);
	}
	return (1);
}

int	Phonebook::search_one() {

	std::string input;
	int			index;

	std::cout << "Enter the index of the contact you'd like to see" << std::endl;
	while (1)
	{
		std::cout << "Please, enter an existing index" << std::endl;
		
		std::getline (std::cin, input);
		
		if (checkInput(input) == 1)
		{
			index = atoi(input.c_str());
			if (index >= 0 && index <= nbAdded)
				break;
		}
	}
	if (nbAdded >= 0)
		contact[index].print_contact();
	return (0);	
}

int	Phonebook::search() {

	_printCounter = 0;
	if (nbAdded == -1)
		return (1);
	while (_printCounter <= nbAdded)
	{
		contact[Phonebook::_printCounter].print_book();
		_printCounter++;		
	}
	Phonebook::search_one();
	return (0);	
}

void	Phonebook::add() { 
	
	nbAdded++;
	contact[Phonebook::nbAdded].add(Phonebook::nbAdded);
	
}

int 	Phonebook::getNbAdded(void) {

	return (nbAdded);
}



