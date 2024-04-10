/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:37:30 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/28 17:28:11 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>
#include <iomanip>

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define BLUE                "\e[0;34m"

class Brain
{
    private:
    
        std::string _ideas[100];

    public:

        Brain(void);
        Brain(std::string const type);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        ~Brain(void);

        std::string	*getIdeas(void);
        void copyIdeas(const std::string *ideas);
        void addIdeas(std::string idea);
        void printIdeas(void);
        
        

        
};

#endif
