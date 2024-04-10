/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:11:16 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 18:52:59 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Misterious animal")
{
    std::cout  << GREEN << "Misterious animal constructor called" << std::endl << RESET;
}

Animal::Animal(std::string const type) : _type(type)
{
    if(type.empty())
        _type = "Misterious animal";
    std::cout << GREEN << _type << " constructor called from animal" << std::endl << RESET;    
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
     std::cout  << GREEN << "animal clone machine called" << std::endl << RESET;
}

Animal::~Animal(void)
{
    std::cout << RED << "The animal is dead" << std::endl << RESET;
}

Animal &Animal::operator=(const Animal &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void Animal::makesound(void) const
{
    std::cout << YELLOW << _type << " makes a weird sound" << std::endl << RESET;
}

const std::string Animal::getType() const
{
    return(this->_type);
}
