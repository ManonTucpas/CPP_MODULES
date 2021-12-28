/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer <mlecuyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:07:01 by mlecuyer          #+#    #+#             */
/*   Updated: 2021/12/14 18:56:44 by mlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Weapon
{
    public:
        
        Weapon(std::string weaponType);
        ~Weapon(void);
        
        std::string const   &getType(void) const;
        void                setType(std::string weaponType);
        
    private:
    
        std::string _type;

};

#endif