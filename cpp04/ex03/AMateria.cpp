/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:06:14 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 15:41:52 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE << "Default constructor AMateria called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "One string parameter constructor AMateria called" << std::endl;
}

AMateria::AMateria(AMateria const &obj)
{
	*this = obj;
	return ;
}

AMateria &	AMateria::operator=(AMateria const &obj)
{
	this->_type = obj.getType();
	return *this;
}

std::string	const	&AMateria::getType(void) const
{
	return this->_type;
}

void		AMateria::use(ICharacter &target)
{
	std::cout << this->getType() << ": * shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
	
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE << "Destructor AMateria called, my type was " << this->_type << std::endl;
}