/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/09 15:10:32 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	superman("superman");
	DiamondTrap	batman("batman");
		
	std::srand(std::time(NULL));
	while (1)
	{
		superman.whoAmI();
		superman.attack("batman");
		batman.takeDamage(superman.getAttackDamage());
		superman.beRepaired(superman.getAttackDamage());
		if (batman.getEnergyPoints() <= 0)
			break ;
		superman.guardGate();
		batman.whoAmI();
		batman.attack("superman");
		superman.takeDamage(batman.getAttackDamage());
		batman.beRepaired(batman.getAttackDamage());
		if (superman.getEnergyPoints() <= 0)
			break ;
		batman.highFivesGuys();
	}
	return 0;
}