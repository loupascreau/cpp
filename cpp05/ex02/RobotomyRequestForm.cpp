/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:02:36 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 13:03:29 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("")
{
	std::cout << "Default Constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << this->_target << " RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	this->_target = obj.getTarget();
	return *this;
}

std::string				RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::srand(std::time(NULL));
	int		randNbr;
	
	try
	{
		if (executor.getGrade() > this->getGradeToExec())
			throw GradeTooLowException();
		if (this->getSigned() == false)
			throw GradeTooHighException();
		randNbr = rand() % 2;
		std::cout << executor.getName() << " executs " << this->_target << " | ";
		if (randNbr == 1)
			std::cout << "**Bruits de perceuse** " << this->_target << " has been robotomized !" << std::endl;
		else
			std::cout << "**Failure** " << this->_target << " hasn't been robotomized !" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << executor.getName() << " cannot executs " << this->_target << " because " << e.what() << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE;
	std::cout << this->_target << " RobotomyRequestForm called" << std::endl;
}