/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:47:51 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/17 12:49:09 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public :

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &obj);
	~PresidentialPardonForm();

	PresidentialPardonForm &	operator=(PresidentialPardonForm const &obj);

	std::string	getTarget(void) const;

	void		execute(Bureaucrat const & executor) const;

	private :

	std::string		_target;
};

#endif