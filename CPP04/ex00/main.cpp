/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:04:31 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/02 16:46:15 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

void leaks(void)
{
		system("leaks Animal");
}

int	main(void)
{
	{
		const	Animal* meta = new Animal();
		const	Animal* i = new Cat();
		const	Animal* j = new Dog();
		
		atexit(leaks);
		std::cout << "The type is " << j->getType() << std::endl;
		std::cout << "The type is " << i->getType() << std::endl;
		i->makesound();
		j->makesound();
		meta->makesound();
		delete meta;
		delete i;
		delete j;
	}
	std::cout << "----------------" << std::endl;
	{
		const	WrongAnimal* meta = new WrongAnimal();
		const	WrongAnimal* wrong = new WrongCat();
		
		std::cout << "The type is " << wrong->WronggetType() << std::endl;
		std::cout << "The type is " << meta->WronggetType() << std::endl;
		meta->WrongmakeSound();
		wrong->WrongmakeSound();
		delete meta;
		delete wrong;
		
		std::cout << RESET  << std::endl;
	}
	std::cout << "----------------" << std::endl;
}
