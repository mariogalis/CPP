/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:08:58 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 19:23:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template <typename T>
const T	&min(T const &a, T const &b)
{
	return (a <=b ? a : b);
}

template <typename T>
const T	&max(T const &a, T const &b)
{
	return (a >=b ? a : b);
}

#endif