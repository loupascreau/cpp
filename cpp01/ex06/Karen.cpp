/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:02:57 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/02 12:23:27 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) : _index(0)
{
	
}

void	Karen::setIndex(std::string str)
{
	this->_messages[0] = "debug";
	this->_messages[1] = "info";
	this->_messages[2] = "warning";
	this->_messages[3] = "error";

	while (this->_index < 4)
	{
		if (str == this->_messages[this->_index])
			break ;
		this->_index++;
	}
}

void	Karen::getIndex(std::string str, Karen &karen) const
{
	switch (this->_index)
	{
		case 0:
			karen.complain(str);
			break ;
		case 1:
			karen.complain(str);
			break ;
		case 2:
			karen.complain(str);
			break ;
		case 3:
			karen.complain(str);
			break ;
		default:
			std::cout << YELLOW << "[ Probably complaining about insignificant problems ]" << WHITE << std::endl;
			std::cout << std::endl;
			break ;
	}
}

void	Karen::debug(void)
{
	std::cout << YELLOW << "[ DEBUG ]" << WHITE << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
	std::cout << std::endl;
	this->info();
}

void	Karen::info(void)
{
	std::cout << YELLOW << "[ INFO ]" << WHITE << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money" << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	this->warning();
}

void	Karen::warning(void)
{
	std::cout << YELLOW << "[ WARNING ]" << WHITE << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	this->error();
}

void	Karen::error(void)
{
	std::cout << YELLOW << "[ ERROR ]" << WHITE << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	tabLevel[4];
	void		(Karen::*complain[4])();
	int			i;

	tabLevel[0] = "debug";
	tabLevel[1] = "info";
	tabLevel[2] = "warning";
	tabLevel[3] = "error";
	
	complain[0] = &Karen::debug;
	complain[1] = &Karen::info;
	complain[2] = &Karen::warning;
	complain[3] = &Karen::error;
	
	i = 0;
	while(i < 4)
	{
		if (level == tabLevel[i])
			(this->*complain[i])();
		i++;
	}
}

Karen::~Karen(void)
{
	
}