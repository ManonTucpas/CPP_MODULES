/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:55:09 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/08 17:14:01 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	Phonebook 	book;
	std::string input;
	int			i;

	i = 0;
	std::cout << "Type one of this command: ADD / SEARCH / EXIT" << std::endl;
	while (std::getline (std::cin, input))
	{
		if (input == "EXIT")
		{
			std::cout << "Exiting ..." << std::endl;
			exit (0);
		}
		else if (input == "ADD" && i == 0)
		{
			if (book.getNbAdded() == 7)
			{
				std::cout << "The last contact has been added, you can SEARCH or EXIT"  << std::endl;
				i = 1;
			}
			else
				book.add();
		}
		else if (input == "SEARCH")
			if (book.search() == 1)
				std::cout << "You must add contact before searching"  << std::endl;
		if (i == 0)
			std::cout << "Type one of this command: ADD / SEARCH / EXIT" << std::endl;
		else
			std::cout << "Type one of this command: SEARCH / EXIT" << std::endl;
		std::cout << std::endl;		
	}
	return (0);
}