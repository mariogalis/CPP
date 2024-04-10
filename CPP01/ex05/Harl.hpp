/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:09:06 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/11 16:51:18 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"


class Harl
{
	public:

		Harl(void);
		~Harl(void);
		void complain( std::string level );

	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void (Harl::*ptrf[4])();

};


#endif