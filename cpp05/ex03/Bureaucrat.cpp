/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:03:42 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/20 10:19:12 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(1)
{
	std::cout << "Default Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << this->_name << " Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name)
{
	*this = obj;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->_grade = obj.getGrade();
	return *this;
}

Bureaucrat &	Bureaucrat::operator++(void)
{
	std::cout << this->getName() << " incrementation" << std::endl;
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade--;
	return *this;
}

Bureaucrat &	Bureaucrat::operator--(void)
{
	std::cout << this->getName() << " decrementation" << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return *this;
}

std::string const	Bureaucrat::getName(void) const
{
	return this->_name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void				Bureaucrat::checkGrade(void) const
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void				Bureaucrat::signForm(Form &form)
{
	std::cout << YELLOW << "[ SIGNATURE ] " << WHITE;
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName();
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cannot sign because " << e.what();
	}
	std::cout << std::endl;
}

void				Bureaucrat::executeForm(Form const &form)
{
	std::cout << YELLOW << "[ EXECUTING ] " << WHITE;
	form.execute(*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE;
	std::cout << this->_name << " Bureaucrat called" << std::endl;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &obj)
{
	o << BLUE << "[ BUREAUCRAT ] " << WHITE << obj.getName();
	o << " is a bureaucrat with grade " << obj.getGrade();
	
	return o;
}