/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:00:04 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/02 16:43:08 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Misterious wrong animal")
{
    std::cout << GREEN << "Misterious wrong animal constructor called" << std::endl << RESET;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
    if(type.empty())
        _type = "Misterious wrong animal";
    std::cout << GREEN << _type << " wrong constructor called" << std::endl << RESET;    
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
     std::cout << GREEN << "wrong animal clone machine called" << std::endl << RESET;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << RED << "The wrong animal is dead" << std::endl << RESET;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void WrongAnimal::WrongmakeSound(void) const
{
    std::cout << YELLOW << _type << " makes a wrong weird sound" << std::endl << RESET;
}

std::string WrongAnimal::WronggetType() const
{
    return(this->_type);
}
