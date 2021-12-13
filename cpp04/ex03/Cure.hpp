/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:38:00 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 16:00:26 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public :

	Cure();
	Cure(Cure const &obj);
	~Cure();

	Cure &	operator=(Cure const &obj);

	AMateria	*clone(void) const;

	private :

	AMateria	*_amateria;
};

#endif