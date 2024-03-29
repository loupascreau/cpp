/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:26:29 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/10 15:34:51 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
	
	FragTrap(std::string name);
	FragTrap(FragTrap const &obj);
	~FragTrap();

	FragTrap &	operator=(FragTrap const &obj);

	void	highFivesGuys(void);
	void	attack(std::string const &target);
};

#endif