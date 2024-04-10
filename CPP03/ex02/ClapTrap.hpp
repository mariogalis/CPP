/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:07:31 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/18 17:00:04 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

# include <iostream>
# include <string>

class ClapTrap
{
	protected:

		std::string _name;
		int			_hitpoints;
		int			_energypoints;
		int			_attackdamage;
		int			_maxhp;

	public:
	
		ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
        ClapTrap(std::string name);
        ClapTrap &operator=(const ClapTrap &copy);
		~ClapTrap(void); 
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
