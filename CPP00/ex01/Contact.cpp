/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:08:21 by mario             #+#    #+#             */
/*   Updated: 2023/07/04 17:43:05 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"
#define RED "\x1b[31m"

Contact::Contact(void){}

Contact::~Contact(void){}

bool Contact::checkempty(void)
{
	if(_lastName.empty())
		return false;
	else if (_firstName.empty())
		return false;
	return true;
}


bool Contact::create(void)
{
	int	i = 0;
	std::string Name;
	std::string LastName;
	std::string NickName;
	std::string Phone;
	
	
	std::cout << "\tType first name ...\n" << YELLOW << ">" << RESET;
	std::cin >> Name;
	std::cout << "\tType last name ...\n"<< YELLOW << ">" << RESET;
	std::cin >> LastName;
	std::cout << "\tType nick name ...\n"<< YELLOW << ">" << RESET;
	std::cin >> NickName;
	std::cout << "\tType phone number ...\n"<< YELLOW << ">" << RESET;
	std::cin >> Phone;
	while (Phone[i])
	{
		if(!isdigit(Phone[i]))
		{
			std::cout << RED << "\n\n\t!!!!! ERROR ONLY NUMBERS !!!!!\n\n" << RESET;
			return false;
		}
		i++;
	}
	_firstName = Name;
	_lastName = LastName;
	_nickName = NickName;
	_phoneNumber = Phone;
	std::cout << "\tType darckest secret ...\n"<< YELLOW << ">" << RESET;
	std::cin >> _darkestSecret;
	return true;
}

void Contact::contactlist(void)
{
	if(_firstName.length() > 10)
		std::cout << _firstName.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << _firstName << "|";
	if(_lastName.length() > 10)
		std::cout << _lastName.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << _lastName << "|";
	if(_nickName.length() > 10)
		std::cout << _nickName.substr(0,9) << ".|\n";
	else
		std::cout << std::setw(10) << _nickName << "|\n";
}

void Contact::print(void)
{
	std::cout << "\tFirst Name     : " << _firstName << "\n";
	std::cout << "\tLast Name      : " << _lastName<< "\n";
	std::cout << "\tNickname       : " << _nickName<< "\n";
	std::cout << "\tPhone Number   : " << _phoneNumber << "\n";
	std::cout << "\tDarkest Secret : " << _darkestSecret<< "\n";
	
}