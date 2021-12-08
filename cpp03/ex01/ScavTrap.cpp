/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:53 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 15:26:15 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[ " << YELLOW << name << WHITE << " ] created from ScavTrap constructor !" << std::endl;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
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

ScavTrap::~ScavTrap()
{
	std::cout << "! Dead from ScavTrap destructor !" << std::endl;
}