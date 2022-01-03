/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:06:40 by kali              #+#    #+#             */
/*   Updated: 2022/01/03 14:44:10 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>

template <typename T>
typename T::iterator   easyfind(T &container, int i)
{
	typename T::iterator	it;
	
	it = find(container.begin(), container.end(), i);
	
	if (it == container.end())
		return container.end();
	return it;
};

#endif