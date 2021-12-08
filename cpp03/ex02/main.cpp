/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 13:42:41 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	ScavTrap	superman("Superman");
	FragTrap	batman("Batman");
		
	std::srand(std::time(NULL));
	while (1)
	{
		superman.attack("batman");
		batman.takeDamage(superman.getAttackDamage());
		superman.beRepaired(superman.getAttackDamage());
		if (batman.getEnergyPoints() <= 0)
			break ;
		superman.guardGate();
		batman.attack("superman");
		superman.takeDamage(batman.getAttackDamage());
		batman.beRepaired(batman.getAttackDamage());
		if (superman.getEnergyPoints() <= 0)
			break ;
		batman.highFivesGuys();
	}
	return 0;
}