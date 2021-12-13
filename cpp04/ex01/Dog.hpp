/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:20:21 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 12:08:57 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public :

	Dog();
	Dog(Dog const &obj);
	~Dog();

	Dog	&	operator=(Dog const &obj);

	void	makeSound(void) const;

	Brain	*getBrain(void) const;
	std::string	getType(void) const;

	private :

	Brain	*_brain;
};

#endif