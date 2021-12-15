/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:02:53 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 12:37:50 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define	GREEN	"\033[0;32m"
# define	RED		"\033[0;31m"
# define	YELLOW	"\033[0;33m"
# define	BLUE	"\033[0;96m"
# define	WHITE	"\033[0m"

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

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
	virtual void		use(ICharacter &target);

	protected :

	std::string	_type;
};

#endif