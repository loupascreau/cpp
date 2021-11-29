/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:04:51 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 10:45:18 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weaponREF(weapon)
{

}

void	HumanA::attack() const
{
	std::cout << RED << this->_name << WHITE << " attacks with his " << YELLOW << this->_weaponREF.getType() << WHITE << std::endl;
}

HumanA::~HumanA()
{
	
}