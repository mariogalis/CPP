/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:27:16 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 18:08:18 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

class Animal
{
    protected:
    
        std::string _type;

    public:

        Animal(void);
        Animal(std::string const type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal(void);
        virtual void makesound() const = 0;
        const std::string getType() const;
        
};

#endif
