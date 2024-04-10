/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:08:14 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 12:34:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cerrno>
#include <climits>
#include <cfloat>

class ScalarConverter
{

    private:
            ScalarConverter(void);
            ScalarConverter(const ScalarConverter &copy);
	    ~ScalarConverter(void);
            
            
    public:
            static void	intconversion(std::string str);
            static void charconversion(char c);
            static void floatconversion(std::string str);
            static void doubleconversion(std::string str);
    
};


bool	checkchar(std::string str);
bool	checkdouble(std::string str);
bool	checkfloat(std::string str);
bool	checkint(std::string str);



#endif
