/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:05:56 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 11:27:25 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int		main(void)
{
    Zombie  avenger = Zombie("Captain America");
    Zombie  *actor = newZombie("Tom Cruise");

    avenger.announce();
    std::cout << YELLOW << "-> i'm from the stack and I'll dead if the progam end" << WITHE << std::endl;
    actor->announce();
    std::cout << YELLOW << "-> i'm allocated on the heap and I'll dead if you free up this allocated space" << WITHE << std::endl;
    randomChump("Lebron James");
    std::cout << RED << "x freeing up allocated space x" << WITHE << std::endl;
    delete actor;
    std::cout << RED << "x leaving the program x" << WITHE << std::endl;
    return 0;
}