/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:35:30 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 11:34:42 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	std::cout << "Default Constructor Character called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Constructor Character called - (name is set)" << std::endl;
}

Character::Character(Character const &obj)
{
	*this = obj;
	return ;
}

Character &	Character::operator=(Character const &obj)
{
	this->_name = obj.getName();
	return *this;
}

std::string const 	&Character::getName() const
{
	return this->_name;
}

/*void		Character::equip(AMateria *m)
{
	
}

void		Character::unequip(int idx)
{
	
}

void		Character::use(int idx, ICharacter &target)
{
	
}*/

Character::~Character()
{
	std::cout << "Destructor Character called" << std::endl;
}