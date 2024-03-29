/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:20:56 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/26 11:23:35 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define YELLOW	"\033[0;33m"
# define WITHE	"\033[0m"
# define RED	"\033[0;31m"

class Zombie
{
	public :

	Zombie(std::string name);
	~Zombie();

	void	announce(void);

	private :

	std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif