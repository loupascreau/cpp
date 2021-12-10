/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/10 10:46:00 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int		main(void)
{
	A	a;
	B	b;
	A	*pa = &b;
	A	&ra = b;

	std::cout << "//Affiche A" << std::endl;
	a.fonction1();
	a.fonction2();

	std::cout << "//Affiche B" << std::endl;
	b.fonction1();
	b.fonction2();

	std::cout << "//Copie de B dans A non polymorphe" << std::endl;
	a = b;
	a.fonction1();
	a.fonction2();

	std::cout << "//polymorphe de B dans A par pointeur" << std::endl;
	pa->fonction1();
	pa->fonction2();

	std::cout << "//polymorphe de B dans A par reference" << std::endl;
	ra.fonction1();
	ra.fonction2();
	return 0;
}