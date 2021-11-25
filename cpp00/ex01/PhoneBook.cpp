/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:00:27 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/25 10:00:04 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

PhoneBook::PhoneBook() : m_firstName(""), m_lastName(""), m_nickname(""), m_phoneNbr(""), m_darkSecret("")
{
//	std::cout << "constructeur called" << std::endl;
}

std::string	PhoneBook::getFirstName(void) const
{
	return this->m_firstName;
}

std::string	PhoneBook::getLastName(void) const
{
	return this->m_lastName;
}

std::string	PhoneBook::getNickname(void) const
{
	return this->m_nickname;
}

std::string	PhoneBook::getPhoneNumber(void) const
{
	return this->m_phoneNbr;
}

std::string	PhoneBook::getDarkestSecret(void) const
{
	return this->m_darkSecret;
}

void	PhoneBook::setFirstName(std::string firstName)
{
	this->m_firstName = firstName;
}

void	PhoneBook::setLastName(std::string lastName)
{
	this->m_lastName = lastName;
}

void	PhoneBook::setNickname(std::string nickname)
{
	this->m_nickname = nickname;
}

void	PhoneBook::setPhoneNumber(std::string phoneNbr)
{
	this->m_phoneNbr = phoneNbr;
}

void	PhoneBook::setDarkestSecret(std::string darkSecret)
{
	this->m_darkSecret = darkSecret;
}

PhoneBook::~PhoneBook()
{
/*	std::cout << "destructeur called" << std::endl;
	std::cout << "first name = " << this->m_firstName << std::endl;
	std::cout << "last name = " << this->m_lastName << std::endl;
	std::cout << "Nickname = " << this->m_nickname << std::endl;
	std::cout << "Phone number = " << this->m_phoneNbr << std::endl;
	std::cout << "Darkest secret = " << this->m_darkSecret << std::endl;
	std::cout << std::endl;*/
}