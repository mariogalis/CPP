/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:03:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 12:17:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int error(std::string str)
{
	std::cout << RED << str << std::endl << RESET;
	return -1;
}


int main(int argc, char *argv[])
{
	std::string str;
	ScalarConverter *converter;
	
	if(argc != 2)
		return error("ERROR: BAD NUMBER OF ARGUMENTS");
	str = argv[1];
	if(checkint(str))
		converter->intconversion(str);
	else if(checkfloat(str))
		converter->floatconversion(str);
	else if(checkchar(str))
		converter->charconversion(str[0]);
	else if(checkdouble(str))
		converter->doubleconversion(str);
	else
		return error("NO CONVERSION POSSIBLE");
	return 0;
}
