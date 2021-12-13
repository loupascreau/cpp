/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:31:36 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 16:00:38 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Constructor Ice called" << std::endl;
}

Ice::Ice(Ice const &obj) : AMateria()
{
	*this = obj;
	return ;
}

Ice &	Ice::operator=(Ice const &obj)
{
	this->_type = obj.getType();
	return *this;
}

AMateria	*Ice::clone(void) const
{
	return this->_amateria;
}

Ice::~Ice()
{
	std::cout << "Destructor Ice called" << std::endl;
}