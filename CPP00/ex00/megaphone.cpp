/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:34:09 by mario             #+#    #+#             */
/*   Updated: 2023/05/11 11:02:37 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i = 1, j;

    if(argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}