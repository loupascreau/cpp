/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:13:19 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/09 07:55:20 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
	
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &obj);
	virtual ~ScavTrap();

	ScavTrap &	operator=(ScavTrap const &obj);
	void	guardGate(void);

	protected :

	int		setEnergyPoints(void);

	private :

	int		_myEnergyPoints;
};

#endif