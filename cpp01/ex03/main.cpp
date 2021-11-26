/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:45:40 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 16:35:32 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{
	Weapon	gun = Weapon("AK-47");
	
	std::cout << gun.getType() << std::endl;
	gun.setType("FAMAS");
	std::cout << gun.getType() << std::endl;
	return 0;
}