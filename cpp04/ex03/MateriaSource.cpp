/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:10:41 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 12:09:31 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int	MateriaSource::_i = 0;

MateriaSource::MateriaSource()
{
	std::cout << "Constructor MateriaSource called" << std::endl;
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
	if (_i == 4)
		std::cout << "Already 4 Materia in memory" << std::endl;
	else
	{
		this->_amateria[_i] = toCopy;
		_i += 1;
	}
}

/*AMateria	*MateriaSource::createMateria(std::string const &type)
{
	
}*/

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
	std::cout << "Destructor MateriaSource called" << std::endl;
}