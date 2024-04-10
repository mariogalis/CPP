/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:27:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/28 17:23:02 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
     std::cout << "WrongCat clone machine called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "The WrongCat is dead" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void WrongCat::Wrongmakesound(void) const
{
    std::cout << _type << " says meeeeow" << std::endl;
}
