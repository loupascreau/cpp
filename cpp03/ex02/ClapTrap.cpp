/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:53:39 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 15:42:07 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ " << YELLOW << this->_name << WHITE << " ] created from the constructor" << std::endl;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "Assignation operator inutile for " << &obj << std::endl;
	return *this;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_hitPoints > 0)
	{
		this->_attackDamage = 1 + std::rand() / (RAND_MAX / 60);
		std::cout << "ClapTrap " << YELLOW << this->_name << WHITE << " attack " << YELLOW << target << WHITE;
		std::cout << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_hitPoints -= this->_attackDamage;
	}
	else
		std::cout << YELLOW << this->_name << WHITE << " has not enought hit points to attack !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << this->_name << WHITE << " is already dead " << RED "x" << WHITE << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << YELLOW << this->_name << WHITE << " take " << amount;
	std::cout << " points of damage !" << std::endl;
	this->_energyPoints -= amount;
	this->_hitPoints++;
	if (this->_energyPoints <= 0)
		std::cout << YELLOW << this->_name << WHITE << " is dead " << RED << "x" << WHITE << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount / 2;
	std::cout << "ClapTrap " << YELLOW << this->_name << WHITE;
	std::cout << " is repaired by " << amount / 2 << " points energy !" << std::endl;
	std::cout << std::endl;
}

int		ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

int		ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

ClapTrap::~ClapTrap()
{
	std::cout << std::endl;
	std::cout << "[ " << YELLOW << this->_name << WHITE << " ] dead from the ClapTrap destructor" << std::endl;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << RED << "Energy points " << WHITE << "= " << this->_energyPoints << std::endl;
	else
		std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
}