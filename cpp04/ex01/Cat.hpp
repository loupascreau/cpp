/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:44:50 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/16 12:02:59 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public :

	Cat();
	Cat(Cat const &obj);
	virtual ~Cat();

	Cat &	operator=(Cat const &obj);

	void	makeSound(void) const;

	Brain	*getBrain(void) const;
	std::string	getType(void) const;

	private :

	Brain	*_brain;
};

#endif