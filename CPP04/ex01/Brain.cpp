/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:37:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/28 17:52:28 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << GREEN << "Brain constructor called" << std::endl << RESET;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
     std::cout << GREEN  << "Brain clone machine called" << std::endl << RESET;
}

Brain::~Brain(void)
{
    std::cout << RED  << "The Brain is dead" << std::endl << RESET;
}

Brain &Brain::operator=(const Brain &copy)
{
    if(this != &copy)
       copyIdeas(copy._ideas);
    return(*this);
}


void Brain::copyIdeas(const std::string *ideas)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = ideas[i];
}

void Brain::addIdeas(std::string idea)
{
    int i = 0;
    
    for (i = 0; i < 100; i++)
	{
		if (_ideas[i].empty())
		{
			_ideas[i] = idea;
			break;
		}
	}
	if (i == 100)
		std::cout << "Cant add more ideas brain full " << std::endl;
}

std::string	*Brain::getIdeas(void)
{
	return (_ideas);
}

void Brain::printIdeas(void)
{
	if(_ideas[0].empty())
	{
		std::cout << "NO ideas on this brain" << std::endl;
	}
	for (int i = 0; i < 100; i++)
	{
		if (!_ideas[i].empty())
			std::cout << BLUE << "Idea " << i + 1 << ": " << _ideas[i] << std::endl << RESET;
	}
}
