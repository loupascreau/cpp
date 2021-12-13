/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:37:58 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 16:00:44 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "Constructor Cure called" << std::endl;
}

Cure::Cure(Cure const &obj) : AMateria()
{
	*this = obj;
	return ;
}

Cure &	Cure::operator=(Cure const &obj)
{
	this->_type = obj.getType();
	return *this;
}

AMateria	*Cure::clone(void) const
{
	return this->_amateria;
}

Cure::~Cure()
{
	std::cout << "Destructor Cure called" << std::endl;
}