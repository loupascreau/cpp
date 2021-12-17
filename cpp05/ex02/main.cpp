/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 10:54:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	Bureaucrat	jack = Bureaucrat("Jack", 1);
	Bureaucrat	Sylvie = Bureaucrat("Sylvie", 51);
	Bureaucrat	tim = Bureaucrat("Tim", 132);

	Form		*form = NULL;

	try
	{
		form = new ShrubberyCreationForm("28A");

		form->beSigned(tim);
		form->execute(tim);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		delete form;
	}
	return 0;
}