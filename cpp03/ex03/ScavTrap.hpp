/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:13:19 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/08 16:12:54 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();

	ScavTrap &	operator=(ScavTrap const &obj);
	void	guardGate(void);

	protected :

	ScavTrap(void);

};

#endif