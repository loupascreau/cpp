/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:26:57 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/10 15:38:56 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_myHitPoints = this->_hitPoints;
	this->_myAttackDamage = this->_attackDamage;
	std::cout << "[ " << YELLOW << name << WHITE << " ] created from FragTrap constructor !" << std::endl;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_myHitPoints = this->_hitPoints;
	this->_myAttackDamage = this->_attackDamage;
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const &obj)
{
	std::cout << "Assignation operator inutile for " << &obj << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << RED << "--> " << YELLOW << this->getName() << WHITE;
	std::cout << " requesting a positive high fives ! " << RED << "<--" << WHITE << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_hitPoints > 0)
	{
		this->_attackDamage = 1 + std::rand() / (RAND_MAX / 50);
		std::cout << "FragTrap " << YELLOW << this->_name << WHITE << " attack " << YELLOW << target << WHITE;
		std::cout << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_hitPoints -= this->_attackDamage;
	}
	else
		std::cout << YELLOW << this->_name << WHITE << " has not enought hit points to attack ! [FragTrap]" << std::endl;
}

int		FragTrap::setHitPoints(void)
{
	this->_hitPoints = this->_myHitPoints;
	return this->_hitPoints;
}

int		FragTrap::setAttackDamage(void)
{
	this->_attackDamage = this->_myAttackDamage;
	return this->_attackDamage;
}

FragTrap::~FragTrap()
{
	std::cout << "! " << YELLOW << this->_name << WHITE << " Dead from FragTrap destructor !" << std::endl;
}