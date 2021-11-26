/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:57:37 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 12:33:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	std::string string;
	PhoneBook	phonebook;
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
				toMuchContacts(&phonebook, 0);
			else
			{
				fillContactInfos(&phonebook.contact[i]);
				i++;
			}
		}
		else if (string.compare("SEARCH") == 0 && string.length() == 6)
			searchContact(&phonebook, 0);
	}
	return 0;
}