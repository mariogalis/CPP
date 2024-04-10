/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:54:20 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 18:06:10 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:

        Brain *_brain;

    public:

        Dog(void);
        Dog(const Dog &copy);
        ~Dog(void);
        Dog &operator=(const Dog &copy);

        Brain	*getBrain(void) const;
        void makesound(void) const;
};

#endif
