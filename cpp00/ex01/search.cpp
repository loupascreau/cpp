/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:25:26 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/25 10:08:45 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	truncateStringToLong(std::string str)
{
	str[9] = '.';
	str.erase(10);
	std::cout << std::setw(10) << str << "|";
}

void	printIndexContact(std::string buf, PhoneBook *contact)
{
	std::cout << std::endl;
	std::cout << BLUE << "First name --> " << WHITE;
	std::cout << contact[std::stoi(buf)].getFirstName() << std::endl;
	std::cout << BLUE << "Last name --> " << WHITE;
	std::cout << contact[std::stoi(buf)].getLastName() << std::endl;
	std::cout << BLUE << "Nickname --> " << WHITE;
	std::cout << contact[std::stoi(buf)].getNickname() << std::endl;
	std::cout << BLUE << "Phone number --> " << WHITE;
	std::cout << contact[std::stoi(buf)].getPhoneNumber() << std::endl;
	std::cout << BLUE << "Darkest secret --> " << WHITE;
	std::cout << contact[std::stoi(buf)].getDarkestSecret() << std::endl;
}

void	chooseIndex(PhoneBook *contact, int i)
{
	std::string	buf;
	std::string	index;
	
	index = std::to_string(i);
	while (1)
	{
		std::cout << "Choose an index number to see full contact informations : ";
		std::cin >> buf;
		if (buf.length() == 1 && i > 0 && buf[0] >= '0' && buf[0] < index[0])
			break ;
		else
			std::cout << RED << "!" << WHITE << " Problem with your input, there is no index for this input " << RED << "!" << WHITE << std::endl;
	}
	printIndexContact(buf, contact);
}

void	searchContact(PhoneBook *contact, int i)
{
	while (contact[i].getFirstName() != "" && i < 7)
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
	chooseIndex(contact, i);
}