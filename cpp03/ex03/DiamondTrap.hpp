/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:57:58 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/09 15:22:29 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &obj);
	virtual ~DiamondTrap();

	DiamondTrap &	operator=(DiamondTrap const &obj);

	void	attack(std::string const &target);
	void	whoAmI(void);

	private :

	std::string	_name;
};

#endif