/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:29:54 by mlecuyer          #+#    #+#             */
/*   Updated: 2021/12/06 15:55:01 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

void    Contact::format_string(void) {

    
    if (_fst_name.size() > 10)
    {
        _fst_name_f = _fst_name.substr(0, 9);
        _fst_name_f.push_back('.');
    }
    if (_lst_name.size() > 10)
    {
        _lst_name_f = _lst_name.substr(0, 9);
        _lst_name_f.push_back('.');
    }
    if (_nickname.size() > 10)
    {
        _nickname_f = _nickname.substr(0, 9);
        _nickname_f.push_back('.');
    }
}

void	Contact::print_contact() {

	std::cout << _fst_name << std::endl;
	std::cout << _lst_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone_nb << std::endl;
	std::cout << _dark_secret << std::endl;
    std::cout << std::endl;
	return ;
}

void	Contact::print_book() {
    
        std::cout << std::setw(10);
        std::cout << _index;
		std::cout << "|";
		if (_fst_name.size() > 10)
			std::cout << std::right << _fst_name_f;
		else
		{
			std::cout << std::setw(10);
			std::cout << _fst_name;
		}
		std::cout << "|";
		if (_lst_name.size() > 10)
			std::cout << std::right << _lst_name_f;
		else
		{
			std::cout << std::setw(10);
			std::cout  << _lst_name;			
		}
		std::cout << "|";
		if (_nickname.size() > 10)
			std::cout << std::right << _nickname_f;
		else
		{
			std::cout << std::setw(10);
			std::cout << _nickname;
		}
		std::cout << std::endl;
	return ;
}

void    Contact::add(int i) {

    _index = i;
    while (_fst_name.size() == 0)
    {
        std::cout << "Your first name : " << std::endl;
        std::getline (std::cin, _fst_name);
    }
    while (_lst_name.size() == 0)
    {
        std::cout << "Your last name : " << std::endl;
        std::getline (std::cin, _lst_name);
    }
    while (_nickname.size() == 0)
    {
        std::cout << "Your Nickname : " << std::endl;
        std::getline (std::cin, _nickname);
    }
    while (_phone_nb.size() == 0)
    {
        std::cout << "Your Phone number : " << std::endl;
        std::getline (std::cin, _phone_nb);
    }
    while (_dark_secret.size() == 0)
    {
        std::cout << "Your darkest secret : " << std::endl;
        std::getline (std::cin, _dark_secret);
    }
    format_string();
    return ;
}