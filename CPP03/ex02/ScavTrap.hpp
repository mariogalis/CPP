/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:15:34 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/12 19:17:36 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define BLUE				"\x1b[34m"

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

        bool _mode;

    public:

        ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
        ScavTrap(std::string name);
        ScavTrap &operator=(const ScavTrap &copy);
		~ScavTrap(void);

        void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate(void);
    
};

#endif