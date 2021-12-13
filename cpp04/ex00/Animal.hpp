/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:32:40 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 09:58:27 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>

class Animal
{
    public :

    Animal();
    Animal(Animal const &obj);
    virtual ~Animal();

    Animal &    operator=(Animal const &obj);

    virtual void    makeSound(void) const;
    std::string    getType(void) const;

    protected :

    std::string _type;    
};


#endif