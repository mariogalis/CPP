/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:33:55 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/18 17:33:34 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP
# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define BLUE				"\x1b[34m"

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:


    public:

        FragTrap(void);
		FragTrap(const FragTrap &copy);
        FragTrap(std::string name);
        FragTrap &operator=(const FragTrap &copy);
		~FragTrap(void);

        void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
        void    highFivesGuys(void);
    
};

#endif
