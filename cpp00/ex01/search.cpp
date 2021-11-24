/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:25:26 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/24 16:59:23 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	truncateStringToLong(std::string str)
{
	str[9] = '.';
	str.erase(10);
	std::cout << std::setw(10) << str << "|";
}

void	searchContact(PhoneBook *contact, int i)
{
	while (contact[i].getFirstName() != "")
	{
		std::cout << std::setw(10) << i << "|";
		if (contact[i].getFirstName().length() > 10)
			truncateStringToLong(contact[i].getFirstName());
		else
			std::cout << std::setw(10) << contact[i].getFirstName() << "|";
		if (contact[i].getLastName().length() > 10)
			truncateStringToLong(contact[i].getLastName());
		else
			std::cout << std::setw(10) << contact[i].getLastName() << "|";
		if (contact[i].getNickname().length() > 10)
			truncateStringToLong(contact[i].getNickname());
		else
			std::cout << std::setw(10) << contact[i].getNickname() << "|";
		std::cout << std::endl;
		i++;
	}
}