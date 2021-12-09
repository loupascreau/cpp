/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:53 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/09 14:55:23 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_myEnergyPoints = this->_energyPoints;
	std::cout << "[ " << YELLOW << name << WHITE << " ] created from ScavTrap constructor !" << std::endl;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_myEnergyPoints = this->_energyPoints;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "Assignation operator inutile for " << &obj << std::endl;
	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << RED << "--> " <<  YELLOW << this->getName() << WHITE;
	std::cout << " has enabled Gate keeper mode " << RED << "<--" << WHITE << std::endl;
}

int		ScavTrap::setEnergyPoints(void)
{
	this->_energyPoints = this->_myEnergyPoints;
	return this->_energyPoints;
}

ScavTrap::~ScavTrap()
{
	std::cout << "! " << YELLOW << this->_name << WHITE << " Dead from ScavTrap destructor !" << std::endl;
}