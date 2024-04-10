/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:38:13 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/10 17:17:28 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string Name, Weapon &weapon) : _name(Name), _weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack(void)const
{
	if(_name.empty())
		std::cout << "Unnamed Human";
	else
		std::cout << _name;
	std::cout << " attacks with their ";
	if(_weapon.getType().empty())
		std::cout << " fists"<< std::endl;
	else
		std::cout << _weapon.getType() << std::endl;
}