/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:30:32 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 17:15:48 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("dog")
{
    std::cout << GREEN << "Dog constructor called" << std::endl << RESET;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
     std::cout << GREEN << "Dog clone machine called" << std::endl << RESET;
}

Dog::~Dog(void)
{
    std::cout << RED << "The Dog is dead" << std::endl << RESET;
}

Dog &Dog::operator=(const Dog &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void Dog::makesound(void) const
{
    std::cout << YELLOW << _type << " says woooff" << std::endl << RESET;
}
