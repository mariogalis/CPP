/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:08:15 by mario             #+#    #+#             */
/*   Updated: 2023/07/04 17:46:39 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
#define YELLOW "\x1b[33m"

PhoneBook::PhoneBook(void): _index(0) {}

PhoneBook::~PhoneBook(void){}

void PhoneBook::add(void)
{
	if(_index == 8)
		_index = 0;
	if(PhoneBook::_book[_index].create())
		_index++;
}

void PhoneBook::search(void)
{
	int	indx;

	if (_book[0].checkempty() == false)
	{
		std::cout << "Error. No contacts added yet"<< std::endl;
		return ;
	}
	std::cout << "\nIndex     |First Name| Last Name| Nickname |\n";
	for(int i = 1 ; i <= 8; i++)
	{
		if(_book[i - 1].checkempty())
		{
			std::cout << std::setw(10) << i << "|";
			_book[i - 1].contactlist();
		}
		else
			break;
	}
	std::cout << "\n\n\tSelect Contact Index:\n";
	std::cout << YELLOW << ">"<< RESET;
	std::cin >> indx;
	if(!(indx <= 8 && indx >= 1))
		std::cout << RED << "\tERROR : INDEX NOT VALID\n" << RESET;
	else
		_book[(indx - 1)].print();
}