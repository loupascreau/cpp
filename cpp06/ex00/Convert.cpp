/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:59:48 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/22 11:27:03 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _isError(false)
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

void		Convert::isError(int n, char *string)
{
	int		len = 0;

	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n != 0)
		len += log10(n) + 1;
	if (string[len] != '\0' && n != 0)
	{
		if (string[len] != 'f' && string[len] != '.')
			this->_isError = true;
		else if (string[len] == 'f' && string[len + 1] != '\0')
			this->_isError = true;
		else if (string[len] == '.' && (string[len + 1] < '0' || string[len + 1] > '9'))
			this->_isError = true;
		else if (string[len] == '.')
		{
			len++;
			while (string[len] && (string[len] >= '0' && string[len] <= '9'))
				len++;
			if (string[len] != '\0' && string[len] != 'f')
				this->_isError = true;
			if (string[len] == 'f' && string[len + 1] != '\0')
				this->_isError = true;
		}
	}
	if (this->_isError == true)
		std::cout << "impossible" << std::endl;
}

void		Convert::isChar(char *string)
{
	double	n;

	n = std::atof(string);
	std::cout << "char : ";
	if ((string[0] >= '0' && string[0] <= '9') || string[0] == '-')
		this->isError(n, string);
	else if (string[1] != '\0')
	{
		this->_isError = true;
		std::cout << "impossible" << std::endl;
	}
	if (this->_isError == true)
		return ;
	if (n < 32 || n > 126)
	{
		if ((string[0] < 32 || string[0] > 47) && (string[0] < 58 || string[0] > 126))
			std::cout << "Non displayble " << std::endl;
		else if (string[1] == '\0')
			std::cout << "'" << string[0] << "'" << std::endl;
		else
			std::cout << "Non displayble" << std::endl;
	}
	else if ((n >= 32 && n <= 47) || (n >= 58 && n <= 126))
	{
		if (floor(n) == ceil(n))
			std::cout << "'" << static_cast<char>(n) << "'" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else if (string[1] != '\0')
		std::cout << "impossible" << std::endl;
}

void		Convert::isInt(char *string)
{
	double	n;

	std::cout << "int : ";
	n = std::atof(string);
	if ((n == 0 && string[1] != '\0') || (string[0] == 'n' && string[1] == 'a' \
	&& string[2] == 'n') || this->_isError == true)
		std::cout << "impossible" << std::endl;
	else if (n == 0 && string[0] != '0')
		std::cout << static_cast<int>(string[0]) << std::endl;
	else
		std::cout << static_cast<int>(n) << std::endl;
}

void		Convert::isFloat(char *string)
{
	double	n;

	std::cout << "float : ";
	n = std::atof(string);
	if ((n == 0 && string[1] != '\0') || (string[0] == 'n' && string[1] == 'a' \
	&& string[2] == 'n') || this->_isError == true)
		std::cout << "nanf" << std::endl;
	else if (n == 0 && string[0] != '0')
		std::cout << static_cast<float>(string[0]) << ".0f" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
}

void		Convert::isDouble(char *string)
{
	double	n;

	std::cout << "double : ";
	n = std::atof(string);
	if ((n == 0 && string[1] != '\0') || (string[0] == 'n' && string[1] == 'a' \
	&& string[2] == 'n') || this->_isError == true)
		std::cout << "nan" << std::endl;
	else if (n == 0 && string[0] != '0')
		std::cout << static_cast<float>(string[0]) << ".0" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(n) << std::endl;
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