/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:54:38 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 12:05:21 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	*this = obj;
	return ;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &obj)
{
	this->_type = obj.getType();
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal is crying !" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}