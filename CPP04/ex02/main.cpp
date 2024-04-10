/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:04:31 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/02 17:17:32 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void leaks()
{
		system("leaks Animal");
}


int	main(void)
{

	// Animal *animal1 = new Animal();
	// Animal animal2 = Animal();
	// delete animal1;
	{
		Dog	*dog = new Dog;

		std::cout << std::endl;
		atexit(leaks);
		dog->getBrain()->addIdeas("Eat");
		dog->getBrain()->addIdeas("Drink");
		dog->getBrain()->printIdeas();
		Dog	*dog2 = new Dog(*dog);
		delete dog;
		dog2->getBrain()->printIdeas();
		delete dog2;
	}
	std::cout << RESET  << std::endl;
	std::cout << "***********************************" << std::endl << std::endl ;

    {
		Cat	*cat = new Cat;

		std::cout << std::endl;
		std::cout << "The type is " << cat->getType() << std::endl;
		for(int i = 0; i < 100 ; i++)
			cat->getBrain()->addIdeas("Eat");
		cat->getBrain()->addIdeas("Drink");
		cat->getBrain()->printIdeas();
		Cat	*cat2 = new Cat(*cat);
		delete cat;
		std::cout << "The type is " << cat2->getType() << std::endl;
		cat2->getBrain()->printIdeas();
		delete cat2;
	}
	std::cout << RESET  << std::endl;
}
