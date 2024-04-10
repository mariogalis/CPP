/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:30:49 by mario             #+#    #+#             */
/*   Updated: 2023/09/10 19:09:48 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"

void printmenu()
{
	std::cout << YELLOW <<"    ____  __  ______  _   ________   ____  ____  ____  __ __\n   / __ \\/ / / / __ \\/ | / / ____/  / __ )/ __ \\/ __ \\/ //_/\n  / /_/ / /_/ / / / /  |/ / __/    / __  / / / / / / / ,<\n / ____/ __  / /_/ / /|  / /___   / /_/ / /_/ / /_/ / /| |\n/_/   /_/ /_/\\____/_/ |_/_____/  /_____/\\____/\\____/_/ |_|\n  " << RESET << std::endl;
	std::cout << "\t     ----- MENU -----\n\n";
	std::cout << "\t    1.- 📥    ADD   📥\n";
	std::cout << "\t    2.- 🔍  SEARCH  🔍\n";
	std::cout << "\t    3.- ❌   EXIT   ❌\n\n";
}

int main()
{
	std::string	opt;
	PhoneBook book;
	printmenu();
	while (1)
	{
		std::cout << YELLOW << ">" << RESET;
		if (!std::cin)
			break ;
		std::cin >> opt;
		if(opt == "ADD")
			book.add();
		else if(opt == "SEARCH")
			book.search();
		else if(opt == "EXIT")
		{
			std::cout << YELLOW << "\t ___          _ _\n\t| _ )_  _ ___| | |\n\t| _ \\ || / -_)_|_|\n\t|___/\\_, \\___(_|_)\n\t      |__/ " << RESET << std::endl;
			break;
		}
		else
			std::cout << "Command not Foun\n";
		printmenu();
	}
	return (0);
}

