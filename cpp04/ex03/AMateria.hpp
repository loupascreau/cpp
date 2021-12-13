/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:02:53 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 16:04:43 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	public :
	
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &obj);
	virtual ~AMateria();

	AMateria &	operator=(AMateria const &obj);

	std::string const	&getType(void) const;

	virtual AMateria	*clone(void) const = 0;
//	virtual void		use(ICharacter &target);

	protected :

	std::string	_type;
};

#endif