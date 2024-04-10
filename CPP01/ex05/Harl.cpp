/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:09:03 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/11 16:51:01 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::complain( std::string level )
{
	int	i = 0;
	std::string	complain[4];

	ptrf[0] = &Harl::debug;
	ptrf[1] = &Harl::info;
	ptrf[2] = &Harl::warning;
	ptrf[3] = &Harl::error;
	complain[0] = "DEBUG";
	complain[1] = "INFO";
	complain[2] = "WARNING";
	complain[3] = "ERROR";

	while(i < 4)
	{
		if (!complain[i].compare(level))
			(this->*ptrf[i])();
		i++;
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