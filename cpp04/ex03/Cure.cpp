/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:37:58 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 15:42:00 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE << "Constructor Cure called" << std::endl;
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

void		Cure::use(ICharacter &target)
{
	std::cout << this->getType() << ": * shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}

Cure::~Cure()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE << "Destructor Cure called" << std::endl;
}