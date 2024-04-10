/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:53:37 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/04 20:00:35 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	
	horde = new Zombie[N];
	for(int i = 0 ; i < N ; i++)
		horde[i].setname(name);
	return(horde);
}
