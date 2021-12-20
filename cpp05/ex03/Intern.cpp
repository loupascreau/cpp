/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:02:53 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/20 10:04:36 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << "Intern called" << std::endl;
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
	return ;
}

Intern &	Intern::operator=(Intern const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

Form		*Intern::makeForm(std::string formName, std::string target)
{
	std::string		formTab[3];
	Form			*form[3];
	int				i;
	int				tmp;

	formTab[0] = "shrubbery creation";
	formTab[1] = "robotomy request";
	formTab[2] = "presidential pardon";

	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	
	i = 0;
	while (i < 3)
	{
		if (formName == formTab[i])
			break ;
		delete form[i];
		i++;
	}
	tmp = i;
	if (i == 3)
	{
		std::cout << BLUE << "[ FORM CREATION ] " << WHITE;
		std::cout << "Failure - You ask for an Unknown Form !" << std::endl;
		return NULL;
	}
	i++;
	while (i < 3)
	{
		delete form[i];
		i++;
	}
	std::cout << BLUE << "[ FORM CREATION ] " << WHITE;
	std::cout << "Intern creates " << target << std::endl;
	return form[tmp];
}

Intern::~Intern()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE;
	std::cout << "Intern called" << std::endl;
}