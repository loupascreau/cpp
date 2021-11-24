/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:57:37 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/24 15:28:57 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	std::string string;
	PhoneBook	contact[8];
	int			i;
	
	i = 0;
	while (1)
	{
		std::cout << YELLOW << "$>" << WHITE;
		std::cin >> string;
		if (string.compare("EXIT") == 0 && string.length() == 4)
			break ;
		else if (string.compare("ADD") == 0 && string.length() == 3)
		{
			if (i == 8)
				toMuchContacts(contact, 0);
			else
			{
				fillContactInfos(contact[i]);
				i++;
			}
		}
		else if (string.compare("SEARCH") == 0 && string.length() == 6)
			searchContact(contact, 0);
	}
	return 0;
}