/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:58:36 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 16:31:07 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_Frag"), ScavTrap(name + "_clap_Scav"), _name(name)
{
	std::cout << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	
}