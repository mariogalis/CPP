/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:31:21 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 12:46:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

						/*---------Contructores y Destructores--------*/

Serializer::Serializer(void) 
{
	std::cout << GREEN << "Serializer constructor called" << std::endl << RESET;    
}

Serializer::~Serializer(void)
{
	std::cout << RED << "The Serializer is DELETED" << std::endl << RESET;
}

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
	 std::cout  << GREEN << "Serializer clone machine called" << std::endl << RESET;
}


						/*---------FUNCIONES--------*/

uintptr_t Serializer::serialize(Data *ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {

	return reinterpret_cast<Data *>(raw);
}