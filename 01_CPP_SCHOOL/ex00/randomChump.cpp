/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:40:18 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 13:47:20 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name) {
	
		Zombie Mister;
		
		Mister.setName(name);
		Mister.announce();
		return ;
}