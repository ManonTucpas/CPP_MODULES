/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:57:52 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 15:05:14 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "| Creation a of Zombie with the NewZombie function   |" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	Zombie *heapZ = newZombie("GroZomb");
	heapZ->announce();
	delete heapZ;

    std::cout << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "| Creation a of Zombie with the randomChump function |" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	randomChump("GriZomb");
 
	return (0);
}