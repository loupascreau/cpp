/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:08:11 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 12:18:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	*this = obj;
	return ;
}

Brain &	Brain::operator=(Brain const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

void		Brain::initIdeas(void)
{
	int		i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = "";
		i++;
	}
}

void		Brain::setIdeas(std::string idea, int i)
{
	this->_ideas[i] = "\"" + idea + "\"" + " is an Idea from a " + this->_type;
}

std::string	Brain::getIdeas(int i) const
{
	return this->_ideas[i];
}

void	Brain::setType(std::string type)
{
	this->_type = type;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}