/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:50:57 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 16:30:01 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon)
{
	
}

std::string	Weapon::getType(void) const
{
	return this->_weapon;
}

void		Weapon::setType(std::string weapon)
{
	this->_weapon = weapon;
}

Weapon::~Weapon()
{
	
}