/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:05:41 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/03 16:18:57 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::_nbrBits = 8;

Fixed::Fixed(int const integer)
{
	std::cout << "Int contructor called" << std::endl;
	this->_fixedPoint = integer << _nbrBits;
}

Fixed::Fixed(float const floating)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = (int)roundf(floating * (float)(1 << _nbrBits));
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixedPoint / (float)(1 << _nbrBits);
}

int		Fixed::toInt(void) const
{
	return this->_fixedPoint >> _nbrBits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
}

std::ostream &	operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return o;
}