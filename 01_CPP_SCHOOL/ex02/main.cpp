/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:23:32 by mlecuyer@st       #+#    #+#             */
/*   Updated: 2021/12/14 16:32:57 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{

    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "ADDRESS OF STR USING STR ONLY    : " << &str << std::endl;
    std::cout << "ADDRESS OF STR USING STRPTR      : " << stringPTR << std::endl;
    std::cout << "ADDRESS OF STR USING STRREF      : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "DISPLAY OF STR USING STRPTR      : " << *(stringPTR) << std::endl;
    std::cout << "DISPLAY OF STR USING STRREF      : " << stringREF << std::endl;
    return (0);
}