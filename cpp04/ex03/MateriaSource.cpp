/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:10:41 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 12:41:28 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int	MateriaSource::_i = 0;

MateriaSource::MateriaSource()
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE << "Constructor MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	*this = obj;
	return ;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const &obj)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		this->_amateria[i] = obj.getAmateria(i);
		i++;
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria *toCopy)
{
	std::cout << YELLOW << "[ LEARN MATERIA ] " << WHITE;
	if (_i == 4)
	{
		std::cout << "Already 4 Materia in memory of materia source" << std::endl;
		delete toCopy;
	}
	else
	{
		this->_amateria[_i] = toCopy;
		_i += 1;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int		j;

	j = 0;
	std::cout << YELLOW << "[ CREATE MATERIA ] " << WHITE;
	while (j < _i)
	{
		if (this->_amateria[j]->getType() == type)
		{
			std::cout << "Creating Materia type is " << type << std::endl;
			return this->_amateria[j];
		}
		j++;
	}
	std::cout << "Unable to create a Materia type because the type is unknown" << std::endl;
	return 0;
}

AMateria	*MateriaSource::getAmateria(int i) const
{
	return this->_amateria[i];
}

MateriaSource::~MateriaSource()
{
	int		j;

	j = 0;
	while (j < _i)
	{
		delete this->_amateria[j];
		j++;
	}
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE << "Destructor MateriaSource called" << std::endl;
}