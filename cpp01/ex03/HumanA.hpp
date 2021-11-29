/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:04:09 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/29 09:42:11 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public :
	
	HumanA(std::string name, Weapon &Weapon);
	~HumanA();

	void	attack(void) const;

	private :

	Weapon		&_weaponREF;
	std::string	_name;
};

#endif