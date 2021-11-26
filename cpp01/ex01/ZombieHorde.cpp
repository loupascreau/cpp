/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:46:38 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 15:01:15 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie	*zombieHorde(int N, std::string name)
{
	int		i;
	
	i = 0;
	Zombie	*horde = new Zombie[N];
	while (i < N)
	{
		horde[i].newZombie(name);
		horde[i].announce();
		i++;
	}
	return horde;
}