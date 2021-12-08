/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:54:03 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 15:21:54 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

# define	YELLOW	"\033[0;33m"
# define	WHITE	"\033[0m"
# define	RED		"\033[0;31m"

class ClapTrap
{
	public :

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &obj);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const &obj);

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int			getAttackDamage(void) const;
	int			getEnergyPoints(void) const;
	std::string	getName(void) const;
	
	protected :	

	ClapTrap(void);
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif