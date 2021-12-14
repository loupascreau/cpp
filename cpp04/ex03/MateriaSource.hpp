/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:04:31 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 12:04:39 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
	
	MateriaSource();
	MateriaSource(MateriaSource const &obj);
	~MateriaSource();

	MateriaSource &	operator=(MateriaSource const &obj);

	void		learnMateria(AMateria *toCopy);
	AMateria	*createMateria(std::string const &type);

	AMateria	*getAmateria(int i) const;

	private :

	static int	_i;
	AMateria	*_amateria[4];
};

#endif