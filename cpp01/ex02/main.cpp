/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:09:01 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 15:42:10 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define	WHITE	"\033[0m"
#define	YELLOW	"\033[0;33m"

int		main(void)
{
	std::string	string = "HI THIS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << YELLOW << "Address of the initiale string	  -> " << WHITE << "&string    = " << &string << std::endl;
	std::cout << YELLOW << "Address from the string pointeur  -> " << WHITE << "stringPTR  = " << stringPTR << std::endl;
	std::cout << YELLOW << "Address from the string reference -> " << WHITE << "&stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << YELLOW << "Displaying the string content from string pointeur  -> " << WHITE << "*stringPTR = " << *stringPTR << std::endl;
	std::cout << YELLOW << "Displaying the string content from string reference -> " << WHITE << "stringREF  = " << stringREF << std::endl;
	return 0;
}