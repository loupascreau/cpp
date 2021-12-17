/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:02:34 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 12:31:45 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public :

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &obj);
	~RobotomyRequestForm();

	RobotomyRequestForm &	operator=(RobotomyRequestForm const &obj);

	std::string	getTarget(void) const;

	void		execute(Bureaucrat const & executor) const;

	private :

	std::string		_target;
};

#endif