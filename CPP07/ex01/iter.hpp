/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:00:53 by codespace         #+#    #+#             */
/*   Updated: 2023/10/22 09:16:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, const size_t len, void (*f)(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif