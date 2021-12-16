/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 16:31:13 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	/**********************OK***********************/
	Bureaucrat	jack = Bureaucrat("Jack", 1);
	Form		vaccin = Form("Vaccin", 'A', 'A');

	std::cout << jack << std::endl;
	std::cout << vaccin << std::endl;
	try
	{
		++jack;
		std::cout << jack << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	/**********************OK***********************/
	Bureaucrat	sylvie = Bureaucrat("Sylvie", 112);
	Form		windows = Form("Windows", 'B', 'A');
	Form		lunettes = Form("lunettes", 'C', 'B');

	std::cout << sylvie << std::endl;
	try
	{
		--sylvie;
		std::cout << sylvie << std::endl;
		--sylvie;
		std::cout << sylvie << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}