/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:31:36 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 15:41:56 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE << "Constructor Ice called" << std::endl;
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

void		Ice::use(ICharacter &target)
{
	std::cout << this->getType() << ": * shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE << "Destructor Ice called" << std::endl;
}