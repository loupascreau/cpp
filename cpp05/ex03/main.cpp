/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 16:05:05 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	jack = Bureaucrat("Jack", 12);
	Intern		intern;

	std::cout << std::endl;
	Form		*form = NULL;

	/*****************form invalid*****************/
	form = intern.makeForm("jshd", "T12");
	if (form != NULL)
	{
		std::cout << *form << std::endl;
		try
		{
			jack.checkGrade();
			jack.signForm(*form);
			jack.executeForm(*form);
			delete form;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
			delete form;	
		}
	}
	std::cout << std::endl;

	/******************presidential form****************/
	form = intern.makeForm("presidential pardon", "P22");
	if (form != NULL)
	{
		std::cout << *form << std::endl;
		try
		{
			jack.checkGrade();
			jack.signForm(*form);
			jack.executeForm(*form);
			delete form;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
			delete form;	
		}
	}
	std::cout << std::endl;
	
	/******************Shrubbery form******************/
	form = intern.makeForm("shrubbery creation", "B2B");
	if (form != NULL)
	{
		std::cout << *form << std::endl;
		try
		{
			jack.checkGrade();
			jack.signForm(*form);
			jack.executeForm(*form);
			delete form;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
			delete form;	
		}
	}
	
	std::cout << std::endl;
	return 0;
}