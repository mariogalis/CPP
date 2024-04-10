/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:15:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:59 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _mode(false)
{
	std::cout << "Default constructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Name constructor called for ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy constructor called for ScavTrap" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called for ScavTrap" << std::endl;
	if(this != &copy)
		{
			this->_name = copy._name;
			this->_attackdamage = copy._attackdamage;
			this->_energypoints = copy._energypoints;
			this->_hitpoints = copy._hitpoints;
		}
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
	{
		std::cout << this->_name <<"No energy left for attack, better hide" << std::endl;
		return ;
	}
	_energypoints--;
	if(target.empty())
		std::cout << RED << "ScavTrap " << _name << " attacks the air" << ", causing " << _attackdamage << " points of damage!" << std::endl << RESET; 
	else	
		std::cout << RED << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl << RESET;  
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
	{
		std::cout << "No energy left for taking damage, better hide" << std::endl;
		return ;
	}
	_hitpoints = _hitpoints - amount;
	std::cout << YELLOW  << "ScavTrap " << _name << " takes " << amount << " points of damage! only " << _hitpoints << " left" << std::endl << RESET;
}

void ScavTrap::beRepaired(unsigned int amount)
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
		std::cout << GREEN << "ScavTrap " << _name << " repairs itself " << amount << " total of "<< _hitpoints <<YELLOW << std::endl << RESET; ;
}



void ScavTrap::guardGate()
{
    if(_mode)
          std::cout << BLUE << "ScavTrap " << _name << " allredy guarding  "<< RESET << std::endl;
    else
    {
        _mode = true;
        std::cout << BLUE << "ScavTrap " << _name << " is now guarding "<< RESET << std::endl;
    }
}   
