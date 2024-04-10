/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:28:34 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/28 17:43:48 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <iomanip>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    
        WrongCat(void);
        WrongCat(const WrongCat &copy);
        ~WrongCat(void);
        WrongCat &operator=(const WrongCat &copy);
        
        void Wrongmakesound(void) const;
};

#endif
