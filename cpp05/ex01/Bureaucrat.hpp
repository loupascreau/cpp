/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:17:32 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 11:41:23 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

# define	YELLOW	"\033[0;33m"
# define	GREEN	"\033[0;32m"
# define	BLUE	"\033[0;96m"
# define	RED		"\033[0;31m"
# define	WHITE	"\033[0m"

class Form;

class Bureaucrat
{
	public :

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &obj);
	~Bureaucrat();

	Bureaucrat &	operator=(Bureaucrat const &obj);
	Bureaucrat &	operator++(void);
	Bureaucrat &	operator--(void);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "[ BUREAUCRAT EXCEPTION ] Grade too high !";
		}
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "[ BUREAUCRAT EXCEPTION ] Grade too low !";
		}
	};

	std::string const	getName(void) const;
	int					getGrade(void) const;

	void				checkGrade(void) const;
	
	void				signForm(Form &form);

	private :

	std::string const	_name;
	int					_grade;
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &obj);

#endif