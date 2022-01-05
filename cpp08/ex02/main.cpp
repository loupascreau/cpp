/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/05 12:24:44 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantStack.hpp"

int		main(void)
{
	std::stack<int>		stack;

	if (stack.empty())
		std::cout << "stack is empty" << std::endl;
	std::cout << "0. size = " << stack.size() << std::endl;

	for (int i = 0; i < 5; i++)
		stack.push(i);
	std::cout << "1. size = " << stack.size() << std::endl;

	stack.pop();
	std::cout << "2. size = " << stack.size() << std::endl;
	return 0;
}
