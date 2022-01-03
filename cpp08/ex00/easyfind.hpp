/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:06:40 by kali              #+#    #+#             */
/*   Updated: 2022/01/03 11:45:36 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>

template <typename T>
void    easyfind(const T &lst, int i)
{
	std::list<int>::const_iterator	it;
	(void)i;
	
    for (it = lst.begin(); it != lst.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	if (it == lst.end())
		std::cout << "end found" << std::endl;
};

#endif