/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:12:08 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 11:24:56 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name)
{
	Zombie	player = Zombie(name);

	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << YELLOW << "-> i'm created on the stack from a function, I'll dead if the progam quit this function" << WITHE << std::endl;
	std::cout << RED << "x leaving the " << name << " function x" << WITHE << std::endl;
}