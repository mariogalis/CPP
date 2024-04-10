/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:09:13 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/11 16:41:48 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl harl;

	if(argc != 2)
	{
		std::cout << "ERROR : Bad number of arguments" << std::endl;
		return(1);
	}
	harl.complain(argv[1]);
	return(0);
}