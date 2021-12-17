/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:46:00 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 13:03:34 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("")
{
	std::cout << "Default Constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << this->_target << " ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	*this = obj;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	this->_target = obj.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string	tmp;
	char		newFileName[1024];
	
	tmp = this->_target + "_shrubbery";
	tmp.copy(newFileName, tmp.size() + 1);
	newFileName[tmp.size()] = '\0';
	try
	{
		if (executor.getGrade() > this->getGradeToExec())
			throw GradeTooLowException();
		if (this->getSigned() == false)
			throw GradeTooHighException();
		std::cout << executor.getName() << " executs " << this->_target << std::endl;
		std::ofstream	newFile;		
		newFile.open(newFileName);
		if (newFile.is_open())
		{
			newFile << "        #####                           #####" << std::endl;
			newFile << "    #############                   #############" << std::endl;
			newFile << "#####################           ####################" << std::endl;
			newFile << "#####################           ####################" << std::endl;
			newFile << "    #############                   #############" << std::endl;
			newFile << "        #####                           #####" << std::endl;
			newFile << "         **                              **" << std::endl;
			newFile << "         **                              **" << std::endl;
			newFile << "         **                              **" << std::endl;
			newFile << "         **                              **" << std::endl;
			newFile << "         **                             ****" << std::endl;
			newFile << "         **" << std::endl;
			newFile << "        ****" << std::endl;
			newFile.close();
		}
	}
	catch (std::exception & e)
	{
		std::cout << executor.getName() << " cannot executs " << this->_target << " because " << e.what() << std::endl;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE;
	std::cout << this->_target << " ShrubberyCreationForm called" << std::endl;
}