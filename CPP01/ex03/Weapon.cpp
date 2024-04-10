/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:38:00 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/10 17:13:46 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type) : _type(Type) {}
Weapon::~Weapon(void){}

void Weapon::setType(std::string Type)
{
	_type = Type;
}

std::string const	&Weapon::getType(void) const
{
	return _type;
}