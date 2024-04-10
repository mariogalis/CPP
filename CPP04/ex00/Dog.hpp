/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:54:20 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 17:44:28 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Dog : public Animal
{
    public:

        Dog(void);
        Dog(const Dog &copy);
        ~Dog(void);

        Dog &operator=(const Dog &copy);
        void makesound(void) const;
};

#endif
