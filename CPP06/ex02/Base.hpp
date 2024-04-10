/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:26:30 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/15 18:56:13 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
# define BASE_HPP

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define BLUE               "\x1b[34m"

class Base
{
	public:

		virtual ~Base(void);
};

#endif
