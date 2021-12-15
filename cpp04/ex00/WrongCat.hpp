/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:52:50 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 11:58:46 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat();
	WrongCat(WrongCat const &obj);
	~WrongCat();

	WrongCat &	operator=(WrongCat const &obj);

	void    makeSound(void) const;
};

#endif