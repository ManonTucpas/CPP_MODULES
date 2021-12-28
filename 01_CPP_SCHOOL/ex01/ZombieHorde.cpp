/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:01:53 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 15:44:19 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

	Zombie *newZombie = new Zombie[N];
	int i;
   i = 0;
   while (i < N)
   {
      newZombie[i].setName(name);
      i++;
   }
   return (newZombie);
}