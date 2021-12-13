/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:20:55 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 15:18:52 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(Dog const &obj) : Animal()
{
	*this = obj;
	return ;
}

Dog	&	Dog::operator=(Dog const &obj)
{
	this->_type = obj.getType();
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "[ " << this->_type << " ] : Wwoouaaafff WWoouaf Wouaafff !!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}