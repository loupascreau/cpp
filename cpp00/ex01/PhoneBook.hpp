/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:00:57 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/30 15:41:29 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	public :
	
	PhoneBook(void);
	~PhoneBook(void);

	Contact	getContact(int index) const;
	void	setContact(int index);
	
	private :
	
	Contact	_contact[8];
};

#endif