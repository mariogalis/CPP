/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:08:12 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/04 19:50:59 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Alberto;

	std::cout << "------------------------------------------" <<std::endl;
	
	Alberto = new Zombie;
	Alberto->announce();
	delete Alberto;

	std::cout << "------------------------------------------" <<std::endl;

	Alberto = newZombie("Alberto");
	Alberto->announce();
	delete Alberto;

	std::cout << "------------------------------------------" <<std::endl;

	randomChump("Alberto");

	std::cout << "------------------------------------------" <<std::endl;
}