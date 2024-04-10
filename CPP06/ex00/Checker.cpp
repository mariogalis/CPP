/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:43:50 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 12:04:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	checkint(std::string str)
{
	long int n;
	char *pEnd;

	n = strtol(str.c_str(), &pEnd, 0);
	if(*pEnd || n < INT_MIN || n > INT_MAX)
		return (false);
	return(true);
}   

bool	checkfloat(std::string str)
{
	double	f;
	char	*pEnd;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	errno = 0;
	f = strtod(str.c_str(), &pEnd);
	if (*pEnd != 'f' || errno)
		return (false);
	if ((f > 0 && (f > FLT_MAX || f < FLT_MIN)) || (f < 0 && (-f > FLT_MAX || -f < FLT_MIN)))
		return (false);
	return (true);
}   

bool	checkchar(std::string str)
{
	if(str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return(true);
	return(false);
}   

bool	checkdouble(std::string str)
{
	long int d;
	char *pEnd;
	
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	errno = 0;
	d = strtod(str.c_str(), &pEnd);
	if(*pEnd || errno)                                                               ///check the str[0] == i
		return false;
	return true;
}   
