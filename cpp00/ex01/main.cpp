/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:57:37 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/23 15:36:40 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	std::string string;
	
	while (1)
	{
		std::cout << "$>";
		std::cin >> string;
		if (string.compare("EXIT") == 0)
			break ;
	}
	return 0;
}