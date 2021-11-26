/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:46:46 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 15:02:40 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define	WHITE	"\033[0m"
# define	RED		"\033[0;31m"
# define	YELLOW	"\033[0;33m"

class Zombie
{
	public :	

	Zombie();
	~Zombie();

	void	announce(void);
	void	newZombie(std::string name);

	private :

	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif