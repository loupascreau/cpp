/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:35:30 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 16:00:23 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	Character::_i = 0;

Character::Character() : _name("")
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE << "Default Constructor Character called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE << "Constructor Character called, my name is " << this->_name << std::endl;
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

void		Character::equip(AMateria *m)
{
	std::cout << BLUE << "[ EQUIP ] " << WHITE;
	if (_i == 4)
		std::cout << "Already 4 Materia in memory in character";
	else if (m == 0)
	{
		std::cout << "Unable to equip because the type was unknown";
	}
	else
	{
		this->_amateria[_i] = m;
		std::cout << "idx = " << _i << " -- equiped type = ";
		std::cout << this->_amateria[_i]->getType();
		_i += 1;
	}
	std::cout << std::endl;
}

void		Character::unequip(int idx)
{
	std::cout << BLUE << "[ UNEQUIP ] " << WHITE;
	if (idx >= 0 && idx < _i)
	{
		std::cout << "Unequiped";
		this->_amateria[idx] = 0;
	}
	else
		std::cout << "unequip impossible because your index is not existing";
	std::cout << std::endl;
}

void		Character::use(int idx, ICharacter &target)
{
	std::cout << BLUE << "[ USE ] " << WHITE;
	if ((idx >= 0 && idx < _i) && this->_amateria[idx] != 0)
		this->_amateria[idx]->AMateria::use(target);
	else
		std::cout << "Use impossible because your index is not set" << std::endl;
}

Character::~Character()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE << "Destructor Character called, my name was " << this->_name << std::endl;
}