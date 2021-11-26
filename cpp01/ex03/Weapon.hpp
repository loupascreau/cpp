/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:51:19 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 16:31:37 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

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