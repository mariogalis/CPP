/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:40:35 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/04 19:49:37 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
	private :
		std::string		_name;
	public :

		Zombie (std::string zname);
		~Zombie(void);
		Zombie(void);
		void	announce( void ) const;
		void	setname(std::string Zombiename);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif