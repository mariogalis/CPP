/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:08:12 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/04 20:03:06 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 12;
	Zombie *horde = zombieHorde(N,"Pablo");
	for(int i = 0 ; i < N ; i++)
		horde[i].announce();
	delete [] horde;
}