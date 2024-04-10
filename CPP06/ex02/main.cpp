/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:29:52 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/25 13:36:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABase.hpp"
#include "BBase.hpp"
#include "CBase.hpp"
#include <cstdlib>
#include <iostream>


Base * generate(void)
{
    int	n;

	srand (time(NULL));
	n = rand() % 3;
	if (n == 0)
	{
		std::cout << GREEN << "Type A generated" << std::endl << RESET;
		return (new A);
	}
    else if (n == 1)
    {
		std::cout << GREEN << "Type B generated" << std::endl << RESET;
		return (new B);
    }
    else
    {
		std::cout << GREEN << "Type C generated" << std::endl << RESET;
		return (new C);       
    }
        
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))   //Si falla devuelve un puntero NULL, es decir si es el mismo = NULL ** dynamic_cast< target-type >( expression ) **	

		std::cout << YELLOW << "Base is type A" << std::endl << RESET;
	else
		std::cout <<RED << "Base is not type A" << std::endl << RESET;
        
    if (dynamic_cast<B *>(p))
		std::cout << YELLOW << "Base is type B" << std::endl << RESET;
	else
		std::cout << RED << "Base is not type B" << std::endl << RESET;
        
    if (dynamic_cast<C *>(p))
		std::cout << YELLOW << "Base is type C" << std::endl << RESET;
	else
		std::cout << RED << "Base is not type C" << std::endl << RESET;
}

void identify(Base& p)
{
    try
	{
		A &a = dynamic_cast<A &>(p);   //Si la conversión falla y el tipo de destino es un tipo de referencia, genera una excepción que coincide con un controlador de tipo std::bad_cast
		(void)a;
		std::cout << YELLOW << "Base is type A" << std::endl << RESET;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Base is not type A" << std::endl << RESET;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout<< YELLOW  << "Base is type B" << std::endl << RESET;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Base is not type B" << std::endl << RESET;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << YELLOW << "Base is type C" << std::endl << RESET;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Base is not type C" << std::endl << RESET;
	}
}

int main()
{
	Base	*base;

	base = generate();
	std::cout << BLUE << "**************************************" << std::endl << RESET;
	identify(base);
	std::cout << BLUE << "**************************************" << std::endl << RESET;
	identify(*base);
	delete base;
	return (0);
}
