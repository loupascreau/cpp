/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:37:51 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/30 15:40:04 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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