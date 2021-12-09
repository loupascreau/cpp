/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:26:29 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/09 15:13:36 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
	
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &obj);
	virtual ~FragTrap();

	FragTrap &	operator=(FragTrap const &obj);

	void	highFivesGuys(void);

	protected :

	int		setHitPoints(void);
	int		setAttackDamage(void);

	private :

	int		_myHitPoints;
	int		_myAttackDamage;
};

#endif