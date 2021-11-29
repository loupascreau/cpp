/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:05:47 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 10:45:34 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponPTR(NULL)
{

}

void	HumanB::setWeapon(Weapon Weapon)
{
	this->_weaponPTR = &Weapon;
}

void	HumanB::attack(void) const
{
	std::cout << BLUE << this->_name << WHITE << " attacks with his " << YELLOW << this->_weaponPTR->getType() << WHITE << std::endl;
}

HumanB::~HumanB()
{
	
}