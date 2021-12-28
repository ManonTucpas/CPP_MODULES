/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:50:58 by mlecuyer          #+#    #+#             */
/*   Updated: 2021/12/08 12:23:59 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int			i;
	int			j;
	std::string	upper;

	i = 1;   
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
		return (0);
	}
	else
	{
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				upper = toupper(argv[i][j]);
				std::cout << upper;
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}