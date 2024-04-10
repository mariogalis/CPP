/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:27:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/28 17:20:06 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("wrongCat")
{
    std::cout << GREEN << "WrongCat constructor called" << std::endl << RESET;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
     std::cout << GREEN << "WrongCat clone machine called" << std::endl << RESET;
}

WrongCat::~WrongCat(void)
{
    std::cout << RED << "The WrongCat is dead" << std::endl << RESET;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void WrongCat::Wrongmakesound(void) const
{
    std::cout << YELLOW << _type << " says meeeeow" << std::endl << RESET;
}
