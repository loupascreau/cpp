/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:32:17 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 11:37:38 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	*this = obj;
	return ;
}

Animal &	Animal::operator=(Animal const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal is crying !" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}