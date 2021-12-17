/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:45:58 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 11:07:08 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <ostream>
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public :

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &obj);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &obj);

	std::string	getTarget(void) const;

	void		execute(Bureaucrat const & executor) const;

	private :

	std::string		_target;
};

#endif