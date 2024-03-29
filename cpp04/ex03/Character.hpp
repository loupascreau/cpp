/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:33:10 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 12:27:24 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
	
	Character();
	Character(std::string name);
	Character(Character const &obj);
	~Character();

	Character &	operator=(Character const &obj);

	std::string const 	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
	
	private :

	std::string _name;
	AMateria	*_amateria[4];
	static int	_i;
	int			_equiped;
};

#endif