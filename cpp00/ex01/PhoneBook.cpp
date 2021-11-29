/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:00:27 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 17:43:09 by lpascrea         ###   ########.fr       */
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

Contact::Contact() : m_firstName(""), m_lastName(""), m_nickname(""), m_phoneNbr(""), m_darkSecret("")
{
	
}

std::string	Contact::getFirstName(void) const
{
	return this->m_firstName;
}

std::string	Contact::getLastName(void) const
{
	return this->m_lastName;
}

std::string	Contact::getNickname(void) const
{
	return this->m_nickname;
}

std::string	Contact::getPhoneNumber(void) const
{
	return this->m_phoneNbr;
}

std::string	Contact::getDarkestSecret(void) const
{
	return this->m_darkSecret;
}

void	Contact::setFirstName(std::string firstName)
{
	this->m_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->m_lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->m_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNbr)
{
	this->m_phoneNbr = phoneNbr;
}

void	Contact::setDarkestSecret(std::string darkSecret)
{
	this->m_darkSecret = darkSecret;
}

Contact::~Contact()
{

}

PhoneBook::~PhoneBook()
{
	
}