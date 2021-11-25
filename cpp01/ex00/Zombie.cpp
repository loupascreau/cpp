/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:21:28 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/25 16:36:51 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() :
{
	std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destructor called" << std::endl;
}