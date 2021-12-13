/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:32:40 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 11:56:46 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    public :

    Animal();
    Animal(Animal const &obj);
    virtual ~Animal();

    Animal &    operator=(Animal const &obj);

    virtual void    makeSound(void) const;
    std::string     getType(void) const;

    virtual Brain    *getBrain(void) const = 0;

    protected :

    std::string _type;    
};


#endif