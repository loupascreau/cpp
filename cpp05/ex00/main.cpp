/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 14:17:19 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	/**********************OK***********************/
	Bureaucrat	jack = Bureaucrat("Jack", 42);

	std::cout << jack << std::endl;
	try
	{
		++jack;
		std::cout << jack << std::endl;
		++jack;
		std::cout << jack << std::endl;
		--jack;
		std::cout << jack << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	/**********************OK***********************/
	Bureaucrat	sylvie = Bureaucrat("Sylvie", 112);

	std::cout << sylvie << std::endl;
	try
	{
		--sylvie;
		std::cout << sylvie << std::endl;
		--sylvie;
		std::cout << sylvie << std::endl;
		++sylvie;
		std::cout << sylvie << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	/********************EXCEPTION**********************/
	Bureaucrat	tim = Bureaucrat("Tim", 1);

	std::cout << tim << std::endl;
	try
	{
		++tim;
		std::cout << tim << std::endl;
		--tim;
		std::cout << tim << std::endl;
		--tim;
		std::cout << tim << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	/********************EXCEPTION**********************/
	Bureaucrat	Bobby = Bureaucrat("Bobby", 150);

	std::cout << Bobby << std::endl;
	try
	{
		--Bobby;
		std::cout << Bobby << std::endl;
		++Bobby;
		std::cout << Bobby << std::endl;
		++Bobby;
		std::cout << Bobby << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}