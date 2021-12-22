/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:11:43 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/22 10:17:50 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>

class Base
{
	public :
	
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif