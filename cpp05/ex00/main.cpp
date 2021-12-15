/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 15:46:20 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	secretary("secretary", 2);
	Bureaucrat	expert("expert", 142);

	std::cout << "name = " << secretary.getName() << " | grade = " << secretary.getGrade() << std::endl;
	std::cout << "name = " << expert.getName() << "    | grade = " << expert.getGrade() << std::endl;
	
	--secretary;
	++expert;

	std::cout << "name = " << secretary.getName() << " | grade = " << secretary.getGrade() << std::endl;
	std::cout << "name = " << expert.getName() << "    | grade = " << expert.getGrade() << std::endl;
	return 0;
}