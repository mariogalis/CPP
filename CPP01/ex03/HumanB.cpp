/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:38:09 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/10 17:44:31 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string Name) : _name(Name), _weapon(NULL){}
HumanB::~HumanB(){}

void HumanB::attack(void)const
{
	if(_name.empty())
		std::cout << "Unnamed Human";
	else
		std::cout << _name;
	std::cout << " attacks with their ";
	if(!_weapon)
		std::cout << " unknown club"<< std::endl;
	if(_weapon->getType().empty())
		std::cout << " fists"<< std::endl;
	else
		std::cout << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}