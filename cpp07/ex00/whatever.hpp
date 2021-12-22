/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:21:37 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/22 16:35:44 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	std::cout << "..swaping.." << std::endl;
	tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T		min(T a, T b)
{
	return (a < b ? a : b);
};

template <typename T>
T		max(T a, T b)
{
	return (a > b ? a : b);
};

#endif