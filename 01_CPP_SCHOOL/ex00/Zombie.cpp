/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:13:56 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 13:57:52 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

	std::cout << "A zombie has been created!" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	
	std::cout << _name << " has been destructed! Yeah, you killed a Zombie" << std::endl;
	return ;
}

void    Zombie::setName(std::string name) {
	
	_name = name;
	return ;
}

void    Zombie::announce(void) {

	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
