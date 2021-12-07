/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:05:41 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/07 09:55:59 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::_nbrBits = 8;

Fixed::Fixed(int const integer)
{
	this->_fixedPoint = integer << _nbrBits;
}

Fixed::Fixed(float const floating)
{
	this->_fixedPoint = (int)roundf(floating * (float)(1 << _nbrBits));
}

Fixed::Fixed(Fixed const &obj)
{
	*this = obj;
	return ;
}

Fixed::Fixed(void) : _fixedPoint(0)
{

}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const &rhs)
{
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return this->toFloat() + rhs.toFloat();
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return this->toFloat() - rhs.toFloat();
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return this->toFloat() * rhs.toFloat();
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return this->toFloat() / rhs.toFloat();
}

Fixed &	Fixed::operator++(void)
{
	this->_fixedPoint++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	result(*this);

	++(*this);
	return (result);
}

Fixed &	Fixed::operator--(void)
{
	this->_fixedPoint--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	result(*this);

	--(*this);
	return (result);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
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
	
}

std::ostream &	operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return o;
}