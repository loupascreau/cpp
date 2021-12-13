/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:31:33 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 16:00:11 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public :

	Ice();
	Ice(Ice const &obj);
	~Ice();

	Ice &	operator=(Ice const &obj);

	AMateria	*clone(void) const;

	private :

	AMateria	*_amateria;
};

#endif