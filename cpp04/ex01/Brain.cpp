/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:08:11 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 15:26:57 by lpascrea         ###   ########.fr       */
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
	int		i;

	i = 0;
	this->_type = obj.getType();
	while (i < 100)
	{
		this->_ideas[i] = obj.getIdeas(i);
		i++;
	}
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

std::string	Brain::getType(void) const
{
	return this->_type;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}