/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:05:47 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/30 16:28:26 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weaponPTR(NULL), _name(name)
{

}

void	HumanB::setWeapon(Weapon Weapon)
{
	this->_weaponPTR = &Weapon;
}

void	HumanB::attack(void) const
{
	std::cout << BLUE << this->_name << WHITE;
	std::cout << " attacks with his " << YELLOW;
	std::cout << this->_weaponPTR->getType() << WHITE << std::endl;
}

HumanB::~HumanB()
{
	
}