/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:38:07 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/10 17:44:34 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void)const;
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif