/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/20 09:58:33 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	jack = Bureaucrat("Jack", 1);
	Bureaucrat	sylvie = Bureaucrat("Sylvie", 51);
	Bureaucrat	tim = Bureaucrat("Tim", 147);

	std::cout << std::endl;

	Form		*form = NULL;

	/*******************ShrubberyCreationForm********************/
	try
	{
		tim.checkGrade();
		form = new ShrubberyCreationForm("28A");

		tim.signForm(*form);
		tim.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}
	form = NULL;
	std::cout << std::endl;
	
	/*******************RobotomyRequestForm********************/
	try
	{
		sylvie.checkGrade();
		form = new RobotomyRequestForm("17R");

		sylvie.signForm(*form);
		sylvie.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}
	form = NULL;
	std::cout << std::endl;

	/*******************PresidentialPardonForm********************/
	try
	{
		jack.checkGrade();
		form = new PresidentialPardonForm("32P");

		jack.signForm(*form);
		jack.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}
	form = NULL;
	std::cout << std::endl;
	
	return 0;
}