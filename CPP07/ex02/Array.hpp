/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:13:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/26 09:12:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"

#include <iostream>
#include <cstdlib>



template <typename T>
class Array
{
	public:

		Array(void) : _array(), _len(0) {}
		Array(unsigned int n) : _array(new T[n]), _len(n) {}
		Array(const Array &other) : _array() { *this = other; }
		~Array(void) { delete [] _array; }

		Array	&operator=(const Array &other)
		{
			if (this != &other)
			{
				T	*temp;

				temp = new T[other._len];
				for (unsigned int i = 0; i < other._len; i++)
					temp[i] = other._array[i];
				delete [] _array;
				_array = temp;
				_len = other._len;
			}
			return (*this);
		}
		
		T	&operator[](const unsigned int n)
		{
			if (n >= _len)
				throw (std::out_of_range("out of range"));
			else
				return (_array[n]);
		}

		int	size(void) const { return (_len); }

		
	private:
		T				*_array;
		unsigned int	_len;
};

#endif
