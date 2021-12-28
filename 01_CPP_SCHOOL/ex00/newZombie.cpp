/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:01:53 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 13:41:26 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {

	Zombie *newZombie = new Zombie();
	
   (*newZombie).setName(name);
   return (newZombie);
}