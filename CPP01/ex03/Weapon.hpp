/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:37:57 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/10 17:16:43 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string Type);
		~Weapon(void);
		void		setType(std::string Type);
		std::string	const &getType(void) const;
};

#endif