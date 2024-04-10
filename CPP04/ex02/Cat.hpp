/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:55:39 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 17:43:08 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:

        Brain *_brain;
        
    public:
    
        Cat(void);
        Cat(const Cat &copy);
        ~Cat(void);
        Cat &operator=(const Cat &copy);
        
        void    makesound(void) const;
        Brain	*getBrain(void) const;
};

#endif
