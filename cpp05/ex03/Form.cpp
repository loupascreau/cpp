/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:34:59 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 15:45:37 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(0), _gradeSign(150), _gradeExec(150)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << "Default Form called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << WHITE;
	std::cout << this->_name << " Form called" << std::endl;
}

Form::Form(Form const &obj) : _gradeSign(150), _gradeExec(150)
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

const int			&Form::getGradeToSign(void) const
{
	return this->_gradeSign;
}

const int			&Form::getGradeToExec(void) const
{
	return this->_gradeExec;
}

void				Form::beSigned(Bureaucrat& obj)
{
	if (this->_gradeSign < 1)
		throw GradeTooHighException();
	else if (this->_gradeSign > 150)
		throw GradeTooLowException();
	else if (obj.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

Form::~Form()
{
	std::cout << RED << "[ DESTRUCTOR ] " << WHITE;
	std::cout << this->_name << " Form called" << std::endl;
}

std::ostream &	operator<<(std::ostream &o, Form const &obj)
{
	o << BLUE << "[ FORM ] " << WHITE;
	o << obj.getName() << " | grade to sign = " << obj.getGradeToSign();
	o << " | grade to execute = " << obj.getGradeToExec();
	o << " | signed status = " << obj.getSigned();
	
	return o;
}