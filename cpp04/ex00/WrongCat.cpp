/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:52:48 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 12:10:05 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal()
{
	*this = obj;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const &obj)
{
	this->_type = obj.getType();
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "[ " << this->_type << " ] : Mmiaaouuu MmiaaaoOOuuuu !!" << std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}