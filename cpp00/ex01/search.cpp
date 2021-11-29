/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:25:26 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 17:41:00 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	truncateStringToLong(std::string str)
{
	str[9] = '.';
	str.erase(10);
	std::cout << std::setw(10) << str << "|";
}

void	printIndexContact(int index, PhoneBook *phonebook)
{
	std::cout << std::endl;
	std::cout << BLUE << "First name --> " << WHITE;
	std::cout << phonebook->getContact(index).getFirstName() << std::endl;
	std::cout << BLUE << "Last name --> " << WHITE;
	std::cout << phonebook->getContact(index).getLastName() << std::endl;
	std::cout << BLUE << "Nickname --> " << WHITE;
	std::cout << phonebook->getContact(index).getNickname() << std::endl;
	std::cout << BLUE << "Phone number --> " << WHITE;
	std::cout << phonebook->getContact(index).getPhoneNumber() << std::endl;
	std::cout << BLUE << "Darkest secret --> " << WHITE;
	std::cout << phonebook->getContact(index).getDarkestSecret() << std::endl;
}

void	chooseIndex(PhoneBook *phonebook, int i)
{
	std::string	index;
	
	if (i == 0)
	{
		std::cout << RED << "! " << WHITE << "You don't have any contacts to search" << RED << " !" << WHITE << std::endl;
		return ;
	}
	std::cout << "Choose an index number to see full contact informations : ";
	std::cin >> index;
	if (index.length() == 1 && i > 0 && index[0] >= '0' && index[0] - 48 < i)
		printIndexContact(index[0] - 48, phonebook);
	else
	{
		index = -1;
		std::cout << RED << "!" << WHITE << " Problem with your input, there is no index for this input " << RED << "!" << WHITE << std::endl;
		return ;
	}
}

void	searchContact(PhoneBook *phonebook, int i)
{
	while (phonebook->getContact(i).getFirstName() != "" && i < 7)
	{
		std::cout << std::setw(10) << i << "|";
		if (phonebook->getContact(i).getFirstName().length() > 10)
			truncateStringToLong(phonebook->getContact(i).getFirstName());
		else
			std::cout << std::setw(10) << phonebook->getContact(i).getFirstName() << "|";
		if (phonebook->getContact(i).getLastName().length() > 10)
			truncateStringToLong(phonebook->getContact(i).getLastName());
		else
			std::cout << std::setw(10) << phonebook->getContact(i).getLastName() << "|";
		if (phonebook->getContact(i).getNickname().length() > 10)
			truncateStringToLong(phonebook->getContact(i).getNickname());
		else
			std::cout << std::setw(10) << phonebook->getContact(i).getNickname() << "|";
		std::cout << std::endl;
		i++;
	}
	chooseIndex(phonebook, i);
}