/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:32:40 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/10 10:47:35 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>

class A
{
    public :

    void            fonction1() {std::cout << "A::fonction1()" << std::endl;}
    virtual void    fonction2() {std::cout << "A::fonction2()" << std::endl;}
};

class B : public A
{
    public :

    void    fonction1() {std::cout << "B::fonction1()" << std::endl;}
    void    fonction2() {std::cout << "B::fonction2()" << std::endl;}  
};

#endif