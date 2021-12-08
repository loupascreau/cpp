/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:16:53 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 12:28:01 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guardMode(0)
{
	std::cout << "[ " << YELLOW << name << WHITE << " ] created from ScavTrap constructor !" << std::endl;
	std::cout << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guardMode == 0)
	{
		std::cout << RED << "--> " <<  YELLOW << this->getName() << WHITE;
		std::cout << " has enabled Gate keeper mode " << RED << "<--" << WHITE << std::endl;
		this->_guardMode = 1;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "! Dead from ScavTrap destructor !" << std::endl;
}