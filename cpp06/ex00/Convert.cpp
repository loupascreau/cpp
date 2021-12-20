/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:59:48 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/20 12:12:41 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "Constructor Convert called" << std::endl;
}

Convert::Convert(Convert const &obj)
{
	*this = obj;
	return ;
}

Convert &	Convert::operator=(Convert const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

void		Convert::handleErrors(int argc, char **argv)
{
	if (argc == 1)
		throw MissingArgs();
	else if (argc > 2)
		throw TooManyArgs();
	(void)argv;
}

Convert::~Convert()
{
	std::cout << "Destructor Convert called" << std::endl;
}