/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:55:39 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 17:44:22 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
    
        Cat(void);
        Cat(const Cat &copy);
        ~Cat(void);
        Cat &operator=(const Cat &copy);
        
        void makesound(void) const;
};

#endif
