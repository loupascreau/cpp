/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:45:40 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 10:49:15 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{
	Weapon	gun = Weapon("M-16");
	HumanA	trump("Trump", gun);
	HumanB	vladimir("Vladimir");
	
	trump.attack();
	gun.setType("Kalashnikov");
	vladimir.setWeapon(gun);
	vladimir.attack();
	gun.setType("Cyber attack");
	trump.attack();
	vladimir.attack();
	return 0;
}