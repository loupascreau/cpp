/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:00:27 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/30 15:40:00 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

PhoneBook::PhoneBook()
{
	
}

Contact	PhoneBook::getContact(int index) const
{
	return this->_contact[index];
}

void	PhoneBook::setContact(int index)
{
	std::string	buffer;

	std::cout << BLUE << "First name : " << WHITE;
	std::cin >> buffer;
	this->_contact[index].setFirstName(buffer);
	std::cout << BLUE << "Last name : " << WHITE;
	std::cin >> buffer;
	this->_contact[index].setLastName(buffer);
	std::cout << BLUE << "Nickname : " << WHITE;
	std::cin >> buffer;
	this->_contact[index].setNickname(buffer);
	while (1)
	{
		std::cout << BLUE << "Phone number : " << WHITE;
		std::cin >> buffer;
		this->_contact[index].setPhoneNumber(buffer);
		if (isCorrectNumber(buffer))
			break ;
		else
			std::cout << RED << "!" << WHITE << " Your phone number should contain only int " \
			<< RED << "!" << WHITE << std::endl;
	}
	std::cout << BLUE << "Darkest secret : " << WHITE;
	std::cin >> buffer;
	this->_contact[index].setDarkestSecret(buffer);
}

PhoneBook::~PhoneBook()
{
	
}