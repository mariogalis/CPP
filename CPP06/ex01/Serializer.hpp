/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:31:25 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 13:23:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"


struct Data 
{
	int num;
};

/*
struct Data 
{
	int 		num;
	std::string name;
	char		a;
};
*/


class Serializer
{
	public:
			static uintptr_t serialize(Data *ptr);
			static Data *deserialize(uintptr_t temp);
    private:
            Serializer(void);
            Serializer(const Serializer &copy);
	    	~Serializer(void);
};

Data *deserialize(uintptr_t temp);
uintptr_t serialize(Data *ptr);

#endif
