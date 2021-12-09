/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:58:36 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/09 15:22:29 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "[ " << YELLOW << this->_name << WHITE << " ] created from the DiamondTrap constructor" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::setHitPoints();
	this->_energyPoints = ScavTrap::setEnergyPoints();
	this->_attackDamage = FragTrap::setAttackDamage();
	std::cout << "Hit points    = " << this->_hitPoints << std::endl;
	std::cout << "Energy points = " << this->_energyPoints << std::endl;
	std::cout << "Attack damage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	*this = obj;
	return ;
}

void	DiamondTrap::attack(std::string const &target)
{
	std::cout << RED << "!" << WHITE << " Calling attack() from DiamondTrap from ScavTrap " << RED <<  "!" << WHITE << std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My clap name is " << YELLOW << ClapTrap::_name << WHITE << " and my name is " << YELLOW << this->_name << WHITE << std::endl;
}

DiamondTrap	&	operator=(DiamondTrap const &obj)
{
	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[ " << YELLOW << this->_name << WHITE << " ] dead from DiamondTrap constructor" << std::endl;
	std::cout << std::endl;
}