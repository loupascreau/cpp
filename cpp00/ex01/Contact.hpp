/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:38:04 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/30 15:43:03 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public :

	Contact(void);
	~Contact(void);	

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
	
	void		setFirstName(std::string firstName);
	void		setLastName(std::string lastName);
	void		setNickname(std::string nickname);
	void		setPhoneNumber(std::string phoneNbr);
	void		setDarkestSecret(std::string darkSecret);

	private :

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string	m_phoneNbr;
	std::string	m_darkSecret;
};

#endif