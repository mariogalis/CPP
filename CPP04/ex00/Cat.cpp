/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:27:50 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 17:14:09 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat")
{
    std::cout << GREEN << "Cat constructor called" << std::endl << RESET; 
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
     std::cout << GREEN  << "Cat clone machine called" << std::endl << RESET;
}

Cat::~Cat(void)
{
    std::cout << RED  << "The Cat is dead" << std::endl << RESET ;
}

Cat &Cat::operator=(const Cat &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void Cat::makesound(void) const
{
    std::cout << YELLOW << _type << " says meeeeow" << std::endl << RESET ;
}
