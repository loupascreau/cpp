/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/22 16:41:48 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main(void)
{
	int		a = 42;
	int		b = 10;

	std::cout << "a = " << a << " | b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " | b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	std::cout << "c = " << c << " | d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << " | d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	
	return 0;
}