/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:31:23 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 13:23:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
int	main(void)
{
	uintptr_t	temp;

	Data data = {
		.num = 8,
	};

	
	std::cout << "Starting num: " << data.num << std::endl;
	temp = Serializer::serialize(&data);
	
	Data *new_data = Serializer::deserialize(temp);
	std::cout << "Ending num: " << new_data->num << std::endl;
	return (0);
}

/*
int	main(void)
{
	uintptr_t	temp;

	Data data = {
		.num = 8,
		.name = "Pablo",
		.a = '!'
	};

	
	std::cout << "Starting num: " << data.num << std::endl;
	std::cout << "Starting name: " << data.name << std::endl;
	std::cout << "Starting char: " << data.a << std::endl;
	temp = Serializer::serialize(&data);
	
	std::cout << YELLOW << "-------------------------------------" << std::endl<< RESET;
	Data *new_data = Serializer::deserialize(temp);
	std::cout << "Ending num: " << new_data->num << std::endl;
	std::cout << "Ending name: " << new_data->name << std::endl;
	std::cout << "Ending char: " << new_data->a << std::endl;
	return (0);
}
*/