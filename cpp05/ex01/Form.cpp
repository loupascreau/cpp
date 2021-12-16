/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:34:59 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 16:25:39 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	std::cout << "Default Constructor Form called" << std::endl;
}

Form::Form(std::string name, char gradeSign, char gradeExec) : _name(name), _signed(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Constructor " << this->_name << " Form called" << std::endl;
}

Form::Form(Form const &obj)
{
	*this = obj;
	return ;
}

Form &	Form::operator=(Form const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

std::string const	Form::getName(void) const
{
	return this->_name;
}

bool				Form::getSigned(void) const
{
	return this->_signed;
}

char				Form::getGrade(void) const
{
	return this->_grade;
}

Form::~Form()
{
	std::cout << "Destructor Form called" << std::endl;
}

std::ostream &	operator<<(std::ostream &o, Form const &obj)
{
	o << obj.getName() << " has the grade " << obj.getGrade();
	o << " and the signed status = " << obj.getSigned() << std::endl;
	
	return o;
}