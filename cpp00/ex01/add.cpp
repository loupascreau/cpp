/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:57:27 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 17:32:15 by lpascrea         ###   ########.fr       */
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

void	toMuchContacts(PhoneBook *phonebook)
{
	std::string	index;
	
	std::cout << RED << "!" << WHITE << " You have already filled in the 8 available contacts " \
	<< RED << "!" << WHITE << std::endl;
	std::cout << "Choose a number between 0 and 7 to overwrite one of them : ";
	std::cin >> index;
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
		phonebook->setContact(index[0] - 48);
	else
		std::cout << "You entered a wrong number" << std::endl;
}
