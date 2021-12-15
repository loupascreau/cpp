/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:54:40 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/15 11:59:25 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public :

	WrongAnimal();
	WrongAnimal(WrongAnimal const &obj);
	~WrongAnimal();

	WrongAnimal &	operator=(WrongAnimal const &obj);

	void    		makeSound(void) const;
	std::string		getType(void) const;

	protected :

    std::string _type;
};

#endif