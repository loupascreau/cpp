/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:51:19 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 10:44:49 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# define	WHITE	"\033[0m"
# define	YELLOW	"\033[0;33m"
# define	BLUE	"\033[0;96m"
# define	RED		"\033[0;31m"

class Weapon
{
	public :
	
	Weapon(std::string weapon);
	~Weapon();	
	
	std::string	getType() const;
	void		setType(std::string weapon);

	private :
	
	std::string	_weapon;
};

#endif