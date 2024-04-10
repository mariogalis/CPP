/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:27:16 by mario             #+#    #+#             */
/*   Updated: 2023/09/28 17:22:42 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

class WrongAnimal
{
    protected:
    
        std::string _type;

    public:

        WrongAnimal(void);
        WrongAnimal(std::string const type);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        ~WrongAnimal(void);
        void Wrongmakesound(void) const;
        std::string WronggetType() const;
        
};

#endif
