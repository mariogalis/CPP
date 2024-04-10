/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:09:03 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/11 17:10:35 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::complain( std::string level )
{
	int i = 0;
	std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
	
	while(i < 4)
	{
		if (!levels[i].compare(level))
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ] "<<std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << BLUE << "[INFO]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW <<"[WARNING]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED <<"[ERROR]" << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}