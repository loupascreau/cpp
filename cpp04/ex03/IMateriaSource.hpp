/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:05:23 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/14 14:01:32 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public :
	
	virtual	~IMateriaSource() {}
	virtual	void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif