/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:04:51 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/30 16:28:58 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weaponREF(weapon), _name(name)
{

}

void	HumanA::attack() const
{
	std::cout << RED << this->_name << WHITE;
	std::cout << " attacks with his " << YELLOW << this->_weaponREF.getType();
	std::cout << WHITE << std::endl;
}

HumanA::~HumanA()
{
	
}