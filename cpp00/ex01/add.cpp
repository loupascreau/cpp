/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:57:27 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/24 14:48:02 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		isCorrectNumber(std::string buffer)
{
	int		i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] < '0' || buffer[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

void	fillContactInfos(PhoneBook &contact)
{
	std::string	buffer;

	std::cout << BLUE << "First name : " << WHITE;
	std::cin >> buffer;
	contact.setFirstName(buffer);
	std::cout << BLUE << "Last name : " << WHITE;
	std::cin >> buffer;
	contact.setLastName(buffer);
	std::cout << BLUE << "Nickname : " << WHITE;
	std::cin >> buffer;
	contact.setNickname(buffer);
	while (1)
	{
		std::cout << BLUE << "Phone number : " << WHITE;
		std::cin >> buffer;
		contact.setPhoneNumber(buffer);
		if (isCorrectNumber(buffer))
			break ;
		else
			std::cout << RED << "!" << WHITE << " Your phone number should contain only int " \
			<< RED << "!" << WHITE << std::endl;
	}
	std::cout << BLUE << "Darkest secret : " << WHITE;
	std::cin >> buffer;
	contact.setDarkestSecret(buffer);
}

void	toMuchContacts(PhoneBook *contact, int i)
{
	std::cout << RED << "!" << WHITE << " You have already filled in the 8 available contacts " \
	<< RED << "!" << WHITE << std::endl;
	std::cout << "Choose a number between 0 and 7 to overwrite one of them : ";
	std::cin >> i;
	if (i < 0 || i > 7)
		std::cout << "You entered a wrong number" << std::endl;
	else
		fillContactInfos(contact[i]);
}
