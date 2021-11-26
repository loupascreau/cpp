/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:44:09 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 11:00:03 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <new>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);
	return zombie;
}