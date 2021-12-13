/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:44:56 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 15:20:52 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal()
{
	*this = obj;
	return ;
}

Cat &	Cat::operator=(Cat const &obj)
{
	this->_type = obj.getType();
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "[ " << this->_type << " ] : Mmiaaouuu MmiaaaoOOuuuu !!" << std::endl; 
}

Brain	*Cat::getBrain(void) const
{
	return this->_brain;
}

std::string	Cat::getType(void) const
{
	return this->_type;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor Cat called" << std::endl;
}