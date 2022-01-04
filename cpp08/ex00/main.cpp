/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/04 06:13:17 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	displayFind(T it, T end)
{
	if (it == end)
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value found : " << *it << std::endl;
}

int		main(void)
{
	std::list<int>		lst;
	std::vector<char>	vec;
	int					value;
	char				c;
	int					i;

	std::srand(std::time(NULL));
	
	/***********list************/
	i = 0;
	while (i < MAX)
	{
		value = rand() % 50;
		lst.push_back(value);
		i++;
	}

	std::list<int>::iterator	it_lst;

	it_lst = easyfind(lst, 16);
	displayFind(it_lst, lst.end());
	it_lst = easyfind(lst, 42);
	displayFind(it_lst, lst.end());

	/**********vector***********/
	i = 0;
	c = 'a';
	while (i < 26)
	{
		vec.push_back(c);
		i++;
		c++;
	}

	std::vector<char>::iterator	it_vec;

	it_vec = easyfind(vec, 65);
	displayFind(it_vec, vec.end());
	it_vec = easyfind(vec, 104);
	displayFind(it_vec, vec.end());
	
	return 0;
}