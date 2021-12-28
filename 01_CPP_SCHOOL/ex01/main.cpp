/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:57:52 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 15:52:28 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i;
	int nbZombies;
	
	i = 0;
	nbZombies = 10;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "| Creation a of ZombieHorde |" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << std::endl;
	Zombie* heapZ = zombieHorde(nbZombies, "GroZomb");
	std::cout << std::endl;
	while (i < nbZombies)
	{
		std::cout << "Zombie " << i + 1 << std::endl;
		heapZ[i].announce();
		i++;
	}
	std::cout << std::endl;
	delete [] heapZ;
 
	return (0);
}