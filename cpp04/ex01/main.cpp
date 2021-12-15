/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 11:56:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define		NBR		8

int		main(void)
{
	const Animal	*animal[NBR];
	Brain			*brain;
	int				i;
	
	/*Creating all animals*/
	i = 0;
	while (i < NBR)
	{
		std::cout << "Nbr " << i << " Creation :" << std::endl;
		if (i % 2 == 0)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		i++;
	}
	/*Calling them to make tha appropriate sound*/
	i = 0;
	while (i < NBR)
	{
		std::cout << "Nbr " << i << " = ";
		animal[i]->makeSound();
		i++;
	}
	
	/*Set a brain from the first animal*/
	brain = animal[NBR - 1]->getBrain();
	brain->setType(animal[NBR - 1]->getType());
	brain->setIdeas("I would like to eat chocolate", 5);
	brain->setIdeas("Dreaming is a good idea", 42);
	std::cout << brain->getIdeas(5) << std::endl;
	std::cout << brain->getIdeas(42) << std::endl;
	/*Set a brain from the second animal*/
	brain = animal[NBR - 2]->getBrain();
	brain->setType(animal[NBR - 2]->getType());
	brain->setIdeas("Just do it", 74);
	brain->setIdeas("Take a plane", 12);
	std::cout << brain->getIdeas(74) << std::endl;
	std::cout << brain->getIdeas(12) << std::endl;
	
	/*delete all animals*/
	i = 0;
	while (i < NBR)
	{
		std::cout << "Nbr " << i << " Deletion :" << std::endl;
		delete animal[i];
		i++;
	}
	
	return 0;
}