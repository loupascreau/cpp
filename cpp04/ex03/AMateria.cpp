/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:06:14 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 12:15:52 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	std::cout << "Default constructor AMateria called" << std::endl;
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

/*void		AMateria::use(ICharacter &target)
{
	
}*/

AMateria::~AMateria()
{
	
	std::cout << "Destructor AMateria called, my type was " << this->_type << std::endl;
}