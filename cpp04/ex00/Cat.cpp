/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:44:56 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/10 14:32:58 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	*this = obj;
	return ;
}

Cat &	Cat::operator=(Cat const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "[ " << this->_type << " ] : Mmiaaouuu MmiaaaoOOuuuu !!" << std::endl; 
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}