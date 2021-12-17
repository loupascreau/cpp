/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:48:17 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 13:03:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("")
{
	std::cout << "Default Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << this->_target << " PresidentialPardonForm called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	*this = obj;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	this->_target = obj.getTarget();
	return *this;
}

std::string					PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void						PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > this->getGradeToExec())
			throw GradeTooLowException();
		if (this->getSigned() == false)
			throw GradeTooHighException();
		std::cout << executor.getName() << " executs " << this->_target << " | ";
		std::cout << this->_target << " has been forgiven by Zafod Beeblebrox !" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << executor.getName() << " cannot executs " << this->_target << " because " << e.what() << std::endl;
	}
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE;
	std::cout << this->_target << " PresidentialPardonForm called" << std::endl;
}