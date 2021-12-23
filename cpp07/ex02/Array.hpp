/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 11:14:54 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/23 11:45:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public :
	
	Array<T>(void) : _array(new T[0]) {};
	Array<T>(unsigned int n) : _array(new T[n]) {};
//	Array<T>(Array<T> const & obj) {};
	~Array<T>(void) {};

	private :

	T	*_array;
};

#endif