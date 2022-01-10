/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/10 06:17:44 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantStack.hpp"

int		main(void)
{
	/****************init MutantStack****************/
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(47);
	mstack.push(12);
	mstack.push(24);

	std::cout << mstack;

	std::cout << "top = " << mstack.top() << " size = " << mstack.size() << std::endl;
	std::cout << "..top() -= 4" << std::endl;
	mstack.top() -= 4;
	std::cout << "top = " << mstack.top() << " size = " << mstack.size() << std::endl;

	mstack.pop();
	std::cout << "..pop().." << std::endl;

	std::cout << "top = " << mstack.top() << " size = " << mstack.size() << std::endl;

	/****************stack from MutantStack******************/

	std::cout << std::endl;
	std::stack<int>		s(mstack);

	while (!s.empty())
	{
		std::cout << " " << s.top() << std::endl;
		s.pop();
	}
	std::cout << " --";

	return 0;
}
