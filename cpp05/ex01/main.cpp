/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 09:34:32 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	/**********************OK***********************/
	Bureaucrat	jack = Bureaucrat("Jack", 1);
	Form		vaccin = Form("Vaccin", 39, 22);

	std::cout << jack << std::endl;
	std::cout << vaccin << std::endl;
	jack.signForm(vaccin);
	std::cout << std::endl;

	/**********************OK***********************/
	Bureaucrat	tim = Bureaucrat("tim", 112);
	Form		windows = Form("Windows", 130, 103);
	Form		lunettes = Form("lunettes", 92, 111);

	std::cout << tim << std::endl;
	std::cout << windows << std::endl;
	std::cout << lunettes << std::endl;
	tim.signForm(windows);
	tim.signForm(lunettes);
	std::cout << std::endl;

	return 0;
}