/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:07:29 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/19 19:11:43 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Unamed"), _hitpoints(10), _energypoints(10), _attackdamage(0), _maxhp(10)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0), _maxhp(10)
{
	if(_name.empty())
		_name = "Unamed Claptrap ";
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &copy)
		{
			this->_name = copy._name;
			this->_attackdamage = copy._attackdamage;
			this->_energypoints = copy._energypoints;
			this->_hitpoints = copy._hitpoints;
		}
	return(*this);
}

/************************************************************/

void ClapTrap::attack(const std::string& target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
	{
		std::cout << this->_name <<"No energy left for attack, better hide" << std::endl;
		return ;
	}
	_energypoints--;
	if(target.empty())
		std::cout << RED << "ClapTrap " << _name << " attacks the air" << ", causing " << _attackdamage << " points of damage!" << std::endl << RESET; 
	else	
		std::cout << RED << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl << RESET; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
	{
		std::cout << "No energy left for taking damage, better hide" << std::endl;
		return ;
	}
	if(_hitpoints - (int)amount < 0)
		_hitpoints = 0;
	else
		_hitpoints = _hitpoints - amount;
	std::cout << YELLOW  << "ClapTrap " << _name << " takes " << amount << " points of damage! only " << _hitpoints << " left" << std::endl << RESET;
}

void ClapTrap::beRepaired(unsigned int amount)
{
		if (_hitpoints <= 0 || _energypoints <= 0)
		{
			std::cout << "No energy left for repaired, better hide" << std::endl;
			return ;
		}
		_energypoints--;
		if(_hitpoints + amount < (unsigned int)_maxhp)
			_hitpoints = _hitpoints + amount;
		else
			_hitpoints = _maxhp;
		std::cout << GREEN << "ClapTrap " << _name << " repairs itself " << amount << " total of "<< _hitpoints <<YELLOW << std::endl << RESET; ;
}

