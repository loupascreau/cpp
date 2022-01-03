/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/03 11:39:04 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::list<int>	lst;
	
	lst.push_back(10);
	lst.push_back(13);
	lst.push_back(42);
	
	easyfind(lst, 12);
	return 0;
}