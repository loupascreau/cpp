/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:35:01 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 18:37:50 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

	Form();
	Form(std::string name, int gradeSign, int gradeExec);
	Form(Form const &obj);
	~Form();

	Form &	operator=(Form const &obj);

	std::string const	getName(void) const;
	bool				getSigned(void) const;
	const int			&getGradeToSign(void) const;
	const int			&getGradeToExec(void) const;

	void				beSigned(Bureaucrat& obj);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Signed grade is too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Signed grade is too low";
		}
	};

	private :

	std::string const	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;
};

std::ostream &	operator<<(std::ostream &o, Form const &obj);

#endif