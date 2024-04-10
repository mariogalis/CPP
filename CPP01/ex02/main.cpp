/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:20:06 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/06 18:35:38 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string;
	std::string *stringPTR;
	std::string &stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::cout << "The memory address of the string variable =" << &string << std::endl;
	std::cout << "The memory address held by stringPTR      =" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      =" << &stringREF << std::endl;
	std::cout << "The value of the string variable          =" << string<< std::endl;
	std::cout << "The value pointed to by stringPTR         =" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF         =" << stringREF << std::endl;
}