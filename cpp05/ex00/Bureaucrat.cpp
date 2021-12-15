/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:03:42 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 15:58:12 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(1)
{
	std::cout << "Default Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
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
	std::cout << this->getName() << " incremented" << std::endl;
	this->_grade--;
	return *this;
}

Bureaucrat &	Bureaucrat::operator--(void)
{
	std::cout << this->getName() << " decremented" << std::endl;
	this->_grade++;
	return *this;
}

class			Bureaucrat::GradeTooHighException : public std::exception
{
	virtual const char* what() const throw()
	{
		return "[ EXCEPTION ] Grade too high !";
	}
}

class			Bureaucrat::GradeTooLowException : public std::exception
{
	virtual const char* what() const throw()
	{
		return "[ EXCEPTION ] Grade too low !";
	}
}

std::string const	Bureaucrat::getName(void) const
{
	return this->_name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	
	return o;
}