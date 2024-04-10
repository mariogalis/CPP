/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:43:26 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/04 19:46:11 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string Zombiename) : _name(Zombiename) {}

Zombie::~Zombie(void)
{
	if(_name.empty())
		std::cout << "Unnamed Zombie: NO MORE BraiiiiiiinnnzzzZ..."<< std::endl;
	else
		std::cout << _name <<":  NO MORE BraiiiiiiinnnzzzZ..."<< std::endl;
}

void	Zombie::setname(std::string Zombiename)
{
	_name = Zombiename;
}

void	Zombie::announce(void) const
{
	if(_name.empty())
		std::cout << "Unnamed Zombie: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << _name <<": BraiiiiiiinnnzzzZ..."<< std::endl; 
}