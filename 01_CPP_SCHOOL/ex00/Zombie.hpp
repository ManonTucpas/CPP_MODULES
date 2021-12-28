/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:13:50 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 13:43:35 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>


class   Zombie {

public:

	Zombie(void);
	~Zombie(void);

	
	void    setName(std::string name);
	void    announce(void);
	

private:

	std::string _name;

};

Zombie*     newZombie(std::string name);
void        randomChump(std::string name);

#endif