/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 16:05:03 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int		main(void)
{
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();
	
	std::cout << "type is " << ice->getType() << std::endl;
	std::cout << "type is " << cure->getType() << std::endl;

//	ice = ice->clone();

	delete	ice;
	delete	cure;
	return 0;
}