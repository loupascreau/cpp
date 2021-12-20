/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:59:48 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/20 15:25:19 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
//	std::cout << "Constructor Convert called" << std::endl;
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

void		Convert::handleErrors(int argc)
{
	if (argc == 1)
		throw MissingArgs();
	else if (argc > 2)
		throw TooManyArgs();
}

void		Convert::isChar(char *string)
{
	double	n;

	n = std::atof(string);
	std::cout << "char : ";
	if (n < 32 || n > 126)
	{
		if (n == 0 && string[1] != '\0')
			std::cout << "impossible" << std::endl;
		else if (string[0] < 32 || string[0] > 126)
			std::cout << "Non displayble" << std::endl;
		else if (string[1] == '\0')
			std::cout << "'" << string[0] << "'" << std::endl;
		else
			std::cout << "Non displayble" << std::endl;
	}
	else if (n >= 32 && n <= 126)
		std::cout << "'" << static_cast<char>(n) << "'" << std::endl;
	else if (string[1] != '\0')
		std::cout << "impossible" << std::endl;
}

void		Convert::isInt(char *string)
{
	double	n;

	std::cout << "int : ";
	n = std::atof(string);
	if (n == 0 && string[1] != '\0')
		std::cout << "impossible" << std::endl;
	else if (n == 0 && string[0] != '0')
		std::cout << static_cast<int>(string[0]) << std::endl;
	else
		std::cout << n << std::endl;
}

void		Convert::isFloat(char *string)
{
	double	n;

	n = std::atof(string);
	std::cout << "float : " << n << std::endl;
}

void		Convert::isDouble(char *string)
{
	double	n;

	n = std::atof(string);
	std::cout << "double : " << n << std::endl;
}

void		Convert::setType(char *string)
{
	void	(Convert::*type[4])(char *string);
	int		i;

	type[0] = &Convert::isChar;
	type[1] = &Convert::isInt;
	type[2] = &Convert::isFloat;
	type[3] = &Convert::isDouble;

	i = 0;
	while (i < 4)
	{
		(this->*type[i])(string);
		i++;
	}
}

Convert::~Convert()
{
//	std::cout << "Destructor Convert called" << std::endl;
}