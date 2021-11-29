/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:05:08 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 10:27:43 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public :
	
	HumanB(std::string name);
	~HumanB();	

	void	setWeapon(Weapon Weapon);
	void	attack(void) const;
	
	private :

	Weapon		*_weaponPTR;
	std::string	_name;
};

#endif