/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:26:57 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 13:47:03 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ " << YELLOW << name << WHITE << " ] created from FragTrap constructor !" << std::endl;
	std::cout << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->getEnergyPoints() < 80)
	{
		std::cout << RED << "--> " << YELLOW << this->getName() << WHITE;
		std::cout << " requesting a positive high fives ! " << RED << "<--" << WHITE << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "! Dead from FragTrap destructor !" << std::endl;
}