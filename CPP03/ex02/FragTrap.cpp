/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:33:51 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:26 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Name constructor called for FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called for FragTrap" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy assignment operator called for FragTrap" << std::endl;
	if(this != &copy)
		{
			this->_name = copy._name;
			this->_attackdamage = copy._attackdamage;
			this->_energypoints = copy._energypoints;
			this->_hitpoints = copy._hitpoints;
		}
	return(*this);
}

void FragTrap::attack(const std::string& target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
	{
		std::cout << this->_name <<"No energy left for attack, better hide" << std::endl;
		return ;
	}
	_energypoints--;
	if(target.empty())
		std::cout << RED << "FragTrap " << _name << " attacks the air" << ", causing " << _attackdamage << " points of damage!" << std::endl << RESET; 
	else	
		std::cout << RED << "FragTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl << RESET;  
}

void FragTrap::takeDamage(unsigned int amount)
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
	std::cout << YELLOW  << "FragTrap " << _name << " takes " << amount << " points of damage! only " << _hitpoints << " left" << std::endl << RESET;
}

void FragTrap::beRepaired(unsigned int amount)
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
		std::cout << GREEN << "FragTrap " << _name << " repairs itself " << amount << " total of "<< _hitpoints <<YELLOW << std::endl << RESET;
}


void FragTrap::highFivesGuys()
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;
	_energypoints--;
	std::cout << BLUE << _name << " wants to high five!!"   << std::endl << RESET;
}
