/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:35:01 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 16:28:10 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	public :

	Form();
	Form(std::string name, char gradeSign, char gradeExec);
	Form(Form const &obj);
	~Form();

	Form &	operator=(Form const &obj);

	std::string const	getName(void) const;
	bool				getSigned(void) const;
	char				getGrade(void) const;

	private :

	std::string const	_name;
	bool				_signed;
	char const			_gradeSign;
	char const			_gradeExec;
};

std::ostream &	operator<<(std::ostream &o, Form const &obj);

#endif