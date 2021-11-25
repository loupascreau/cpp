/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:20:56 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/25 16:38:36 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public :
	
	Zombie(void);
	~Zombie(void);

	announce(void);

	private :

	std::string	_zombieOne;
	std::string	_zombieTwo;
	std::string	_zombieThree;
};

#endif