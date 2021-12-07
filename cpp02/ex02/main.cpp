/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:48:24 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/07 09:54:02 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed		c;
	Fixed const	d(51.32f);
	
	a = Fixed(42);
	c = b;
	
	std::cout << " a " << a << std::endl;
	std::cout << " b " << b << std::endl;
	std::cout << " c " << c << std::endl;
	std::cout << " d " << d << std::endl;
	std::cout << "Comparison operators (a, b) : " << std::endl;
	std::cout << " > " << (a > b) << std::endl;
	std::cout << " < " << (a < b) << std::endl;
	std::cout << ">= " << (a >= b) << std::endl;
	std::cout << "<= " << (a <= b) << std::endl;
	std::cout << "== " << (a == b) << std::endl;
	std::cout << "!= " << (a != b) << std::endl;
	std::cout << "Arithmetic operators (a, b) : " << std::endl;
	std::cout << " + " << (a + b) << std::endl;
	std::cout << " - " << (a - b) << std::endl;
	std::cout << " * " << (a * b) << std::endl;
	std::cout << " / " << (a / b) << std::endl;
	std::cout << "increment / decrement (a) : " << std::endl;
	std::cout << "  a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "  a " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "  a " << a << std::endl;
	std::cout << "--a " << --a << std::endl;
	std::cout << "  a " << a << std::endl;
	std::cout << "a-- " << a-- << std::endl;
	std::cout << "  a " << a << std::endl;
	std::cout << "Functions min and max : " << std::endl;
	std::cout << "min(a, c) " << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) " << Fixed::max(a, c) << std::endl;
	std::cout << "With const value (overload) : " << std::endl;
	std::cout << "min(b, d) " << Fixed::min(b, d) << std::endl;
	std::cout << "max(b, d) " << Fixed::max(b, d) << std::endl;
	return 0;
}