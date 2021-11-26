/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:36:43 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 15:05:51 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int		main(void)
{
	Zombie	*horde = zombieHorde(5, "student");
	
	std::cout << YELLOW << "-> My zombie horde was created from 'zombieHorde' by heap allocation" << WHITE << std::endl;
	delete[] horde;
	std::cout << RED << "x Space allocated free, All my zombies are dead x" << WHITE << std::endl;
	return 0;
}