/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:17:32 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 12:47:57 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
			return "[ EXCEPTION ] Grade too high !";
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "[ EXCEPTION ] Grade too low !";
		}
	};

	std::string const	getName(void) const;
	int					getGrade(void) const;

	private :

	std::string const	_name;
	int					_grade;
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &obj);

#endif