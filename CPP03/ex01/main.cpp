/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:07:33 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/19 19:16:04 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
	ClapTrap	clap1;
	ClapTrap	clap2("Alberto ");
	ClapTrap	clap3(clap1);

    
    clap1.attack("Javi");
    //clap1.attack("");
    clap1.attack("Pedro");
	clap2.takeDamage(3);
	//clap2.takeDamage(3000);
	//clap2.takeDamage(3);
	clap2.beRepaired(2);
	//clap2.beRepaired(2000);
	clap2.attack("Claptrap");
	clap1.takeDamage(4);

	for(int i = 0 ; i <= 8 ; i++)		// atacks 11 times no energy left
		clap1.attack("Pedro");
	}
	std::cout << std::endl << std::endl << std::endl  << "*******************************************************" << std::endl << std::endl << std::endl;
	{
	ScavTrap	scav1;
	ScavTrap	scav2("Alberto ");
	ScavTrap	scav3(scav1);

    
    scav1.attack("Javi");
	//scav1.attack("");
    scav1.attack("Pedro");
	scav2.takeDamage(30);
	//scav2.takeDamage(3000);
	//scav2.takeDamage(0);
	scav2.beRepaired(6);
	//scav2.beRepaired(6000);
	scav2.attack("Claptrap");
	scav2.takeDamage(4);
	scav1.guardGate();
	scav1.guardGate();
		
		
	}

}
