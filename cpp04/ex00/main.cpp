/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 12:10:32 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	std::cout << "Type of class i : " << i->getType() << std::endl;
	std::cout << "Type of class j : " << j->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete j;
	delete i;
	delete meta;

	std::cout << std::endl;
	
	const WrongAnimal	*beta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();

	std::cout << "Type of class k : " << k->getType() << std::endl;
	k->makeSound();
	beta->makeSound();
	
	delete k;
	delete beta;
	
	return 0;
}